/*
 * Copyright (C) 2004-2005 by Objective Systems, Inc.
 *
 * This software is furnished under an open source license and may be
 * used and copied only in accordance with the terms of this license.
 * The text of the license may generally be found in the root
 * directory of this installation in the COPYING file.  It
 * can also be viewed online at the following URL:
 *
 *   http://www.obj-sys.com/open/license.html
 *
 * Any redistributions of this file including modified versions must
 * maintain this copyright notice.
 *
 *****************************************************************************/
/**
 * @file ooStackCmds.h
 * This file contains stack commands which an user application can use to make
 * call, hang call etc.
 */

#ifndef OO_STACKCMDS_H
#define OO_STACKCMDS_H

#include "ootypes.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef EXTERN
#ifdef _WIN32
#define EXTERN __declspec(dllexport)
#else
#define EXTERN
#endif /* _WIN32 */
#endif /* EXTERN */
/**
 * @defgroup stackcmds Stack Control Commands
 * @{
 */
/**
 * This function is used by an application to place a call.
 * @param destip      Dotted IP address of the remote endpoint
 * @param port        Port number at which remote endpoint is listening for
 *                    calls.
 * @param callToken   Pointer to a buffer in which callToken will be returned
 *
 * @return            OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooMakeCall(char * destip, int port, char *callToken);

/**
 * This function is used by an user application to hang a call.
 * @param callToken   The uinque token for the call.
 *
 * @return            OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooHangCall(char * callToken);

/**
 * This function is used by the user application to stop monitoring calls.
 * @param None
 *
 * @return            OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooStopMonitor();

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
