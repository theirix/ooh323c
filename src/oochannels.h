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
 * @file oochannels.h
 * This file contains functions to create and use channels.
 */
#ifndef _OOCHANNELS_H_
#define _OOCHANNELS_H_

#include "H323-MESSAGES.h"
#include "MULTIMEDIA-SYSTEM-CONTROL.h"
#include "ootypes.h"
#include "ooSocket.h"

#define OORECEIVER 1
#define OOTRANSMITTER 2
#define OODUPLEX 3

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
 * @defgroup channels Channel Management
 * @{
 */

/**
 * This function is used to create a listener for incoming calls.
 * @param None
 *
 * @return           OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooCreateH323Listener(void);

/**
 * This function is used to create a listener for incoming H.245 connections.
 * @param call      Pointer to call for which H.245 listener has to be created
 *
 * @return          OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooCreateH245Listener(ooCallData *call);

/**
 * This function is used to accept incoming H.225 connections.
 * @param None
 *
 * @return            OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooAcceptH225Connection(void);

/**
 * This function is used to accept an incoming H.245 connection.
 * @param call        Pointer to a call for which H.245 connection request has
 *                    arrived.
 *
 * @return            OO_OK, on succes. OO_FAILED, on failure.
 */
EXTERN int ooAcceptH245Connection(ooCallData *call);

/**
 * This function is used to create an H.225 connection to the remote end point.
 * @param call       Pointer to the call for which H.225 connection has to be
 *                   setup.
 * @return           OO_OK, on succes. OO_FAILED, on failure.
 */
EXTERN int ooCreateH225Connection(ooCallData *call);

/**
 * This function is used to setup an H.245 connection with the remote endpoint
 * for control negotiations.
 * @param call      Pointer to call for which H.245 connection has to be setup.
 *
 * @return          OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooCreateH245Connection(ooCallData *call);

/**
 * This function is used to close an H.225 connection
 * @param call       Pointer to the call for which H.225 connection has to be
 *                   closed.
 *
 * @return           OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooCloseH225Connection(ooCallData *call);

/**
 * This function is used to close an H.245 connection for a call.
 * @param call       Pointer to call for which H.245 connection has to be closed.
 *
 * @return           OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooCloseH245Connection(ooCallData *call);

/**
 * This function is used to start monitoring channels for the calls. It has
 * an infinite loop which uses select to monitor various channels.
 * @param None
 *
 */
EXTERN int ooMonitorChannels(void);

/**
 * This function is called to stop the monitor channels thread.
 * It cleans up all the active calls, before stopping monitor thread.
 * @param None
 *
 * @return           OO_OK, on success. OO_FAILED, on failure
 */
EXTERN int ooStopMonitorCalls(void);

/**
 * This function is used to receive an H.2250 message received on a calls
 * H.225 channel. It receives the message, decodes it and calls
 * 'ooHandleH2250Message' to process the message.
 * @param call       Pointer to the call for which the message has to be
 *                   received.
 *
 * @return           OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooH2250Receive(ooCallData *call);

/**
 * This function is used to receive an H.245 message received on a calls
 * H.245 channel. It receives the message, decodes it and calls
 * 'ooHandleH245Message' to process it.
 * @param call       Pointer to the call for which the message has to be
 *                   received.
 *
 * @return           OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooH245Receive(ooCallData *call);

/**
 * This function is used to enqueue an H.225 message into an outgoing queue for
 * the call.
 * @param call      Pointer to call for which message has to be enqueued.
 * @param msg       Pointer to the H.225 message to be sent.
 *
 * @return          OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooSendH225Msg(ooCallData *call, Q931Message *msg);

/**
 * This function is used to enqueue an H.245 message into an outgoing queue for
 * the call.
 * @param call      Pointer to call for which message has to be enqueued.
 * @param msg       Pointer to the H.245 message to be sent.
 *
 * @return          OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooSendH245Msg(ooCallData *call, H245Message *msg);

/**
 * This function is used to Send a message on the channel, when channel is
 * available for write.
 * @param call       Pointer to call for which message has to be sent.
 * @param type       Type of the message.
 *
 * @return           OO_OK, on success. OO_FAILED, on failure.
 */
EXTERN int ooSendMsg(ooCallData *call, int type);

/**
 * This function is called after a message is sent on the call's channel.
 * It can be used to some followup action after message has been sent.
 * @param call       Pointer to call for which message has been sent.
 * @param msgType    Type of message
 *
 * @return           OO_OK, on success. OO_FAILED, on failure
 */
EXTERN int ooOnSendMsg(ooCallData *call, int msgType);



/**
 * @}
 */
#ifdef __cplusplus
}
#endif
#endif

