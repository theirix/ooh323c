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

#ifndef MULTIMEDIA_SYSTEM_CONTROL_H
#define MULTIMEDIA_SYSTEM_CONTROL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include "ooasn1.h"

/**************************************************************/
/*                                                            */
/*  SequenceNumber                                            */
/*                                                            */
/**************************************************************/

typedef ASN1UINT8 H245SequenceNumber;

EXTERN int asn1PE_H245SequenceNumber (OOCTXT* pctxt, H245SequenceNumber value);

EXTERN int asn1PD_H245SequenceNumber (OOCTXT* pctxt, H245SequenceNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityTableEntryNumber                                */
/*                                                            */
/**************************************************************/

typedef ASN1USINT H245CapabilityTableEntryNumber;

EXTERN int asn1PE_H245CapabilityTableEntryNumber (OOCTXT* pctxt, H245CapabilityTableEntryNumber value);

EXTERN int asn1PD_H245CapabilityTableEntryNumber (OOCTXT* pctxt, H245CapabilityTableEntryNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityDescriptorNumber                                */
/*                                                            */
/**************************************************************/

typedef ASN1UINT8 H245CapabilityDescriptorNumber;

EXTERN int asn1PE_H245CapabilityDescriptorNumber (OOCTXT* pctxt, H245CapabilityDescriptorNumber value);

EXTERN int asn1PD_H245CapabilityDescriptorNumber (OOCTXT* pctxt, H245CapabilityDescriptorNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  LogicalChannelNumber                                      */
/*                                                            */
/**************************************************************/

typedef ASN1USINT H245LogicalChannelNumber;

EXTERN int asn1PE_H245LogicalChannelNumber (OOCTXT* pctxt, H245LogicalChannelNumber value);

EXTERN int asn1PD_H245LogicalChannelNumber (OOCTXT* pctxt, H245LogicalChannelNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexTableEntryNumber                                 */
/*                                                            */
/**************************************************************/

typedef ASN1UINT8 H245MultiplexTableEntryNumber;

EXTERN int asn1PE_H245MultiplexTableEntryNumber (OOCTXT* pctxt, H245MultiplexTableEntryNumber value);

EXTERN int asn1PD_H245MultiplexTableEntryNumber (OOCTXT* pctxt, H245MultiplexTableEntryNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  McuNumber                                                 */
/*                                                            */
/**************************************************************/

typedef ASN1UINT8 H245McuNumber;

EXTERN int asn1PE_H245McuNumber (OOCTXT* pctxt, H245McuNumber value);

EXTERN int asn1PD_H245McuNumber (OOCTXT* pctxt, H245McuNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalNumber                                            */
/*                                                            */
/**************************************************************/

typedef ASN1UINT8 H245TerminalNumber;

EXTERN int asn1PE_H245TerminalNumber (OOCTXT* pctxt, H245TerminalNumber value);

EXTERN int asn1PD_H245TerminalNumber (OOCTXT* pctxt, H245TerminalNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalID                                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalID {
   ASN1UINT numocts;
   ASN1OCTET data[128];
} H245TerminalID;

EXTERN int asn1PE_H245TerminalID (OOCTXT* pctxt, H245TerminalID* pvalue);

EXTERN int asn1PD_H245TerminalID (OOCTXT* pctxt, H245TerminalID* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceID                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceID {
   ASN1UINT numocts;
   ASN1OCTET data[32];
} H245ConferenceID;

EXTERN int asn1PE_H245ConferenceID (OOCTXT* pctxt, H245ConferenceID* pvalue);

EXTERN int asn1PD_H245ConferenceID (OOCTXT* pctxt, H245ConferenceID* pvalue);

/**************************************************************/
/*                                                            */
/*  Password                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245Password {
   ASN1UINT numocts;
   ASN1OCTET data[32];
} H245Password;

EXTERN int asn1PE_H245Password (OOCTXT* pctxt, H245Password* pvalue);

EXTERN int asn1PD_H245Password (OOCTXT* pctxt, H245Password* pvalue);

/**************************************************************/
/*                                                            */
/*  MaximumBitRate                                            */
/*                                                            */
/**************************************************************/

typedef ASN1UINT H245MaximumBitRate;

EXTERN int asn1PE_H245MaximumBitRate (OOCTXT* pctxt, H245MaximumBitRate value);

EXTERN int asn1PD_H245MaximumBitRate (OOCTXT* pctxt, H245MaximumBitRate* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityIdentifier_uuid                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CapabilityIdentifier_uuid {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H245CapabilityIdentifier_uuid;

EXTERN int asn1PE_H245CapabilityIdentifier_uuid (OOCTXT* pctxt, H245CapabilityIdentifier_uuid* pvalue);

EXTERN int asn1PD_H245CapabilityIdentifier_uuid (OOCTXT* pctxt, H245CapabilityIdentifier_uuid* pvalue);

/**************************************************************/
/*                                                            */
/*  ParameterIdentifier_uuid                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ParameterIdentifier_uuid {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H245ParameterIdentifier_uuid;

EXTERN int asn1PE_H245ParameterIdentifier_uuid (OOCTXT* pctxt, H245ParameterIdentifier_uuid* pvalue);

EXTERN int asn1PD_H245ParameterIdentifier_uuid (OOCTXT* pctxt, H245ParameterIdentifier_uuid* pvalue);

/**************************************************************/
/*                                                            */
/*  NetworkAccessParameters_externalReference                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NetworkAccessParameters_externalReference {
   ASN1UINT numocts;
   ASN1OCTET data[255];
} H245NetworkAccessParameters_externalReference;

EXTERN int asn1PE_H245NetworkAccessParameters_externalReference (OOCTXT* pctxt, H245NetworkAccessParameters_externalReference* pvalue);

EXTERN int asn1PD_H245NetworkAccessParameters_externalReference (OOCTXT* pctxt, H245NetworkAccessParameters_externalReference* pvalue);

/**************************************************************/
/*                                                            */
/*  Q2931Address_address_nsapAddress                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245Q2931Address_address_nsapAddress {
   ASN1UINT numocts;
   ASN1OCTET data[20];
} H245Q2931Address_address_nsapAddress;

EXTERN int asn1PE_H245Q2931Address_address_nsapAddress (OOCTXT* pctxt, H245Q2931Address_address_nsapAddress* pvalue);

EXTERN int asn1PD_H245Q2931Address_address_nsapAddress (OOCTXT* pctxt, H245Q2931Address_address_nsapAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  Q2931Address_subaddress                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245Q2931Address_subaddress {
   ASN1UINT numocts;
   ASN1OCTET data[20];
} H245Q2931Address_subaddress;

EXTERN int asn1PE_H245Q2931Address_subaddress (OOCTXT* pctxt, H245Q2931Address_subaddress* pvalue);

EXTERN int asn1PD_H245Q2931Address_subaddress (OOCTXT* pctxt, H245Q2931Address_subaddress* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPAddress_network                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPAddress_network {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H245UnicastAddress_iPAddress_network;

EXTERN int asn1PE_H245UnicastAddress_iPAddress_network (OOCTXT* pctxt, H245UnicastAddress_iPAddress_network* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPAddress_network (OOCTXT* pctxt, H245UnicastAddress_iPAddress_network* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPXAddress_node                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPXAddress_node {
   ASN1UINT numocts;
   ASN1OCTET data[6];
} H245UnicastAddress_iPXAddress_node;

EXTERN int asn1PE_H245UnicastAddress_iPXAddress_node (OOCTXT* pctxt, H245UnicastAddress_iPXAddress_node* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPXAddress_node (OOCTXT* pctxt, H245UnicastAddress_iPXAddress_node* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPXAddress_netnum                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPXAddress_netnum {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H245UnicastAddress_iPXAddress_netnum;

EXTERN int asn1PE_H245UnicastAddress_iPXAddress_netnum (OOCTXT* pctxt, H245UnicastAddress_iPXAddress_netnum* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPXAddress_netnum (OOCTXT* pctxt, H245UnicastAddress_iPXAddress_netnum* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPXAddress_tsapIdentifier                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPXAddress_tsapIdentifier {
   ASN1UINT numocts;
   ASN1OCTET data[2];
} H245UnicastAddress_iPXAddress_tsapIdentifier;

EXTERN int asn1PE_H245UnicastAddress_iPXAddress_tsapIdentifier (OOCTXT* pctxt, H245UnicastAddress_iPXAddress_tsapIdentifier* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPXAddress_tsapIdentifier (OOCTXT* pctxt, H245UnicastAddress_iPXAddress_tsapIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iP6Address_network                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iP6Address_network {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H245UnicastAddress_iP6Address_network;

EXTERN int asn1PE_H245UnicastAddress_iP6Address_network (OOCTXT* pctxt, H245UnicastAddress_iP6Address_network* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iP6Address_network (OOCTXT* pctxt, H245UnicastAddress_iP6Address_network* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_netBios                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_netBios {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H245UnicastAddress_netBios;

EXTERN int asn1PE_H245UnicastAddress_netBios (OOCTXT* pctxt, H245UnicastAddress_netBios* pvalue);

EXTERN int asn1PD_H245UnicastAddress_netBios (OOCTXT* pctxt, H245UnicastAddress_netBios* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPSourceRouteAddress_network               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPSourceRouteAddress_network {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H245UnicastAddress_iPSourceRouteAddress_network;

EXTERN int asn1PE_H245UnicastAddress_iPSourceRouteAddress_network (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress_network* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPSourceRouteAddress_network (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress_network* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPSourceRouteAddress_route_element         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPSourceRouteAddress_route_element {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H245UnicastAddress_iPSourceRouteAddress_route_element;

EXTERN int asn1PE_H245UnicastAddress_iPSourceRouteAddress_route_element (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress_route_element* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPSourceRouteAddress_route_element (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress_route_element* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_nsap                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_nsap {
   ASN1UINT numocts;
   ASN1OCTET data[20];
} H245UnicastAddress_nsap;

EXTERN int asn1PE_H245UnicastAddress_nsap (OOCTXT* pctxt, H245UnicastAddress_nsap* pvalue);

EXTERN int asn1PD_H245UnicastAddress_nsap (OOCTXT* pctxt, H245UnicastAddress_nsap* pvalue);

/**************************************************************/
/*                                                            */
/*  MulticastAddress_iPAddress_network                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MulticastAddress_iPAddress_network {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H245MulticastAddress_iPAddress_network;

EXTERN int asn1PE_H245MulticastAddress_iPAddress_network (OOCTXT* pctxt, H245MulticastAddress_iPAddress_network* pvalue);

EXTERN int asn1PD_H245MulticastAddress_iPAddress_network (OOCTXT* pctxt, H245MulticastAddress_iPAddress_network* pvalue);

/**************************************************************/
/*                                                            */
/*  MulticastAddress_iP6Address_network                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MulticastAddress_iP6Address_network {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H245MulticastAddress_iP6Address_network;

EXTERN int asn1PE_H245MulticastAddress_iP6Address_network (OOCTXT* pctxt, H245MulticastAddress_iP6Address_network* pvalue);

EXTERN int asn1PD_H245MulticastAddress_iP6Address_network (OOCTXT* pctxt, H245MulticastAddress_iP6Address_network* pvalue);

/**************************************************************/
/*                                                            */
/*  MulticastAddress_nsap                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MulticastAddress_nsap {
   ASN1UINT numocts;
   ASN1OCTET data[20];
} H245MulticastAddress_nsap;

EXTERN int asn1PE_H245MulticastAddress_nsap (OOCTXT* pctxt, H245MulticastAddress_nsap* pvalue);

EXTERN int asn1PD_H245MulticastAddress_nsap (OOCTXT* pctxt, H245MulticastAddress_nsap* pvalue);

/**************************************************************/
/*                                                            */
/*  EscrowData_escrowValue                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EscrowData_escrowValue {
   ASN1UINT  numbits;
   ASN1OCTET data[8192];
} H245EscrowData_escrowValue;

EXTERN int asn1PE_H245EscrowData_escrowValue (OOCTXT* pctxt, H245EscrowData_escrowValue* pvalue);

EXTERN int asn1PD_H245EscrowData_escrowValue (OOCTXT* pctxt, H245EscrowData_escrowValue* pvalue);

/**************************************************************/
/*                                                            */
/*  SubstituteConferenceIDCommand_conferenceIdentifier        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245SubstituteConferenceIDCommand_conferenceIdentifier {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H245SubstituteConferenceIDCommand_conferenceIdentifier;

EXTERN int asn1PE_H245SubstituteConferenceIDCommand_conferenceIdentifier (OOCTXT* pctxt, H245SubstituteConferenceIDCommand_conferenceIdentifier* pvalue);

EXTERN int asn1PD_H245SubstituteConferenceIDCommand_conferenceIdentifier (OOCTXT* pctxt, H245SubstituteConferenceIDCommand_conferenceIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  VendorIdentification_productNumber                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VendorIdentification_productNumber {
   ASN1UINT numocts;
   ASN1OCTET data[256];
} H245VendorIdentification_productNumber;

EXTERN int asn1PE_H245VendorIdentification_productNumber (OOCTXT* pctxt, H245VendorIdentification_productNumber* pvalue);

EXTERN int asn1PD_H245VendorIdentification_productNumber (OOCTXT* pctxt, H245VendorIdentification_productNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  VendorIdentification_versionNumber                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VendorIdentification_versionNumber {
   ASN1UINT numocts;
   ASN1OCTET data[256];
} H245VendorIdentification_versionNumber;

EXTERN int asn1PE_H245VendorIdentification_versionNumber (OOCTXT* pctxt, H245VendorIdentification_versionNumber* pvalue);

EXTERN int asn1PD_H245VendorIdentification_versionNumber (OOCTXT* pctxt, H245VendorIdentification_versionNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardIdentifier_h221NonStandard                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NonStandardIdentifier_h221NonStandard {
   ASN1UINT8 t35CountryCode;
   ASN1UINT8 t35Extension;
   ASN1USINT manufacturerCode;
} H245NonStandardIdentifier_h221NonStandard;

EXTERN int asn1PE_H245NonStandardIdentifier_h221NonStandard (OOCTXT* pctxt, H245NonStandardIdentifier_h221NonStandard* pvalue);

EXTERN int asn1PD_H245NonStandardIdentifier_h221NonStandard (OOCTXT* pctxt, H245NonStandardIdentifier_h221NonStandard* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardIdentifier                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NonStandardIdentifier_object 1
#define T_H245NonStandardIdentifier_h221NonStandard 2

typedef struct EXTERN H245NonStandardIdentifier {
   int t;
   union {
      /* t = 1 */
      ASN1OBJID *object;
      /* t = 2 */
      H245NonStandardIdentifier_h221NonStandard *h221NonStandard;
   } u;
} H245NonStandardIdentifier;

EXTERN int asn1PE_H245NonStandardIdentifier (OOCTXT* pctxt, H245NonStandardIdentifier* pvalue);

EXTERN int asn1PD_H245NonStandardIdentifier (OOCTXT* pctxt, H245NonStandardIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardParameter                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NonStandardParameter {
   H245NonStandardIdentifier nonStandardIdentifier;
   ASN1DynOctStr data;
} H245NonStandardParameter;

EXTERN int asn1PE_H245NonStandardParameter (OOCTXT* pctxt, H245NonStandardParameter* pvalue);

EXTERN int asn1PD_H245NonStandardParameter (OOCTXT* pctxt, H245NonStandardParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardMessage                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NonStandardMessage {
   H245NonStandardParameter nonStandardData;
   DList extElem1;
} H245NonStandardMessage;

EXTERN int asn1PE_H245NonStandardMessage (OOCTXT* pctxt, H245NonStandardMessage* pvalue);

EXTERN int asn1PD_H245NonStandardMessage (OOCTXT* pctxt, H245NonStandardMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  MasterSlaveDetermination                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MasterSlaveDetermination {
   ASN1UINT8 terminalType;
   ASN1UINT statusDeterminationNumber;
   DList extElem1;
} H245MasterSlaveDetermination;

EXTERN int asn1PE_H245MasterSlaveDetermination (OOCTXT* pctxt, H245MasterSlaveDetermination* pvalue);

EXTERN int asn1PD_H245MasterSlaveDetermination (OOCTXT* pctxt, H245MasterSlaveDetermination* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_aal1                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VCCapability_aal1 {
   ASN1BOOL nullClockRecovery;
   ASN1BOOL srtsClockRecovery;
   ASN1BOOL adaptiveClockRecovery;
   ASN1BOOL nullErrorCorrection;
   ASN1BOOL longInterleaver;
   ASN1BOOL shortInterleaver;
   ASN1BOOL errorCorrectionOnly;
   ASN1BOOL structuredDataTransfer;
   ASN1BOOL partiallyFilledCells;
   DList extElem1;
} H245VCCapability_aal1;

EXTERN int asn1PE_H245VCCapability_aal1 (OOCTXT* pctxt, H245VCCapability_aal1* pvalue);

EXTERN int asn1PD_H245VCCapability_aal1 (OOCTXT* pctxt, H245VCCapability_aal1* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_aal5                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VCCapability_aal5 {
   ASN1USINT forwardMaximumSDUSize;
   ASN1USINT backwardMaximumSDUSize;
   DList extElem1;
} H245VCCapability_aal5;

EXTERN int asn1PE_H245VCCapability_aal5 (OOCTXT* pctxt, H245VCCapability_aal5* pvalue);

EXTERN int asn1PD_H245VCCapability_aal5 (OOCTXT* pctxt, H245VCCapability_aal5* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_availableBitRates_type_rangeOfBitRates       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VCCapability_availableBitRates_type_rangeOfBitRates {
   ASN1USINT lowerBitRate;
   ASN1USINT higherBitRate;
} H245VCCapability_availableBitRates_type_rangeOfBitRates;

EXTERN int asn1PE_H245VCCapability_availableBitRates_type_rangeOfBitRates (OOCTXT* pctxt, H245VCCapability_availableBitRates_type_rangeOfBitRates* pvalue);

EXTERN int asn1PD_H245VCCapability_availableBitRates_type_rangeOfBitRates (OOCTXT* pctxt, H245VCCapability_availableBitRates_type_rangeOfBitRates* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_availableBitRates_type                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245VCCapability_availableBitRates_type_singleBitRate 1
#define T_H245VCCapability_availableBitRates_type_rangeOfBitRates 2

typedef struct EXTERN H245VCCapability_availableBitRates_type {
   int t;
   union {
      /* t = 1 */
      ASN1USINT singleBitRate;
      /* t = 2 */
      H245VCCapability_availableBitRates_type_rangeOfBitRates *rangeOfBitRates;
   } u;
} H245VCCapability_availableBitRates_type;

EXTERN int asn1PE_H245VCCapability_availableBitRates_type (OOCTXT* pctxt, H245VCCapability_availableBitRates_type* pvalue);

EXTERN int asn1PD_H245VCCapability_availableBitRates_type (OOCTXT* pctxt, H245VCCapability_availableBitRates_type* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_availableBitRates                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VCCapability_availableBitRates {
   H245VCCapability_availableBitRates_type type;
   DList extElem1;
} H245VCCapability_availableBitRates;

EXTERN int asn1PE_H245VCCapability_availableBitRates (OOCTXT* pctxt, H245VCCapability_availableBitRates* pvalue);

EXTERN int asn1PD_H245VCCapability_availableBitRates (OOCTXT* pctxt, H245VCCapability_availableBitRates* pvalue);

/**************************************************************/
/*                                                            */
/*  Q2931Address_address                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245Q2931Address_address_internationalNumber 1
#define T_H245Q2931Address_address_nsapAddress 2
#define T_H245Q2931Address_address_extElem1 3

typedef struct EXTERN H245Q2931Address_address {
   int t;
   union {
      /* t = 1 */
      ASN1NumericString internationalNumber;
      /* t = 2 */
      H245Q2931Address_address_nsapAddress *nsapAddress;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245Q2931Address_address;

EXTERN int asn1PE_H245Q2931Address_address (OOCTXT* pctxt, H245Q2931Address_address* pvalue);

EXTERN int asn1PD_H245Q2931Address_address (OOCTXT* pctxt, H245Q2931Address_address* pvalue);

/**************************************************************/
/*                                                            */
/*  Q2931Address                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245Q2931Address {
   struct {
      unsigned subaddressPresent : 1;
   } m;
   H245Q2931Address_address address;
   H245Q2931Address_subaddress subaddress;
   DList extElem1;
} H245Q2931Address;

EXTERN int asn1PE_H245Q2931Address (OOCTXT* pctxt, H245Q2931Address* pvalue);

EXTERN int asn1PD_H245Q2931Address (OOCTXT* pctxt, H245Q2931Address* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_aal1ViaGateway_gatewayAddress                */
/*                                                            */
/**************************************************************/

/* List of H245Q2931Address */
typedef DList H245VCCapability_aal1ViaGateway_gatewayAddress;

EXTERN int asn1PE_H245VCCapability_aal1ViaGateway_gatewayAddress (OOCTXT* pctxt, H245VCCapability_aal1ViaGateway_gatewayAddress value);

EXTERN int asn1PD_H245VCCapability_aal1ViaGateway_gatewayAddress (OOCTXT* pctxt, H245VCCapability_aal1ViaGateway_gatewayAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability_aal1ViaGateway                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VCCapability_aal1ViaGateway {
   H245VCCapability_aal1ViaGateway_gatewayAddress gatewayAddress;
   ASN1BOOL nullClockRecovery;
   ASN1BOOL srtsClockRecovery;
   ASN1BOOL adaptiveClockRecovery;
   ASN1BOOL nullErrorCorrection;
   ASN1BOOL longInterleaver;
   ASN1BOOL shortInterleaver;
   ASN1BOOL errorCorrectionOnly;
   ASN1BOOL structuredDataTransfer;
   ASN1BOOL partiallyFilledCells;
   DList extElem1;
} H245VCCapability_aal1ViaGateway;

EXTERN int asn1PE_H245VCCapability_aal1ViaGateway (OOCTXT* pctxt, H245VCCapability_aal1ViaGateway* pvalue);

EXTERN int asn1PD_H245VCCapability_aal1ViaGateway (OOCTXT* pctxt, H245VCCapability_aal1ViaGateway* pvalue);

/**************************************************************/
/*                                                            */
/*  VCCapability                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VCCapability {
   struct {
      unsigned aal1Present : 1;
      unsigned aal5Present : 1;
      unsigned aal1ViaGatewayPresent : 1;
   } m;
   H245VCCapability_aal1 aal1;
   H245VCCapability_aal5 aal5;
   ASN1BOOL transportStream;
   ASN1BOOL programStream;
   H245VCCapability_availableBitRates availableBitRates;
   H245VCCapability_aal1ViaGateway aal1ViaGateway;
   DList extElem1;
} H245VCCapability;

EXTERN int asn1PE_H245VCCapability (OOCTXT* pctxt, H245VCCapability* pvalue);

EXTERN int asn1PD_H245VCCapability (OOCTXT* pctxt, H245VCCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  _SetOfH245VCCapability                                    */
/*                                                            */
/**************************************************************/

/* List of H245VCCapability */
typedef DList H245_SetOfH245VCCapability;

EXTERN int asn1PE_H245_SetOfH245VCCapability (OOCTXT* pctxt, H245_SetOfH245VCCapability value);

EXTERN int asn1PD_H245_SetOfH245VCCapability (OOCTXT* pctxt, H245_SetOfH245VCCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H222Capability                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H222Capability {
   ASN1USINT numberOfVCs;
   H245_SetOfH245VCCapability vcCapability;
   DList extElem1;
} H245H222Capability;

EXTERN int asn1PE_H245H222Capability (OOCTXT* pctxt, H245H222Capability* pvalue);

EXTERN int asn1PD_H245H222Capability (OOCTXT* pctxt, H245H222Capability* pvalue);

/**************************************************************/
/*                                                            */
/*  H223Capability_h223MultiplexTableCapability_enhanced      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223Capability_h223MultiplexTableCapability_enhanced {
   ASN1UINT8 maximumNestingDepth;
   ASN1UINT8 maximumElementListSize;
   ASN1UINT8 maximumSubElementListSize;
   DList extElem1;
} H245H223Capability_h223MultiplexTableCapability_enhanced;

EXTERN int asn1PE_H245H223Capability_h223MultiplexTableCapability_enhanced (OOCTXT* pctxt, H245H223Capability_h223MultiplexTableCapability_enhanced* pvalue);

EXTERN int asn1PD_H245H223Capability_h223MultiplexTableCapability_enhanced (OOCTXT* pctxt, H245H223Capability_h223MultiplexTableCapability_enhanced* pvalue);

/**************************************************************/
/*                                                            */
/*  H223Capability_h223MultiplexTableCapability               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223Capability_h223MultiplexTableCapability_basic 1
#define T_H245H223Capability_h223MultiplexTableCapability_enhanced 2

typedef struct EXTERN H245H223Capability_h223MultiplexTableCapability {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245H223Capability_h223MultiplexTableCapability_enhanced *enhanced;
   } u;
} H245H223Capability_h223MultiplexTableCapability;

EXTERN int asn1PE_H245H223Capability_h223MultiplexTableCapability (OOCTXT* pctxt, H245H223Capability_h223MultiplexTableCapability* pvalue);

EXTERN int asn1PD_H245H223Capability_h223MultiplexTableCapability (OOCTXT* pctxt, H245H223Capability_h223MultiplexTableCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H223Capability_mobileOperationTransmitCapability          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223Capability_mobileOperationTransmitCapability {
   ASN1BOOL modeChangeCapability;
   ASN1BOOL h223AnnexA;
   ASN1BOOL h223AnnexADoubleFlag;
   ASN1BOOL h223AnnexB;
   ASN1BOOL h223AnnexBwithHeader;
   DList extElem1;
} H245H223Capability_mobileOperationTransmitCapability;

EXTERN int asn1PE_H245H223Capability_mobileOperationTransmitCapability (OOCTXT* pctxt, H245H223Capability_mobileOperationTransmitCapability* pvalue);

EXTERN int asn1PD_H245H223Capability_mobileOperationTransmitCapability (OOCTXT* pctxt, H245H223Capability_mobileOperationTransmitCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AnnexCCapability                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223AnnexCCapability {
   struct {
      unsigned rsCodeCapabilityPresent : 1;
   } m;
   ASN1BOOL videoWithAL1M;
   ASN1BOOL videoWithAL2M;
   ASN1BOOL videoWithAL3M;
   ASN1BOOL audioWithAL1M;
   ASN1BOOL audioWithAL2M;
   ASN1BOOL audioWithAL3M;
   ASN1BOOL dataWithAL1M;
   ASN1BOOL dataWithAL2M;
   ASN1BOOL dataWithAL3M;
   ASN1BOOL alpduInterleaving;
   ASN1USINT maximumAL1MPDUSize;
   ASN1USINT maximumAL2MSDUSize;
   ASN1USINT maximumAL3MSDUSize;
   ASN1BOOL rsCodeCapability;
   DList extElem1;
} H245H223AnnexCCapability;

EXTERN int asn1PE_H245H223AnnexCCapability (OOCTXT* pctxt, H245H223AnnexCCapability* pvalue);

EXTERN int asn1PD_H245H223AnnexCCapability (OOCTXT* pctxt, H245H223AnnexCCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H223Capability_mobileMultilinkFrameCapability             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223Capability_mobileMultilinkFrameCapability {
   ASN1UINT8 maximumSampleSize;
   ASN1USINT maximumPayloadLength;
   DList extElem1;
} H245H223Capability_mobileMultilinkFrameCapability;

EXTERN int asn1PE_H245H223Capability_mobileMultilinkFrameCapability (OOCTXT* pctxt, H245H223Capability_mobileMultilinkFrameCapability* pvalue);

EXTERN int asn1PD_H245H223Capability_mobileMultilinkFrameCapability (OOCTXT* pctxt, H245H223Capability_mobileMultilinkFrameCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H223Capability                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223Capability {
   struct {
      unsigned maxMUXPDUSizeCapabilityPresent : 1;
      unsigned nsrpSupportPresent : 1;
      unsigned mobileOperationTransmitCapabilityPresent : 1;
      unsigned h223AnnexCCapabilityPresent : 1;
      unsigned bitRatePresent : 1;
      unsigned mobileMultilinkFrameCapabilityPresent : 1;
   } m;
   ASN1BOOL transportWithI_frames;
   ASN1BOOL videoWithAL1;
   ASN1BOOL videoWithAL2;
   ASN1BOOL videoWithAL3;
   ASN1BOOL audioWithAL1;
   ASN1BOOL audioWithAL2;
   ASN1BOOL audioWithAL3;
   ASN1BOOL dataWithAL1;
   ASN1BOOL dataWithAL2;
   ASN1BOOL dataWithAL3;
   ASN1USINT maximumAl2SDUSize;
   ASN1USINT maximumAl3SDUSize;
   ASN1USINT maximumDelayJitter;
   H245H223Capability_h223MultiplexTableCapability h223MultiplexTableCapability;
   ASN1BOOL maxMUXPDUSizeCapability;
   ASN1BOOL nsrpSupport;
   H245H223Capability_mobileOperationTransmitCapability mobileOperationTransmitCapability;
   H245H223AnnexCCapability h223AnnexCCapability;
   ASN1USINT bitRate;
   H245H223Capability_mobileMultilinkFrameCapability mobileMultilinkFrameCapability;
   DList extElem1;
} H245H223Capability;

EXTERN int asn1PE_H245H223Capability (OOCTXT* pctxt, H245H223Capability* pvalue);

EXTERN int asn1PD_H245H223Capability (OOCTXT* pctxt, H245H223Capability* pvalue);

/**************************************************************/
/*                                                            */
/*  V75Capability                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V75Capability {
   ASN1BOOL audioHeader;
   DList extElem1;
} H245V75Capability;

EXTERN int asn1PE_H245V75Capability (OOCTXT* pctxt, H245V75Capability* pvalue);

EXTERN int asn1PD_H245V75Capability (OOCTXT* pctxt, H245V75Capability* pvalue);

/**************************************************************/
/*                                                            */
/*  V76Capability                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V76Capability {
   ASN1BOOL suspendResumeCapabilitywAddress;
   ASN1BOOL suspendResumeCapabilitywoAddress;
   ASN1BOOL rejCapability;
   ASN1BOOL sREJCapability;
   ASN1BOOL mREJCapability;
   ASN1BOOL crc8bitCapability;
   ASN1BOOL crc16bitCapability;
   ASN1BOOL crc32bitCapability;
   ASN1BOOL uihCapability;
   ASN1USINT numOfDLCS;
   ASN1BOOL twoOctetAddressFieldCapability;
   ASN1BOOL loopBackTestCapability;
   ASN1USINT n401Capability;
   ASN1UINT8 maxWindowSizeCapability;
   H245V75Capability v75Capability;
   DList extElem1;
} H245V76Capability;

EXTERN int asn1PE_H245V76Capability (OOCTXT* pctxt, H245V76Capability* pvalue);

EXTERN int asn1PD_H245V76Capability (OOCTXT* pctxt, H245V76Capability* pvalue);

/**************************************************************/
/*                                                            */
/*  V42bis                                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V42bis {
   ASN1UINT numberOfCodewords;
   ASN1USINT maximumStringLength;
   DList extElem1;
} H245V42bis;

EXTERN int asn1PE_H245V42bis (OOCTXT* pctxt, H245V42bis* pvalue);

EXTERN int asn1PD_H245V42bis (OOCTXT* pctxt, H245V42bis* pvalue);

/**************************************************************/
/*                                                            */
/*  CompressionType                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CompressionType_v42bis    1
#define T_H245CompressionType_extElem1  2

typedef struct EXTERN H245CompressionType {
   int t;
   union {
      /* t = 1 */
      H245V42bis *v42bis;
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245CompressionType;

EXTERN int asn1PE_H245CompressionType (OOCTXT* pctxt, H245CompressionType* pvalue);

EXTERN int asn1PD_H245CompressionType (OOCTXT* pctxt, H245CompressionType* pvalue);

/**************************************************************/
/*                                                            */
/*  DataProtocolCapability_v76wCompression                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DataProtocolCapability_v76wCompression_transmitCompression 1
#define T_H245DataProtocolCapability_v76wCompression_receiveCompression 2
#define T_H245DataProtocolCapability_v76wCompression_transmitAndReceiveCompression 3
#define T_H245DataProtocolCapability_v76wCompression_extElem1 4

typedef struct EXTERN H245DataProtocolCapability_v76wCompression {
   int t;
   union {
      /* t = 1 */
      H245CompressionType *transmitCompression;
      /* t = 2 */
      H245CompressionType *receiveCompression;
      /* t = 3 */
      H245CompressionType *transmitAndReceiveCompression;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245DataProtocolCapability_v76wCompression;

EXTERN int asn1PE_H245DataProtocolCapability_v76wCompression (OOCTXT* pctxt, H245DataProtocolCapability_v76wCompression* pvalue);

EXTERN int asn1PD_H245DataProtocolCapability_v76wCompression (OOCTXT* pctxt, H245DataProtocolCapability_v76wCompression* pvalue);

/**************************************************************/
/*                                                            */
/*  DataProtocolCapability                                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DataProtocolCapability_nonStandard 1
#define T_H245DataProtocolCapability_v14buffered 2
#define T_H245DataProtocolCapability_v42lapm 3
#define T_H245DataProtocolCapability_hdlcFrameTunnelling 4
#define T_H245DataProtocolCapability_h310SeparateVCStack 5
#define T_H245DataProtocolCapability_h310SingleVCStack 6
#define T_H245DataProtocolCapability_transparent 7
#define T_H245DataProtocolCapability_segmentationAndReassembly 8
#define T_H245DataProtocolCapability_hdlcFrameTunnelingwSAR 9
#define T_H245DataProtocolCapability_v120 10
#define T_H245DataProtocolCapability_separateLANStack 11
#define T_H245DataProtocolCapability_v76wCompression 12
#define T_H245DataProtocolCapability_tcp 13
#define T_H245DataProtocolCapability_udp 14
#define T_H245DataProtocolCapability_extElem1 15

typedef struct EXTERN H245DataProtocolCapability {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      /* t = 12 */
      H245DataProtocolCapability_v76wCompression *v76wCompression;
      /* t = 13 */
      /* t = 14 */
      /* t = 15 */
      ASN1OpenType *extElem1;
   } u;
} H245DataProtocolCapability;

EXTERN int asn1PE_H245DataProtocolCapability (OOCTXT* pctxt, H245DataProtocolCapability* pvalue);

EXTERN int asn1PD_H245DataProtocolCapability (OOCTXT* pctxt, H245DataProtocolCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  T84Profile_t84Restricted                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245T84Profile_t84Restricted {
   ASN1BOOL qcif;
   ASN1BOOL cif;
   ASN1BOOL ccir601Seq;
   ASN1BOOL ccir601Prog;
   ASN1BOOL hdtvSeq;
   ASN1BOOL hdtvProg;
   ASN1BOOL g3FacsMH200x100;
   ASN1BOOL g3FacsMH200x200;
   ASN1BOOL g4FacsMMR200x100;
   ASN1BOOL g4FacsMMR200x200;
   ASN1BOOL jbig200x200Seq;
   ASN1BOOL jbig200x200Prog;
   ASN1BOOL jbig300x300Seq;
   ASN1BOOL jbig300x300Prog;
   ASN1BOOL digPhotoLow;
   ASN1BOOL digPhotoMedSeq;
   ASN1BOOL digPhotoMedProg;
   ASN1BOOL digPhotoHighSeq;
   ASN1BOOL digPhotoHighProg;
   DList extElem1;
} H245T84Profile_t84Restricted;

EXTERN int asn1PE_H245T84Profile_t84Restricted (OOCTXT* pctxt, H245T84Profile_t84Restricted* pvalue);

EXTERN int asn1PD_H245T84Profile_t84Restricted (OOCTXT* pctxt, H245T84Profile_t84Restricted* pvalue);

/**************************************************************/
/*                                                            */
/*  T84Profile                                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245T84Profile_t84Unrestricted 1
#define T_H245T84Profile_t84Restricted  2

typedef struct EXTERN H245T84Profile {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245T84Profile_t84Restricted *t84Restricted;
   } u;
} H245T84Profile;

EXTERN int asn1PE_H245T84Profile (OOCTXT* pctxt, H245T84Profile* pvalue);

EXTERN int asn1PD_H245T84Profile (OOCTXT* pctxt, H245T84Profile* pvalue);

/**************************************************************/
/*                                                            */
/*  DataApplicationCapability_application_t84                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataApplicationCapability_application_t84 {
   H245DataProtocolCapability t84Protocol;
   H245T84Profile t84Profile;
} H245DataApplicationCapability_application_t84;

EXTERN int asn1PE_H245DataApplicationCapability_application_t84 (OOCTXT* pctxt, H245DataApplicationCapability_application_t84* pvalue);

EXTERN int asn1PD_H245DataApplicationCapability_application_t84 (OOCTXT* pctxt, H245DataApplicationCapability_application_t84* pvalue);

/**************************************************************/
/*                                                            */
/*  DataApplicationCapability_application_nlpid               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataApplicationCapability_application_nlpid {
   H245DataProtocolCapability nlpidProtocol;
   ASN1DynOctStr nlpidData;
} H245DataApplicationCapability_application_nlpid;

EXTERN int asn1PE_H245DataApplicationCapability_application_nlpid (OOCTXT* pctxt, H245DataApplicationCapability_application_nlpid* pvalue);

EXTERN int asn1PD_H245DataApplicationCapability_application_nlpid (OOCTXT* pctxt, H245DataApplicationCapability_application_nlpid* pvalue);

/**************************************************************/
/*                                                            */
/*  T38FaxRateManagement                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245T38FaxRateManagement_localTCF 1
#define T_H245T38FaxRateManagement_transferredTCF 2
#define T_H245T38FaxRateManagement_extElem1 3

typedef struct EXTERN H245T38FaxRateManagement {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245T38FaxRateManagement;

EXTERN int asn1PE_H245T38FaxRateManagement (OOCTXT* pctxt, H245T38FaxRateManagement* pvalue);

EXTERN int asn1PD_H245T38FaxRateManagement (OOCTXT* pctxt, H245T38FaxRateManagement* pvalue);

/**************************************************************/
/*                                                            */
/*  T38FaxUdpOptions_t38FaxUdpEC                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245T38FaxUdpOptions_t38FaxUdpEC_t38UDPFEC 1
#define T_H245T38FaxUdpOptions_t38FaxUdpEC_t38UDPRedundancy 2
#define T_H245T38FaxUdpOptions_t38FaxUdpEC_extElem1 3

typedef struct EXTERN H245T38FaxUdpOptions_t38FaxUdpEC {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245T38FaxUdpOptions_t38FaxUdpEC;

EXTERN int asn1PE_H245T38FaxUdpOptions_t38FaxUdpEC (OOCTXT* pctxt, H245T38FaxUdpOptions_t38FaxUdpEC* pvalue);

EXTERN int asn1PD_H245T38FaxUdpOptions_t38FaxUdpEC (OOCTXT* pctxt, H245T38FaxUdpOptions_t38FaxUdpEC* pvalue);

/**************************************************************/
/*                                                            */
/*  T38FaxUdpOptions                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245T38FaxUdpOptions {
   struct {
      unsigned t38FaxMaxBufferPresent : 1;
      unsigned t38FaxMaxDatagramPresent : 1;
   } m;
   ASN1INT t38FaxMaxBuffer;
   ASN1INT t38FaxMaxDatagram;
   H245T38FaxUdpOptions_t38FaxUdpEC t38FaxUdpEC;
} H245T38FaxUdpOptions;

EXTERN int asn1PE_H245T38FaxUdpOptions (OOCTXT* pctxt, H245T38FaxUdpOptions* pvalue);

EXTERN int asn1PD_H245T38FaxUdpOptions (OOCTXT* pctxt, H245T38FaxUdpOptions* pvalue);

/**************************************************************/
/*                                                            */
/*  T38FaxTcpOptions                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245T38FaxTcpOptions {
   ASN1BOOL t38TCPBidirectionalMode;
   DList extElem1;
} H245T38FaxTcpOptions;

EXTERN int asn1PE_H245T38FaxTcpOptions (OOCTXT* pctxt, H245T38FaxTcpOptions* pvalue);

EXTERN int asn1PD_H245T38FaxTcpOptions (OOCTXT* pctxt, H245T38FaxTcpOptions* pvalue);

/**************************************************************/
/*                                                            */
/*  T38FaxProfile                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245T38FaxProfile {
   struct {
      unsigned versionPresent : 1;
      unsigned t38FaxRateManagementPresent : 1;
      unsigned t38FaxUdpOptionsPresent : 1;
      unsigned t38FaxTcpOptionsPresent : 1;
   } m;
   ASN1BOOL fillBitRemoval;
   ASN1BOOL transcodingJBIG;
   ASN1BOOL transcodingMMR;
   ASN1UINT8 version;
   H245T38FaxRateManagement t38FaxRateManagement;
   H245T38FaxUdpOptions t38FaxUdpOptions;
   H245T38FaxTcpOptions t38FaxTcpOptions;
   DList extElem1;
} H245T38FaxProfile;

EXTERN int asn1PE_H245T38FaxProfile (OOCTXT* pctxt, H245T38FaxProfile* pvalue);

EXTERN int asn1PD_H245T38FaxProfile (OOCTXT* pctxt, H245T38FaxProfile* pvalue);

/**************************************************************/
/*                                                            */
/*  DataApplicationCapability_application_t38fax              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataApplicationCapability_application_t38fax {
   H245DataProtocolCapability t38FaxProtocol;
   H245T38FaxProfile t38FaxProfile;
} H245DataApplicationCapability_application_t38fax;

EXTERN int asn1PE_H245DataApplicationCapability_application_t38fax (OOCTXT* pctxt, H245DataApplicationCapability_application_t38fax* pvalue);

EXTERN int asn1PD_H245DataApplicationCapability_application_t38fax (OOCTXT* pctxt, H245DataApplicationCapability_application_t38fax* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityIdentifier                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CapabilityIdentifier_standard 1
#define T_H245CapabilityIdentifier_h221NonStandard 2
#define T_H245CapabilityIdentifier_uuid 3
#define T_H245CapabilityIdentifier_domainBased 4
#define T_H245CapabilityIdentifier_extElem1 5

typedef struct EXTERN H245CapabilityIdentifier {
   int t;
   union {
      /* t = 1 */
      ASN1OBJID *standard;
      /* t = 2 */
      H245NonStandardParameter *h221NonStandard;
      /* t = 3 */
      H245CapabilityIdentifier_uuid *uuid;
      /* t = 4 */
      ASN1IA5String domainBased;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245CapabilityIdentifier;

EXTERN int asn1PE_H245CapabilityIdentifier (OOCTXT* pctxt, H245CapabilityIdentifier* pvalue);

EXTERN int asn1PD_H245CapabilityIdentifier (OOCTXT* pctxt, H245CapabilityIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  ParameterIdentifier                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ParameterIdentifier_standard 1
#define T_H245ParameterIdentifier_h221NonStandard 2
#define T_H245ParameterIdentifier_uuid  3
#define T_H245ParameterIdentifier_domainBased 4
#define T_H245ParameterIdentifier_extElem1 5

typedef struct EXTERN H245ParameterIdentifier {
   int t;
   union {
      /* t = 1 */
      ASN1UINT8 standard;
      /* t = 2 */
      H245NonStandardParameter *h221NonStandard;
      /* t = 3 */
      H245ParameterIdentifier_uuid *uuid;
      /* t = 4 */
      ASN1IA5String domainBased;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245ParameterIdentifier;

EXTERN int asn1PE_H245ParameterIdentifier (OOCTXT* pctxt, H245ParameterIdentifier* pvalue);

EXTERN int asn1PD_H245ParameterIdentifier (OOCTXT* pctxt, H245ParameterIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  ParameterValue                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ParameterValue_logical    1
#define T_H245ParameterValue_booleanArray 2
#define T_H245ParameterValue_unsignedMin 3
#define T_H245ParameterValue_unsignedMax 4
#define T_H245ParameterValue_unsigned32Min 5
#define T_H245ParameterValue_unsigned32Max 6
#define T_H245ParameterValue_octetString 7
#define T_H245ParameterValue_genericParameter 8
#define T_H245ParameterValue_extElem1   9

typedef struct EXTERN H245ParameterValue {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      ASN1UINT8 booleanArray;
      /* t = 3 */
      ASN1USINT unsignedMin;
      /* t = 4 */
      ASN1USINT unsignedMax;
      /* t = 5 */
      ASN1UINT unsigned32Min;
      /* t = 6 */
      ASN1UINT unsigned32Max;
      /* t = 7 */
      ASN1DynOctStr *octetString;
      /* t = 8 */
      DList *genericParameter;
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H245ParameterValue;

EXTERN int asn1PE_H245ParameterValue (OOCTXT* pctxt, H245ParameterValue* pvalue);

EXTERN int asn1PD_H245ParameterValue (OOCTXT* pctxt, H245ParameterValue* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245ParameterIdentifier                             */
/*                                                            */
/**************************************************************/

/* List of H245ParameterIdentifier */
typedef DList H245_SeqOfH245ParameterIdentifier;

EXTERN int asn1PE_H245_SeqOfH245ParameterIdentifier (OOCTXT* pctxt, H245_SeqOfH245ParameterIdentifier value);

EXTERN int asn1PD_H245_SeqOfH245ParameterIdentifier (OOCTXT* pctxt, H245_SeqOfH245ParameterIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  GenericParameter                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245GenericParameter {
   struct {
      unsigned supersedesPresent : 1;
   } m;
   H245ParameterIdentifier parameterIdentifier;
   H245ParameterValue parameterValue;
   H245_SeqOfH245ParameterIdentifier supersedes;
   DList extElem1;
} H245GenericParameter;

EXTERN int asn1PE_H245GenericParameter (OOCTXT* pctxt, H245GenericParameter* pvalue);

EXTERN int asn1PD_H245GenericParameter (OOCTXT* pctxt, H245GenericParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245GenericParameter                                */
/*                                                            */
/**************************************************************/

/* List of H245GenericParameter */
typedef DList H245_SeqOfH245GenericParameter;

EXTERN int asn1PE_H245_SeqOfH245GenericParameter (OOCTXT* pctxt, H245_SeqOfH245GenericParameter value);

EXTERN int asn1PD_H245_SeqOfH245GenericParameter (OOCTXT* pctxt, H245_SeqOfH245GenericParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  GenericCapability                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245GenericCapability {
   struct {
      unsigned maxBitRatePresent : 1;
      unsigned collapsingPresent : 1;
      unsigned nonCollapsingPresent : 1;
      unsigned nonCollapsingRawPresent : 1;
      unsigned transportPresent : 1;
   } m;
   H245CapabilityIdentifier capabilityIdentifier;
   ASN1UINT maxBitRate;
   H245_SeqOfH245GenericParameter collapsing;
   H245_SeqOfH245GenericParameter nonCollapsing;
   ASN1DynOctStr nonCollapsingRaw;
   H245DataProtocolCapability transport;
   DList extElem1;
} H245GenericCapability;

EXTERN int asn1PE_H245GenericCapability (OOCTXT* pctxt, H245GenericCapability* pvalue);

EXTERN int asn1PD_H245GenericCapability (OOCTXT* pctxt, H245GenericCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  DataApplicationCapability_application                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DataApplicationCapability_application_nonStandard 1
#define T_H245DataApplicationCapability_application_t120 2
#define T_H245DataApplicationCapability_application_dsm_cc 3
#define T_H245DataApplicationCapability_application_userData 4
#define T_H245DataApplicationCapability_application_t84 5
#define T_H245DataApplicationCapability_application_t434 6
#define T_H245DataApplicationCapability_application_h224 7
#define T_H245DataApplicationCapability_application_nlpid 8
#define T_H245DataApplicationCapability_application_dsvdControl 9
#define T_H245DataApplicationCapability_application_h222DataPartitioning 10
#define T_H245DataApplicationCapability_application_t30fax 11
#define T_H245DataApplicationCapability_application_t140 12
#define T_H245DataApplicationCapability_application_t38fax 13
#define T_H245DataApplicationCapability_application_genericDataCapability 14
#define T_H245DataApplicationCapability_application_extElem1 15

typedef struct EXTERN H245DataApplicationCapability_application {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245DataProtocolCapability *t120;
      /* t = 3 */
      H245DataProtocolCapability *dsm_cc;
      /* t = 4 */
      H245DataProtocolCapability *userData;
      /* t = 5 */
      H245DataApplicationCapability_application_t84 *t84;
      /* t = 6 */
      H245DataProtocolCapability *t434;
      /* t = 7 */
      H245DataProtocolCapability *h224;
      /* t = 8 */
      H245DataApplicationCapability_application_nlpid *nlpid;
      /* t = 9 */
      /* t = 10 */
      H245DataProtocolCapability *h222DataPartitioning;
      /* t = 11 */
      H245DataProtocolCapability *t30fax;
      /* t = 12 */
      H245DataProtocolCapability *t140;
      /* t = 13 */
      H245DataApplicationCapability_application_t38fax *t38fax;
      /* t = 14 */
      H245GenericCapability *genericDataCapability;
      /* t = 15 */
      ASN1OpenType *extElem1;
   } u;
} H245DataApplicationCapability_application;

EXTERN int asn1PE_H245DataApplicationCapability_application (OOCTXT* pctxt, H245DataApplicationCapability_application* pvalue);

EXTERN int asn1PD_H245DataApplicationCapability_application (OOCTXT* pctxt, H245DataApplicationCapability_application* pvalue);

/**************************************************************/
/*                                                            */
/*  DataApplicationCapability                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataApplicationCapability {
   H245DataApplicationCapability_application application;
   ASN1UINT maxBitRate;
   DList extElem1;
} H245DataApplicationCapability;

EXTERN int asn1PE_H245DataApplicationCapability (OOCTXT* pctxt, H245DataApplicationCapability* pvalue);

EXTERN int asn1PD_H245DataApplicationCapability (OOCTXT* pctxt, H245DataApplicationCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245DataApplicationCapability                       */
/*                                                            */
/**************************************************************/

/* List of H245DataApplicationCapability */
typedef DList H245_SeqOfH245DataApplicationCapability;

EXTERN int asn1PE_H245_SeqOfH245DataApplicationCapability (OOCTXT* pctxt, H245_SeqOfH245DataApplicationCapability value);

EXTERN int asn1PD_H245_SeqOfH245DataApplicationCapability (OOCTXT* pctxt, H245_SeqOfH245DataApplicationCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaDistributionCapability                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MediaDistributionCapability {
   struct {
      unsigned centralizedDataPresent : 1;
      unsigned distributedDataPresent : 1;
   } m;
   ASN1BOOL centralizedControl;
   ASN1BOOL distributedControl;
   ASN1BOOL centralizedAudio;
   ASN1BOOL distributedAudio;
   ASN1BOOL centralizedVideo;
   ASN1BOOL distributedVideo;
   H245_SeqOfH245DataApplicationCapability centralizedData;
   H245_SeqOfH245DataApplicationCapability distributedData;
   DList extElem1;
} H245MediaDistributionCapability;

EXTERN int asn1PE_H245MediaDistributionCapability (OOCTXT* pctxt, H245MediaDistributionCapability* pvalue);

EXTERN int asn1PD_H245MediaDistributionCapability (OOCTXT* pctxt, H245MediaDistributionCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245MediaDistributionCapability                     */
/*                                                            */
/**************************************************************/

/* List of H245MediaDistributionCapability */
typedef DList H245_SeqOfH245MediaDistributionCapability;

EXTERN int asn1PE_H245_SeqOfH245MediaDistributionCapability (OOCTXT* pctxt, H245_SeqOfH245MediaDistributionCapability value);

EXTERN int asn1PD_H245_SeqOfH245MediaDistributionCapability (OOCTXT* pctxt, H245_SeqOfH245MediaDistributionCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  MultipointCapability                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultipointCapability {
   ASN1BOOL multicastCapability;
   ASN1BOOL multiUniCastConference;
   H245_SeqOfH245MediaDistributionCapability mediaDistributionCapability;
   DList extElem1;
} H245MultipointCapability;

EXTERN int asn1PE_H245MultipointCapability (OOCTXT* pctxt, H245MultipointCapability* pvalue);

EXTERN int asn1PD_H245MultipointCapability (OOCTXT* pctxt, H245MultipointCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250Capability_mcCapability                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H2250Capability_mcCapability {
   ASN1BOOL centralizedConferenceMC;
   ASN1BOOL decentralizedConferenceMC;
   DList extElem1;
} H245H2250Capability_mcCapability;

EXTERN int asn1PE_H245H2250Capability_mcCapability (OOCTXT* pctxt, H245H2250Capability_mcCapability* pvalue);

EXTERN int asn1PD_H245H2250Capability_mcCapability (OOCTXT* pctxt, H245H2250Capability_mcCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPPayloadType_payloadDescriptor                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RTPPayloadType_payloadDescriptor_nonStandardIdentifier 1
#define T_H245RTPPayloadType_payloadDescriptor_rfc_number 2
#define T_H245RTPPayloadType_payloadDescriptor_oid 3
#define T_H245RTPPayloadType_payloadDescriptor_extElem1 4

typedef struct EXTERN H245RTPPayloadType_payloadDescriptor {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandardIdentifier;
      /* t = 2 */
      ASN1INT rfc_number;
      /* t = 3 */
      ASN1OBJID *oid;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245RTPPayloadType_payloadDescriptor;

EXTERN int asn1PE_H245RTPPayloadType_payloadDescriptor (OOCTXT* pctxt, H245RTPPayloadType_payloadDescriptor* pvalue);

EXTERN int asn1PD_H245RTPPayloadType_payloadDescriptor (OOCTXT* pctxt, H245RTPPayloadType_payloadDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPPayloadType                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RTPPayloadType {
   struct {
      unsigned payloadTypePresent : 1;
   } m;
   H245RTPPayloadType_payloadDescriptor payloadDescriptor;
   ASN1UINT8 payloadType;
   DList extElem1;
} H245RTPPayloadType;

EXTERN int asn1PE_H245RTPPayloadType (OOCTXT* pctxt, H245RTPPayloadType* pvalue);

EXTERN int asn1PD_H245RTPPayloadType (OOCTXT* pctxt, H245RTPPayloadType* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaPacketizationCapability_rtpPayloadType               */
/*                                                            */
/**************************************************************/

/* List of H245RTPPayloadType */
typedef DList H245MediaPacketizationCapability_rtpPayloadType;

EXTERN int asn1PE_H245MediaPacketizationCapability_rtpPayloadType (OOCTXT* pctxt, H245MediaPacketizationCapability_rtpPayloadType value);

EXTERN int asn1PD_H245MediaPacketizationCapability_rtpPayloadType (OOCTXT* pctxt, H245MediaPacketizationCapability_rtpPayloadType* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaPacketizationCapability                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MediaPacketizationCapability {
   struct {
      unsigned rtpPayloadTypePresent : 1;
   } m;
   ASN1BOOL h261aVideoPacketization;
   H245MediaPacketizationCapability_rtpPayloadType rtpPayloadType;
   DList extElem1;
} H245MediaPacketizationCapability;

EXTERN int asn1PE_H245MediaPacketizationCapability (OOCTXT* pctxt, H245MediaPacketizationCapability* pvalue);

EXTERN int asn1PD_H245MediaPacketizationCapability (OOCTXT* pctxt, H245MediaPacketizationCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  QOSMode                                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245QOSMode_guaranteedQOS     1
#define T_H245QOSMode_controlledLoad    2
#define T_H245QOSMode_extElem1          3

typedef struct EXTERN H245QOSMode {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245QOSMode;

EXTERN int asn1PE_H245QOSMode (OOCTXT* pctxt, H245QOSMode* pvalue);

EXTERN int asn1PD_H245QOSMode (OOCTXT* pctxt, H245QOSMode* pvalue);

/**************************************************************/
/*                                                            */
/*  RSVPParameters                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RSVPParameters {
   struct {
      unsigned qosModePresent : 1;
      unsigned tokenRatePresent : 1;
      unsigned bucketSizePresent : 1;
      unsigned peakRatePresent : 1;
      unsigned minPolicedPresent : 1;
      unsigned maxPktSizePresent : 1;
   } m;
   H245QOSMode qosMode;
   ASN1UINT tokenRate;
   ASN1UINT bucketSize;
   ASN1UINT peakRate;
   ASN1UINT minPoliced;
   ASN1UINT maxPktSize;
   DList extElem1;
} H245RSVPParameters;

EXTERN int asn1PE_H245RSVPParameters (OOCTXT* pctxt, H245RSVPParameters* pvalue);

EXTERN int asn1PD_H245RSVPParameters (OOCTXT* pctxt, H245RSVPParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  ATMParameters                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ATMParameters {
   ASN1USINT maxNTUSize;
   ASN1BOOL atmUBR;
   ASN1BOOL atmrtVBR;
   ASN1BOOL atmnrtVBR;
   ASN1BOOL atmABR;
   ASN1BOOL atmCBR;
   DList extElem1;
} H245ATMParameters;

EXTERN int asn1PE_H245ATMParameters (OOCTXT* pctxt, H245ATMParameters* pvalue);

EXTERN int asn1PD_H245ATMParameters (OOCTXT* pctxt, H245ATMParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  QOSCapability                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245QOSCapability {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned rsvpParametersPresent : 1;
      unsigned atmParametersPresent : 1;
   } m;
   H245NonStandardParameter nonStandardData;
   H245RSVPParameters rsvpParameters;
   H245ATMParameters atmParameters;
   DList extElem1;
} H245QOSCapability;

EXTERN int asn1PE_H245QOSCapability (OOCTXT* pctxt, H245QOSCapability* pvalue);

EXTERN int asn1PD_H245QOSCapability (OOCTXT* pctxt, H245QOSCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportCapability_qOSCapabilities                       */
/*                                                            */
/**************************************************************/

/* List of H245QOSCapability */
typedef DList H245TransportCapability_qOSCapabilities;

EXTERN int asn1PE_H245TransportCapability_qOSCapabilities (OOCTXT* pctxt, H245TransportCapability_qOSCapabilities value);

EXTERN int asn1PD_H245TransportCapability_qOSCapabilities (OOCTXT* pctxt, H245TransportCapability_qOSCapabilities* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaTransportType_atm_AAL5_compressed                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MediaTransportType_atm_AAL5_compressed {
   ASN1BOOL variable_delta;
   DList extElem1;
} H245MediaTransportType_atm_AAL5_compressed;

EXTERN int asn1PE_H245MediaTransportType_atm_AAL5_compressed (OOCTXT* pctxt, H245MediaTransportType_atm_AAL5_compressed* pvalue);

EXTERN int asn1PD_H245MediaTransportType_atm_AAL5_compressed (OOCTXT* pctxt, H245MediaTransportType_atm_AAL5_compressed* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaTransportType                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MediaTransportType_ip_UDP 1
#define T_H245MediaTransportType_ip_TCP 2
#define T_H245MediaTransportType_atm_AAL5_UNIDIR 3
#define T_H245MediaTransportType_atm_AAL5_BIDIR 4
#define T_H245MediaTransportType_atm_AAL5_compressed 5
#define T_H245MediaTransportType_extElem1 6

typedef struct EXTERN H245MediaTransportType {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      H245MediaTransportType_atm_AAL5_compressed *atm_AAL5_compressed;
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H245MediaTransportType;

EXTERN int asn1PE_H245MediaTransportType (OOCTXT* pctxt, H245MediaTransportType* pvalue);

EXTERN int asn1PD_H245MediaTransportType (OOCTXT* pctxt, H245MediaTransportType* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaChannelCapability                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MediaChannelCapability {
   struct {
      unsigned mediaTransportPresent : 1;
   } m;
   H245MediaTransportType mediaTransport;
   DList extElem1;
} H245MediaChannelCapability;

EXTERN int asn1PE_H245MediaChannelCapability (OOCTXT* pctxt, H245MediaChannelCapability* pvalue);

EXTERN int asn1PD_H245MediaChannelCapability (OOCTXT* pctxt, H245MediaChannelCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportCapability_mediaChannelCapabilities              */
/*                                                            */
/**************************************************************/

/* List of H245MediaChannelCapability */
typedef DList H245TransportCapability_mediaChannelCapabilities;

EXTERN int asn1PE_H245TransportCapability_mediaChannelCapabilities (OOCTXT* pctxt, H245TransportCapability_mediaChannelCapabilities value);

EXTERN int asn1PD_H245TransportCapability_mediaChannelCapabilities (OOCTXT* pctxt, H245TransportCapability_mediaChannelCapabilities* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportCapability                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TransportCapability {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned qOSCapabilitiesPresent : 1;
      unsigned mediaChannelCapabilitiesPresent : 1;
   } m;
   H245NonStandardParameter nonStandard;
   H245TransportCapability_qOSCapabilities qOSCapabilities;
   H245TransportCapability_mediaChannelCapabilities mediaChannelCapabilities;
   DList extElem1;
} H245TransportCapability;

EXTERN int asn1PE_H245TransportCapability (OOCTXT* pctxt, H245TransportCapability* pvalue);

EXTERN int asn1PD_H245TransportCapability (OOCTXT* pctxt, H245TransportCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPH263VideoRedundancyFrameMapping_frameSequence          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RTPH263VideoRedundancyFrameMapping_frameSequence {
   ASN1UINT n;
   ASN1UINT8 elem[256];
} H245RTPH263VideoRedundancyFrameMapping_frameSequence;

EXTERN int asn1PE_H245RTPH263VideoRedundancyFrameMapping_frameSequence (OOCTXT* pctxt, H245RTPH263VideoRedundancyFrameMapping_frameSequence* pvalue);

EXTERN int asn1PD_H245RTPH263VideoRedundancyFrameMapping_frameSequence (OOCTXT* pctxt, H245RTPH263VideoRedundancyFrameMapping_frameSequence* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPH263VideoRedundancyFrameMapping                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RTPH263VideoRedundancyFrameMapping {
   ASN1UINT8 threadNumber;
   H245RTPH263VideoRedundancyFrameMapping_frameSequence frameSequence;
   DList extElem1;
} H245RTPH263VideoRedundancyFrameMapping;

EXTERN int asn1PE_H245RTPH263VideoRedundancyFrameMapping (OOCTXT* pctxt, H245RTPH263VideoRedundancyFrameMapping* pvalue);

EXTERN int asn1PD_H245RTPH263VideoRedundancyFrameMapping (OOCTXT* pctxt, H245RTPH263VideoRedundancyFrameMapping* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPH263VideoRedundancyEncoding_frameToThreadMapping_cust  */
/*                                                            */
/**************************************************************/

/* List of H245RTPH263VideoRedundancyFrameMapping */
typedef DList H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom;

EXTERN int asn1PE_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom value);

EXTERN int asn1PD_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPH263VideoRedundancyEncoding_frameToThreadMapping       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_roundrobin 1
#define T_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom 2
#define T_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_extElem1 3

typedef struct EXTERN H245RTPH263VideoRedundancyEncoding_frameToThreadMapping {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245RTPH263VideoRedundancyEncoding_frameToThreadMapping_custom *custom;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245RTPH263VideoRedundancyEncoding_frameToThreadMapping;

EXTERN int asn1PE_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding_frameToThreadMapping* pvalue);

EXTERN int asn1PD_H245RTPH263VideoRedundancyEncoding_frameToThreadMapping (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding_frameToThreadMapping* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPH263VideoRedundancyEncoding_containedThreads           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RTPH263VideoRedundancyEncoding_containedThreads {
   ASN1UINT n;
   ASN1UINT8 elem[256];
} H245RTPH263VideoRedundancyEncoding_containedThreads;

EXTERN int asn1PE_H245RTPH263VideoRedundancyEncoding_containedThreads (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding_containedThreads* pvalue);

EXTERN int asn1PD_H245RTPH263VideoRedundancyEncoding_containedThreads (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding_containedThreads* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPH263VideoRedundancyEncoding                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RTPH263VideoRedundancyEncoding {
   struct {
      unsigned containedThreadsPresent : 1;
   } m;
   ASN1UINT8 numberOfThreads;
   ASN1USINT framesBetweenSyncPoints;
   H245RTPH263VideoRedundancyEncoding_frameToThreadMapping frameToThreadMapping;
   H245RTPH263VideoRedundancyEncoding_containedThreads containedThreads;
   DList extElem1;
} H245RTPH263VideoRedundancyEncoding;

EXTERN int asn1PE_H245RTPH263VideoRedundancyEncoding (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding* pvalue);

EXTERN int asn1PD_H245RTPH263VideoRedundancyEncoding (OOCTXT* pctxt, H245RTPH263VideoRedundancyEncoding* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingMethod                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RedundancyEncodingMethod_nonStandard 1
#define T_H245RedundancyEncodingMethod_rtpAudioRedundancyEncoding 2
#define T_H245RedundancyEncodingMethod_rtpH263VideoRedundancyEncoding 3
#define T_H245RedundancyEncodingMethod_extElem1 4

typedef struct EXTERN H245RedundancyEncodingMethod {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      H245RTPH263VideoRedundancyEncoding *rtpH263VideoRedundancyEncoding;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245RedundancyEncodingMethod;

EXTERN int asn1PE_H245RedundancyEncodingMethod (OOCTXT* pctxt, H245RedundancyEncodingMethod* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingMethod (OOCTXT* pctxt, H245RedundancyEncodingMethod* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingCapability_secondaryEncoding            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncodingCapability_secondaryEncoding {
   ASN1UINT n;
   H245CapabilityTableEntryNumber elem[256];
} H245RedundancyEncodingCapability_secondaryEncoding;

EXTERN int asn1PE_H245RedundancyEncodingCapability_secondaryEncoding (OOCTXT* pctxt, H245RedundancyEncodingCapability_secondaryEncoding* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingCapability_secondaryEncoding (OOCTXT* pctxt, H245RedundancyEncodingCapability_secondaryEncoding* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingCapability                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncodingCapability {
   struct {
      unsigned secondaryEncodingPresent : 1;
   } m;
   H245RedundancyEncodingMethod redundancyEncodingMethod;
   H245CapabilityTableEntryNumber primaryEncoding;
   H245RedundancyEncodingCapability_secondaryEncoding secondaryEncoding;
   DList extElem1;
} H245RedundancyEncodingCapability;

EXTERN int asn1PE_H245RedundancyEncodingCapability (OOCTXT* pctxt, H245RedundancyEncodingCapability* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingCapability (OOCTXT* pctxt, H245RedundancyEncodingCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250Capability_redundancyEncodingCapability              */
/*                                                            */
/**************************************************************/

/* List of H245RedundancyEncodingCapability */
typedef DList H245H2250Capability_redundancyEncodingCapability;

EXTERN int asn1PE_H245H2250Capability_redundancyEncodingCapability (OOCTXT* pctxt, H245H2250Capability_redundancyEncodingCapability value);

EXTERN int asn1PD_H245H2250Capability_redundancyEncodingCapability (OOCTXT* pctxt, H245H2250Capability_redundancyEncodingCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250Capability                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H2250Capability {
   struct {
      unsigned transportCapabilityPresent : 1;
      unsigned redundancyEncodingCapabilityPresent : 1;
      unsigned logicalChannelSwitchingCapabilityPresent : 1;
      unsigned t120DynamicPortCapabilityPresent : 1;
   } m;
   ASN1USINT maximumAudioDelayJitter;
   H245MultipointCapability receiveMultipointCapability;
   H245MultipointCapability transmitMultipointCapability;
   H245MultipointCapability receiveAndTransmitMultipointCapability;
   H245H2250Capability_mcCapability mcCapability;
   ASN1BOOL rtcpVideoControlCapability;
   H245MediaPacketizationCapability mediaPacketizationCapability;
   H245TransportCapability transportCapability;
   H245H2250Capability_redundancyEncodingCapability redundancyEncodingCapability;
   ASN1BOOL logicalChannelSwitchingCapability;
   ASN1BOOL t120DynamicPortCapability;
   DList extElem1;
} H245H2250Capability;

EXTERN int asn1PE_H245H2250Capability (OOCTXT* pctxt, H245H2250Capability* pvalue);

EXTERN int asn1PD_H245H2250Capability (OOCTXT* pctxt, H245H2250Capability* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexCapability                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultiplexCapability_nonStandard 1
#define T_H245MultiplexCapability_h222Capability 2
#define T_H245MultiplexCapability_h223Capability 3
#define T_H245MultiplexCapability_v76Capability 4
#define T_H245MultiplexCapability_h2250Capability 5
#define T_H245MultiplexCapability_genericMultiplexCapability 6
#define T_H245MultiplexCapability_extElem1 7

typedef struct EXTERN H245MultiplexCapability {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245H222Capability *h222Capability;
      /* t = 3 */
      H245H223Capability *h223Capability;
      /* t = 4 */
      H245V76Capability *v76Capability;
      /* t = 5 */
      H245H2250Capability *h2250Capability;
      /* t = 6 */
      H245GenericCapability *genericMultiplexCapability;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H245MultiplexCapability;

EXTERN int asn1PE_H245MultiplexCapability (OOCTXT* pctxt, H245MultiplexCapability* pvalue);

EXTERN int asn1PD_H245MultiplexCapability (OOCTXT* pctxt, H245MultiplexCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H261VideoCapability                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H261VideoCapability {
   struct {
      unsigned qcifMPIPresent : 1;
      unsigned cifMPIPresent : 1;
      unsigned videoBadMBsCapPresent : 1;
   } m;
   ASN1UINT8 qcifMPI;
   ASN1UINT8 cifMPI;
   ASN1BOOL temporalSpatialTradeOffCapability;
   ASN1USINT maxBitRate;
   ASN1BOOL stillImageTransmission;
   ASN1BOOL videoBadMBsCap;
   DList extElem1;
} H245H261VideoCapability;

EXTERN int asn1PE_H245H261VideoCapability (OOCTXT* pctxt, H245H261VideoCapability* pvalue);

EXTERN int asn1PD_H245H261VideoCapability (OOCTXT* pctxt, H245H261VideoCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  H262VideoCapability                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H262VideoCapability {
   struct {
      unsigned videoBitRatePresent : 1;
      unsigned vbvBufferSizePresent : 1;
      unsigned samplesPerLinePresent : 1;
      unsigned linesPerFramePresent : 1;
      unsigned framesPerSecondPresent : 1;
      unsigned luminanceSampleRatePresent : 1;
      unsigned videoBadMBsCapPresent : 1;
   } m;
   ASN1BOOL profileAndLevel_SPatML;
   ASN1BOOL profileAndLevel_MPatLL;
   ASN1BOOL profileAndLevel_MPatML;
   ASN1BOOL profileAndLevel_MPatH_14;
   ASN1BOOL profileAndLevel_MPatHL;
   ASN1BOOL profileAndLevel_SNRatLL;
   ASN1BOOL profileAndLevel_SNRatML;
   ASN1BOOL profileAndLevel_SpatialatH_14;
   ASN1BOOL profileAndLevel_HPatML;
   ASN1BOOL profileAndLevel_HPatH_14;
   ASN1BOOL profileAndLevel_HPatHL;
   ASN1UINT videoBitRate;
   ASN1UINT vbvBufferSize;
   ASN1USINT samplesPerLine;
   ASN1USINT linesPerFrame;
   ASN1UINT8 framesPerSecond;
   ASN1UINT luminanceSampleRate;
   ASN1BOOL videoBadMBsCap;
   DList extElem1;
} H245H262VideoCapability;

EXTERN int asn1PE_H245H262VideoCapability (OOCTXT* pctxt, H245H262VideoCapability* pvalue);

EXTERN int asn1PD_H245H262VideoCapability (OOCTXT* pctxt, H245H262VideoCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  TransparencyParameters                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TransparencyParameters {
   ASN1USINT presentationOrder;
   ASN1INT offset_x;
   ASN1INT offset_y;
   ASN1UINT8 scale_x;
   ASN1UINT8 scale_y;
   DList extElem1;
} H245TransparencyParameters;

EXTERN int asn1PE_H245TransparencyParameters (OOCTXT* pctxt, H245TransparencyParameters* pvalue);

EXTERN int asn1PD_H245TransparencyParameters (OOCTXT* pctxt, H245TransparencyParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  RefPictureSelection_additionalPictureMemory               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RefPictureSelection_additionalPictureMemory {
   struct {
      unsigned sqcifAdditionalPictureMemoryPresent : 1;
      unsigned qcifAdditionalPictureMemoryPresent : 1;
      unsigned cifAdditionalPictureMemoryPresent : 1;
      unsigned cif4AdditionalPictureMemoryPresent : 1;
      unsigned cif16AdditionalPictureMemoryPresent : 1;
      unsigned bigCpfAdditionalPictureMemoryPresent : 1;
   } m;
   ASN1USINT sqcifAdditionalPictureMemory;
   ASN1USINT qcifAdditionalPictureMemory;
   ASN1USINT cifAdditionalPictureMemory;
   ASN1USINT cif4AdditionalPictureMemory;
   ASN1USINT cif16AdditionalPictureMemory;
   ASN1USINT bigCpfAdditionalPictureMemory;
   DList extElem1;
} H245RefPictureSelection_additionalPictureMemory;

EXTERN int asn1PE_H245RefPictureSelection_additionalPictureMemory (OOCTXT* pctxt, H245RefPictureSelection_additionalPictureMemory* pvalue);

EXTERN int asn1PD_H245RefPictureSelection_additionalPictureMemory (OOCTXT* pctxt, H245RefPictureSelection_additionalPictureMemory* pvalue);

/**************************************************************/
/*                                                            */
/*  RefPictureSelection_videoBackChannelSend                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RefPictureSelection_videoBackChannelSend_none 1
#define T_H245RefPictureSelection_videoBackChannelSend_ackMessageOnly 2
#define T_H245RefPictureSelection_videoBackChannelSend_nackMessageOnly 3
#define T_H245RefPictureSelection_videoBackChannelSend_ackOrNackMessageOnly 4
#define T_H245RefPictureSelection_videoBackChannelSend_ackAndNackMessage 5
#define T_H245RefPictureSelection_videoBackChannelSend_extElem1 6

typedef struct EXTERN H245RefPictureSelection_videoBackChannelSend {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H245RefPictureSelection_videoBackChannelSend;

EXTERN int asn1PE_H245RefPictureSelection_videoBackChannelSend (OOCTXT* pctxt, H245RefPictureSelection_videoBackChannelSend* pvalue);

EXTERN int asn1PD_H245RefPictureSelection_videoBackChannelSend (OOCTXT* pctxt, H245RefPictureSelection_videoBackChannelSend* pvalue);

/**************************************************************/
/*                                                            */
/*  RefPictureSelection_enhancedReferencePicSelect_subPictur  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters {
   ASN1UINT8 mpuHorizMBs;
   ASN1UINT8 mpuVertMBs;
   ASN1UINT mpuTotalNumber;
   DList extElem1;
} H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters;

EXTERN int asn1PE_H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters (OOCTXT* pctxt, H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters* pvalue);

EXTERN int asn1PD_H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters (OOCTXT* pctxt, H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  RefPictureSelection_enhancedReferencePicSelect            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RefPictureSelection_enhancedReferencePicSelect {
   struct {
      unsigned subPictureRemovalParametersPresent : 1;
   } m;
   H245RefPictureSelection_enhancedReferencePicSelect_subPictureRemovalParameters subPictureRemovalParameters;
   DList extElem1;
} H245RefPictureSelection_enhancedReferencePicSelect;

EXTERN int asn1PE_H245RefPictureSelection_enhancedReferencePicSelect (OOCTXT* pctxt, H245RefPictureSelection_enhancedReferencePicSelect* pvalue);

EXTERN int asn1PD_H245RefPictureSelection_enhancedReferencePicSelect (OOCTXT* pctxt, H245RefPictureSelection_enhancedReferencePicSelect* pvalue);

/**************************************************************/
/*                                                            */
/*  RefPictureSelection                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RefPictureSelection {
   struct {
      unsigned additionalPictureMemoryPresent : 1;
      unsigned enhancedReferencePicSelectPresent : 1;
   } m;
   H245RefPictureSelection_additionalPictureMemory additionalPictureMemory;
   ASN1BOOL videoMux;
   H245RefPictureSelection_videoBackChannelSend videoBackChannelSend;
   H245RefPictureSelection_enhancedReferencePicSelect enhancedReferencePicSelect;
   DList extElem1;
} H245RefPictureSelection;

EXTERN int asn1PE_H245RefPictureSelection (OOCTXT* pctxt, H245RefPictureSelection* pvalue);

EXTERN int asn1PD_H245RefPictureSelection (OOCTXT* pctxt, H245RefPictureSelection* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureClockFrequency                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CustomPictureClockFrequency {
   struct {
      unsigned sqcifMPIPresent : 1;
      unsigned qcifMPIPresent : 1;
      unsigned cifMPIPresent : 1;
      unsigned cif4MPIPresent : 1;
      unsigned cif16MPIPresent : 1;
   } m;
   ASN1USINT clockConversionCode;
   ASN1UINT8 clockDivisor;
   ASN1USINT sqcifMPI;
   ASN1USINT qcifMPI;
   ASN1USINT cifMPI;
   ASN1USINT cif4MPI;
   ASN1USINT cif16MPI;
   DList extElem1;
} H245CustomPictureClockFrequency;

EXTERN int asn1PE_H245CustomPictureClockFrequency (OOCTXT* pctxt, H245CustomPictureClockFrequency* pvalue);

EXTERN int asn1PD_H245CustomPictureClockFrequency (OOCTXT* pctxt, H245CustomPictureClockFrequency* pvalue);

/**************************************************************/
/*                                                            */
/*  H263Options_customPictureClockFrequency                   */
/*                                                            */
/**************************************************************/

/* List of H245CustomPictureClockFrequency */
typedef DList H245H263Options_customPictureClockFrequency;

EXTERN int asn1PE_H245H263Options_customPictureClockFrequency (OOCTXT* pctxt, H245H263Options_customPictureClockFrequency value);

EXTERN int asn1PD_H245H263Options_customPictureClockFrequency (OOCTXT* pctxt, H245H263Options_customPictureClockFrequency* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_mPI_customPCF_element                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CustomPictureFormat_mPI_customPCF_element {
   ASN1USINT clockConversionCode;
   ASN1UINT8 clockDivisor;
   ASN1USINT customMPI;
   DList extElem1;
} H245CustomPictureFormat_mPI_customPCF_element;

EXTERN int asn1PE_H245CustomPictureFormat_mPI_customPCF_element (OOCTXT* pctxt, H245CustomPictureFormat_mPI_customPCF_element* pvalue);

EXTERN int asn1PD_H245CustomPictureFormat_mPI_customPCF_element (OOCTXT* pctxt, H245CustomPictureFormat_mPI_customPCF_element* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_mPI_customPCF                         */
/*                                                            */
/**************************************************************/

/* List of H245CustomPictureFormat_mPI_customPCF_element */
typedef DList H245CustomPictureFormat_mPI_customPCF;

EXTERN int asn1PE_H245CustomPictureFormat_mPI_customPCF (OOCTXT* pctxt, H245CustomPictureFormat_mPI_customPCF value);

EXTERN int asn1PD_H245CustomPictureFormat_mPI_customPCF (OOCTXT* pctxt, H245CustomPictureFormat_mPI_customPCF* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_mPI                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CustomPictureFormat_mPI {
   struct {
      unsigned standardMPIPresent : 1;
      unsigned customPCFPresent : 1;
   } m;
   ASN1UINT8 standardMPI;
   H245CustomPictureFormat_mPI_customPCF customPCF;
   DList extElem1;
} H245CustomPictureFormat_mPI;

EXTERN int asn1PE_H245CustomPictureFormat_mPI (OOCTXT* pctxt, H245CustomPictureFormat_mPI* pvalue);

EXTERN int asn1PD_H245CustomPictureFormat_mPI (OOCTXT* pctxt, H245CustomPictureFormat_mPI* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_pixelAspectInformation_pixelAspectCo  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode {
   ASN1UINT n;
   ASN1UINT8 elem[14];
} H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode;

EXTERN int asn1PE_H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode* pvalue);

EXTERN int asn1PD_H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_pixelAspectInformation_extendedPAR_e  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element {
   ASN1UINT8 width;
   ASN1UINT8 height;
   DList extElem1;
} H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element;

EXTERN int asn1PE_H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element* pvalue);

EXTERN int asn1PD_H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_pixelAspectInformation_extendedPAR    */
/*                                                            */
/**************************************************************/

/* List of H245CustomPictureFormat_pixelAspectInformation_extendedPAR_element */
typedef DList H245CustomPictureFormat_pixelAspectInformation_extendedPAR;

EXTERN int asn1PE_H245CustomPictureFormat_pixelAspectInformation_extendedPAR (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation_extendedPAR value);

EXTERN int asn1PD_H245CustomPictureFormat_pixelAspectInformation_extendedPAR (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation_extendedPAR* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat_pixelAspectInformation                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CustomPictureFormat_pixelAspectInformation_anyPixelAspectRatio 1
#define T_H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode 2
#define T_H245CustomPictureFormat_pixelAspectInformation_extendedPAR 3
#define T_H245CustomPictureFormat_pixelAspectInformation_extElem1 4

typedef struct EXTERN H245CustomPictureFormat_pixelAspectInformation {
   int t;
   union {
      /* t = 1 */
      ASN1BOOL anyPixelAspectRatio;
      /* t = 2 */
      H245CustomPictureFormat_pixelAspectInformation_pixelAspectCode *pixelAspectCode;
      /* t = 3 */
      H245CustomPictureFormat_pixelAspectInformation_extendedPAR *extendedPAR;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245CustomPictureFormat_pixelAspectInformation;

EXTERN int asn1PE_H245CustomPictureFormat_pixelAspectInformation (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation* pvalue);

EXTERN int asn1PD_H245CustomPictureFormat_pixelAspectInformation (OOCTXT* pctxt, H245CustomPictureFormat_pixelAspectInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  CustomPictureFormat                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CustomPictureFormat {
   ASN1USINT maxCustomPictureWidth;
   ASN1USINT maxCustomPictureHeight;
   ASN1USINT minCustomPictureWidth;
   ASN1USINT minCustomPictureHeight;
   H245CustomPictureFormat_mPI mPI;
   H245CustomPictureFormat_pixelAspectInformation pixelAspectInformation;
   DList extElem1;
} H245CustomPictureFormat;

EXTERN int asn1PE_H245CustomPictureFormat (OOCTXT* pctxt, H245CustomPictureFormat* pvalue);

EXTERN int asn1PD_H245CustomPictureFormat (OOCTXT* pctxt, H245CustomPictureFormat* pvalue);

/**************************************************************/
/*                                                            */
/*  H263Options_customPictureFormat                           */
/*                                                            */
/**************************************************************/

/* List of H245CustomPictureFormat */
typedef DList H245H263Options_customPictureFormat;

EXTERN int asn1PE_H245H263Options_customPictureFormat (OOCTXT* pctxt, H245H263Options_customPictureFormat value);

EXTERN int asn1PD_H245H263Options_customPictureFormat (OOCTXT* pctxt, H245H263Options_customPictureFormat* pvalue);

/**************************************************************/
/*                                                            */
/*  H263Version3Options                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H263Version3Options {
   ASN1BOOL dataPartitionedSlices;
   ASN1BOOL fixedPointIDCT0;
   ASN1BOOL interlacedFields;
   ASN1BOOL currentPictureHeaderRepetition;
   ASN1BOOL previousPictureHeaderRepetition;
   ASN1BOOL nextPictureHeaderRepetition;
   ASN1BOOL pictureNumber;
   ASN1BOOL spareReferencePictures;
   DList extElem1;
} H245H263Version3Options;

EXTERN int asn1PE_H245H263Version3Options (OOCTXT* pctxt, H245H263Version3Options* pvalue);

EXTERN int asn1PD_H245H263Version3Options (OOCTXT* pctxt, H245H263Version3Options* pvalue);

/**************************************************************/
/*                                                            */
/*  H263ModeComboFlags                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H263ModeComboFlags {
   struct {
      unsigned enhancedReferencePicSelectPresent : 1;
      unsigned h263Version3OptionsPresent : 1;
   } m;
   ASN1BOOL unrestrictedVector;
   ASN1BOOL arithmeticCoding;
   ASN1BOOL advancedPrediction;
   ASN1BOOL pbFrames;
   ASN1BOOL advancedIntraCodingMode;
   ASN1BOOL deblockingFilterMode;
   ASN1BOOL unlimitedMotionVectors;
   ASN1BOOL slicesInOrder_NonRect;
   ASN1BOOL slicesInOrder_Rect;
   ASN1BOOL slicesNoOrder_NonRect;
   ASN1BOOL slicesNoOrder_Rect;
   ASN1BOOL improvedPBFramesMode;
   ASN1BOOL referencePicSelect;
   ASN1BOOL dynamicPictureResizingByFour;
   ASN1BOOL dynamicPictureResizingSixteenthPel;
   ASN1BOOL dynamicWarpingHalfPel;
   ASN1BOOL dynamicWarpingSixteenthPel;
   ASN1BOOL reducedResolutionUpdate;
   ASN1BOOL independentSegmentDecoding;
   ASN1BOOL alternateInterVLCMode;
   ASN1BOOL modifiedQuantizationMode;
   ASN1BOOL enhancedReferencePicSelect;
   H245H263Version3Options h263Version3Options;
   DList extElem1;
} H245H263ModeComboFlags;

EXTERN int asn1PE_H245H263ModeComboFlags (OOCTXT* pctxt, H245H263ModeComboFlags* pvalue);

EXTERN int asn1PD_H245H263ModeComboFlags (OOCTXT* pctxt, H245H263ModeComboFlags* pvalue);

/**************************************************************/
/*                                                            */
/*  H263VideoModeCombos_h263VideoCoupledModes                 */
/*                                                            */
/**************************************************************/

/* List of H245H263ModeComboFlags */
typedef DList H245H263VideoModeCombos_h263VideoCoupledModes;

EXTERN int asn1PE_H245H263VideoModeCombos_h263VideoCoupledModes (OOCTXT* pctxt, H245H263VideoModeCombos_h263VideoCoupledModes value);

EXTERN int asn1PD_H245H263VideoModeCombos_h263VideoCoupledModes (OOCTXT* pctxt, H245H263VideoModeCombos_h263VideoCoupledModes* pvalue);

/**************************************************************/
/*                                                            */
/*  H263VideoModeCombos                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H263VideoModeCombos {
   H245H263ModeComboFlags h263VideoUncoupledModes;
   H245H263VideoModeCombos_h263VideoCoupledModes h263VideoCoupledModes;
   DList extElem1;
} H245H263VideoModeCombos;

EXTERN int asn1PE_H245H263VideoModeCombos (OOCTXT* pctxt, H245H263VideoModeCombos* pvalue);

EXTERN int asn1PD_H245H263VideoModeCombos (OOCTXT* pctxt, H245H263VideoModeCombos* pvalue);

/**************************************************************/
/*                                                            */
/*  H263Options_modeCombos                                    */
/*                                                            */
/**************************************************************/

/* List of H245H263VideoModeCombos */
typedef DList H245H263Options_modeCombos;

EXTERN int asn1PE_H245H263Options_modeCombos (OOCTXT* pctxt, H245H263Options_modeCombos value);

EXTERN int asn1PD_H245H263Options_modeCombos (OOCTXT* pctxt, H245H263Options_modeCombos* pvalue);

/**************************************************************/
/*                                                            */
/*  H263Options                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H263Options {
   struct {
      unsigned transparencyParametersPresent : 1;
      unsigned refPictureSelectionPresent : 1;
      unsigned customPictureClockFrequencyPresent : 1;
      unsigned customPictureFormatPresent : 1;
      unsigned modeCombosPresent : 1;
      unsigned videoBadMBsCapPresent : 1;
      unsigned h263Version3OptionsPresent : 1;
   } m;
   ASN1BOOL advancedIntraCodingMode;
   ASN1BOOL deblockingFilterMode;
   ASN1BOOL improvedPBFramesMode;
   ASN1BOOL unlimitedMotionVectors;
   ASN1BOOL fullPictureFreeze;
   ASN1BOOL partialPictureFreezeAndRelease;
   ASN1BOOL resizingPartPicFreezeAndRelease;
   ASN1BOOL fullPictureSnapshot;
   ASN1BOOL partialPictureSnapshot;
   ASN1BOOL videoSegmentTagging;
   ASN1BOOL progressiveRefinement;
   ASN1BOOL dynamicPictureResizingByFour;
   ASN1BOOL dynamicPictureResizingSixteenthPel;
   ASN1BOOL dynamicWarpingHalfPel;
   ASN1BOOL dynamicWarpingSixteenthPel;
   ASN1BOOL independentSegmentDecoding;
   ASN1BOOL slicesInOrder_NonRect;
   ASN1BOOL slicesInOrder_Rect;
   ASN1BOOL slicesNoOrder_NonRect;
   ASN1BOOL slicesNoOrder_Rect;
   ASN1BOOL alternateInterVLCMode;
   ASN1BOOL modifiedQuantizationMode;
   ASN1BOOL reducedResolutionUpdate;
   H245TransparencyParameters transparencyParameters;
   ASN1BOOL separateVideoBackChannel;
   H245RefPictureSelection refPictureSelection;
   H245H263Options_customPictureClockFrequency customPictureClockFrequency;
   H245H263Options_customPictureFormat customPictureFormat;
   H245H263Options_modeCombos modeCombos;
   ASN1BOOL videoBadMBsCap;
   H245H263Version3Options h263Version3Options;
   DList extElem1;
} H245H263Options;

EXTERN int asn1PE_H245H263Options (OOCTXT* pctxt, H245H263Options* pvalue);

EXTERN int asn1PD_H245H263Options (OOCTXT* pctxt, H245H263Options* pvalue);

/**************************************************************/
/*                                                            */
/*  EnhancementOptions                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EnhancementOptions {
   struct {
      unsigned sqcifMPIPresent : 1;
      unsigned qcifMPIPresent : 1;
      unsigned cifMPIPresent : 1;
      unsigned cif4MPIPresent : 1;
      unsigned cif16MPIPresent : 1;
      unsigned slowSqcifMPIPresent : 1;
      unsigned slowQcifMPIPresent : 1;
      unsigned slowCifMPIPresent : 1;
      unsigned slowCif4MPIPresent : 1;
      unsigned slowCif16MPIPresent : 1;
      unsigned h263OptionsPresent : 1;
   } m;
   ASN1UINT8 sqcifMPI;
   ASN1UINT8 qcifMPI;
   ASN1UINT8 cifMPI;
   ASN1UINT8 cif4MPI;
   ASN1UINT8 cif16MPI;
   ASN1UINT maxBitRate;
   ASN1BOOL unrestrictedVector;
   ASN1BOOL arithmeticCoding;
   ASN1BOOL temporalSpatialTradeOffCapability;
   ASN1USINT slowSqcifMPI;
   ASN1USINT slowQcifMPI;
   ASN1USINT slowCifMPI;
   ASN1USINT slowCif4MPI;
   ASN1USINT slowCif16MPI;
   ASN1BOOL errorCompensation;
   H245H263Options h263Options;
   DList extElem1;
} H245EnhancementOptions;

EXTERN int asn1PE_H245EnhancementOptions (OOCTXT* pctxt, H245EnhancementOptions* pvalue);

EXTERN int asn1PD_H245EnhancementOptions (OOCTXT* pctxt, H245EnhancementOptions* pvalue);

/**************************************************************/
/*                                                            */
/*  EnhancementLayerInfo_snrEnhancement                       */
/*                                                            */
/**************************************************************/

/* List of H245EnhancementOptions */
typedef DList H245EnhancementLayerInfo_snrEnhancement;

EXTERN int asn1PE_H245EnhancementLayerInfo_snrEnhancement (OOCTXT* pctxt, H245EnhancementLayerInfo_snrEnhancement value);

EXTERN int asn1PD_H245EnhancementLayerInfo_snrEnhancement (OOCTXT* pctxt, H245EnhancementLayerInfo_snrEnhancement* pvalue);

/**************************************************************/
/*                                                            */
/*  EnhancementLayerInfo_spatialEnhancement                   */
/*                                                            */
/**************************************************************/

/* List of H245EnhancementOptions */
typedef DList H245EnhancementLayerInfo_spatialEnhancement;

EXTERN int asn1PE_H245EnhancementLayerInfo_spatialEnhancement (OOCTXT* pctxt, H245EnhancementLayerInfo_spatialEnhancement value);

EXTERN int asn1PD_H245EnhancementLayerInfo_spatialEnhancement (OOCTXT* pctxt, H245EnhancementLayerInfo_spatialEnhancement* pvalue);

/**************************************************************/
/*                                                            */
/*  BEnhancementParameters                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245BEnhancementParameters {
   H245EnhancementOptions enhancementOptions;
   ASN1UINT8 numberOfBPictures;
   DList extElem1;
} H245BEnhancementParameters;

EXTERN int asn1PE_H245BEnhancementParameters (OOCTXT* pctxt, H245BEnhancementParameters* pvalue);

EXTERN int asn1PD_H245BEnhancementParameters (OOCTXT* pctxt, H245BEnhancementParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  EnhancementLayerInfo_bPictureEnhancement                  */
/*                                                            */
/**************************************************************/

/* List of H245BEnhancementParameters */
typedef DList H245EnhancementLayerInfo_bPictureEnhancement;

EXTERN int asn1PE_H245EnhancementLayerInfo_bPictureEnhancement (OOCTXT* pctxt, H245EnhancementLayerInfo_bPictureEnhancement value);

EXTERN int asn1PD_H245EnhancementLayerInfo_bPictureEnhancement (OOCTXT* pctxt, H245EnhancementLayerInfo_bPictureEnhancement* pvalue);

/**************************************************************/
/*                                                            */
/*  EnhancementLayerInfo                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EnhancementLayerInfo {
   struct {
      unsigned snrEnhancementPresent : 1;
      unsigned spatialEnhancementPresent : 1;
      unsigned bPictureEnhancementPresent : 1;
   } m;
   ASN1BOOL baseBitRateConstrained;
   H245EnhancementLayerInfo_snrEnhancement snrEnhancement;
   H245EnhancementLayerInfo_spatialEnhancement spatialEnhancement;
   H245EnhancementLayerInfo_bPictureEnhancement bPictureEnhancement;
   DList extElem1;
} H245EnhancementLayerInfo;

EXTERN int asn1PE_H245EnhancementLayerInfo (OOCTXT* pctxt, H245EnhancementLayerInfo* pvalue);

EXTERN int asn1PD_H245EnhancementLayerInfo (OOCTXT* pctxt, H245EnhancementLayerInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  H263VideoCapability                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H263VideoCapability {
   struct {
      unsigned sqcifMPIPresent : 1;
      unsigned qcifMPIPresent : 1;
      unsigned cifMPIPresent : 1;
      unsigned cif4MPIPresent : 1;
      unsigned cif16MPIPresent : 1;
      unsigned hrd_BPresent : 1;
      unsigned bppMaxKbPresent : 1;
      unsigned slowSqcifMPIPresent : 1;
      unsigned slowQcifMPIPresent : 1;
      unsigned slowCifMPIPresent : 1;
      unsigned slowCif4MPIPresent : 1;
      unsigned slowCif16MPIPresent : 1;
      unsigned errorCompensationPresent : 1;
      unsigned enhancementLayerInfoPresent : 1;
      unsigned h263OptionsPresent : 1;
   } m;
   ASN1UINT8 sqcifMPI;
   ASN1UINT8 qcifMPI;
   ASN1UINT8 cifMPI;
   ASN1UINT8 cif4MPI;
   ASN1UINT8 cif16MPI;
   ASN1UINT maxBitRate;
   ASN1BOOL unrestrictedVector;
   ASN1BOOL arithmeticCoding;
   ASN1BOOL advancedPrediction;
   ASN1BOOL pbFrames;
   ASN1BOOL temporalSpatialTradeOffCapability;
   ASN1UINT hrd_B;
   ASN1USINT bppMaxKb;
   ASN1USINT slowSqcifMPI;
   ASN1USINT slowQcifMPI;
   ASN1USINT slowCifMPI;
   ASN1USINT slowCif4MPI;
   ASN1USINT slowCif16MPI;
   ASN1BOOL errorCompensation;
   H245EnhancementLayerInfo enhancementLayerInfo;
   H245H263Options h263Options;
   DList extElem1;
} H245H263VideoCapability;

EXTERN int asn1PE_H245H263VideoCapability (OOCTXT* pctxt, H245H263VideoCapability* pvalue);

EXTERN int asn1PD_H245H263VideoCapability (OOCTXT* pctxt, H245H263VideoCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172VideoCapability                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IS11172VideoCapability {
   struct {
      unsigned videoBitRatePresent : 1;
      unsigned vbvBufferSizePresent : 1;
      unsigned samplesPerLinePresent : 1;
      unsigned linesPerFramePresent : 1;
      unsigned pictureRatePresent : 1;
      unsigned luminanceSampleRatePresent : 1;
      unsigned videoBadMBsCapPresent : 1;
   } m;
   ASN1BOOL constrainedBitstream;
   ASN1UINT videoBitRate;
   ASN1UINT vbvBufferSize;
   ASN1USINT samplesPerLine;
   ASN1USINT linesPerFrame;
   ASN1UINT8 pictureRate;
   ASN1UINT luminanceSampleRate;
   ASN1BOOL videoBadMBsCap;
   DList extElem1;
} H245IS11172VideoCapability;

EXTERN int asn1PE_H245IS11172VideoCapability (OOCTXT* pctxt, H245IS11172VideoCapability* pvalue);

EXTERN int asn1PD_H245IS11172VideoCapability (OOCTXT* pctxt, H245IS11172VideoCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  VideoCapability                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245VideoCapability_nonStandard 1
#define T_H245VideoCapability_h261VideoCapability 2
#define T_H245VideoCapability_h262VideoCapability 3
#define T_H245VideoCapability_h263VideoCapability 4
#define T_H245VideoCapability_is11172VideoCapability 5
#define T_H245VideoCapability_genericVideoCapability 6
#define T_H245VideoCapability_extElem1  7

typedef struct EXTERN H245VideoCapability {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245H261VideoCapability *h261VideoCapability;
      /* t = 3 */
      H245H262VideoCapability *h262VideoCapability;
      /* t = 4 */
      H245H263VideoCapability *h263VideoCapability;
      /* t = 5 */
      H245IS11172VideoCapability *is11172VideoCapability;
      /* t = 6 */
      H245GenericCapability *genericVideoCapability;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H245VideoCapability;

EXTERN int asn1PE_H245VideoCapability (OOCTXT* pctxt, H245VideoCapability* pvalue);

EXTERN int asn1PD_H245VideoCapability (OOCTXT* pctxt, H245VideoCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  AudioCapability_g7231                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245AudioCapability_g7231 {
   ASN1USINT maxAl_sduAudioFrames;
   ASN1BOOL silenceSuppression;
} H245AudioCapability_g7231;

EXTERN int asn1PE_H245AudioCapability_g7231 (OOCTXT* pctxt, H245AudioCapability_g7231* pvalue);

EXTERN int asn1PD_H245AudioCapability_g7231 (OOCTXT* pctxt, H245AudioCapability_g7231* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172AudioCapability                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IS11172AudioCapability {
   ASN1BOOL audioLayer1;
   ASN1BOOL audioLayer2;
   ASN1BOOL audioLayer3;
   ASN1BOOL audioSampling32k;
   ASN1BOOL audioSampling44k1;
   ASN1BOOL audioSampling48k;
   ASN1BOOL singleChannel;
   ASN1BOOL twoChannels;
   ASN1USINT bitRate;
   DList extElem1;
} H245IS11172AudioCapability;

EXTERN int asn1PE_H245IS11172AudioCapability (OOCTXT* pctxt, H245IS11172AudioCapability* pvalue);

EXTERN int asn1PD_H245IS11172AudioCapability (OOCTXT* pctxt, H245IS11172AudioCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  IS13818AudioCapability                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IS13818AudioCapability {
   ASN1BOOL audioLayer1;
   ASN1BOOL audioLayer2;
   ASN1BOOL audioLayer3;
   ASN1BOOL audioSampling16k;
   ASN1BOOL audioSampling22k05;
   ASN1BOOL audioSampling24k;
   ASN1BOOL audioSampling32k;
   ASN1BOOL audioSampling44k1;
   ASN1BOOL audioSampling48k;
   ASN1BOOL singleChannel;
   ASN1BOOL twoChannels;
   ASN1BOOL threeChannels2_1;
   ASN1BOOL threeChannels3_0;
   ASN1BOOL fourChannels2_0_2_0;
   ASN1BOOL fourChannels2_2;
   ASN1BOOL fourChannels3_1;
   ASN1BOOL fiveChannels3_0_2_0;
   ASN1BOOL fiveChannels3_2;
   ASN1BOOL lowFrequencyEnhancement;
   ASN1BOOL multilingual;
   ASN1USINT bitRate;
   DList extElem1;
} H245IS13818AudioCapability;

EXTERN int asn1PE_H245IS13818AudioCapability (OOCTXT* pctxt, H245IS13818AudioCapability* pvalue);

EXTERN int asn1PD_H245IS13818AudioCapability (OOCTXT* pctxt, H245IS13818AudioCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  G7231AnnexCCapability_g723AnnexCAudioMode                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245G7231AnnexCCapability_g723AnnexCAudioMode {
   ASN1UINT8 highRateMode0;
   ASN1UINT8 highRateMode1;
   ASN1UINT8 lowRateMode0;
   ASN1UINT8 lowRateMode1;
   ASN1UINT8 sidMode0;
   ASN1UINT8 sidMode1;
   DList extElem1;
} H245G7231AnnexCCapability_g723AnnexCAudioMode;

EXTERN int asn1PE_H245G7231AnnexCCapability_g723AnnexCAudioMode (OOCTXT* pctxt, H245G7231AnnexCCapability_g723AnnexCAudioMode* pvalue);

EXTERN int asn1PD_H245G7231AnnexCCapability_g723AnnexCAudioMode (OOCTXT* pctxt, H245G7231AnnexCCapability_g723AnnexCAudioMode* pvalue);

/**************************************************************/
/*                                                            */
/*  G7231AnnexCCapability                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245G7231AnnexCCapability {
   struct {
      unsigned g723AnnexCAudioModePresent : 1;
   } m;
   ASN1USINT maxAl_sduAudioFrames;
   ASN1BOOL silenceSuppression;
   H245G7231AnnexCCapability_g723AnnexCAudioMode g723AnnexCAudioMode;
   DList extElem1;
} H245G7231AnnexCCapability;

EXTERN int asn1PE_H245G7231AnnexCCapability (OOCTXT* pctxt, H245G7231AnnexCCapability* pvalue);

EXTERN int asn1PD_H245G7231AnnexCCapability (OOCTXT* pctxt, H245G7231AnnexCCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  GSMAudioCapability                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245GSMAudioCapability {
   ASN1USINT audioUnitSize;
   ASN1BOOL comfortNoise;
   ASN1BOOL scrambled;
   DList extElem1;
} H245GSMAudioCapability;

EXTERN int asn1PE_H245GSMAudioCapability (OOCTXT* pctxt, H245GSMAudioCapability* pvalue);

EXTERN int asn1PD_H245GSMAudioCapability (OOCTXT* pctxt, H245GSMAudioCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  G729Extensions                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245G729Extensions {
   struct {
      unsigned audioUnitPresent : 1;
   } m;
   ASN1USINT audioUnit;
   ASN1BOOL annexA;
   ASN1BOOL annexB;
   ASN1BOOL annexD;
   ASN1BOOL annexE;
   ASN1BOOL annexF;
   ASN1BOOL annexG;
   ASN1BOOL annexH;
   DList extElem1;
} H245G729Extensions;

EXTERN int asn1PE_H245G729Extensions (OOCTXT* pctxt, H245G729Extensions* pvalue);

EXTERN int asn1PD_H245G729Extensions (OOCTXT* pctxt, H245G729Extensions* pvalue);

/**************************************************************/
/*                                                            */
/*  VBDCapability                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VBDCapability {
   struct H245AudioCapability *type;
   DList extElem1;
} H245VBDCapability;

EXTERN int asn1PE_H245VBDCapability (OOCTXT* pctxt, H245VBDCapability* pvalue);

EXTERN int asn1PD_H245VBDCapability (OOCTXT* pctxt, H245VBDCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  NoPTAudioTelephonyEventCapability                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NoPTAudioTelephonyEventCapability {
   ASN1GeneralString audioTelephoneEvent;
   DList extElem1;
} H245NoPTAudioTelephonyEventCapability;

EXTERN int asn1PE_H245NoPTAudioTelephonyEventCapability (OOCTXT* pctxt, H245NoPTAudioTelephonyEventCapability* pvalue);

EXTERN int asn1PD_H245NoPTAudioTelephonyEventCapability (OOCTXT* pctxt, H245NoPTAudioTelephonyEventCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  NoPTAudioToneCapability                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NoPTAudioToneCapability {
   DList extElem1;
} H245NoPTAudioToneCapability;

EXTERN int asn1PE_H245NoPTAudioToneCapability (OOCTXT* pctxt, H245NoPTAudioToneCapability* pvalue);

EXTERN int asn1PD_H245NoPTAudioToneCapability (OOCTXT* pctxt, H245NoPTAudioToneCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  AudioCapability                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245AudioCapability_nonStandard 1
#define T_H245AudioCapability_g711Alaw64k 2
#define T_H245AudioCapability_g711Alaw56k 3
#define T_H245AudioCapability_g711Ulaw64k 4
#define T_H245AudioCapability_g711Ulaw56k 5
#define T_H245AudioCapability_g722_64k  6
#define T_H245AudioCapability_g722_56k  7
#define T_H245AudioCapability_g722_48k  8
#define T_H245AudioCapability_g7231     9
#define T_H245AudioCapability_g728      10
#define T_H245AudioCapability_g729      11
#define T_H245AudioCapability_g729AnnexA 12
#define T_H245AudioCapability_is11172AudioCapability 13
#define T_H245AudioCapability_is13818AudioCapability 14
#define T_H245AudioCapability_g729wAnnexB 15
#define T_H245AudioCapability_g729AnnexAwAnnexB 16
#define T_H245AudioCapability_g7231AnnexCCapability 17
#define T_H245AudioCapability_gsmFullRate 18
#define T_H245AudioCapability_gsmHalfRate 19
#define T_H245AudioCapability_gsmEnhancedFullRate 20
#define T_H245AudioCapability_genericAudioCapability 21
#define T_H245AudioCapability_g729Extensions 22
#define T_H245AudioCapability_vbd       23
#define T_H245AudioCapability_audioTelephonyEvent 24
#define T_H245AudioCapability_audioTone 25
#define T_H245AudioCapability_extElem1  26

typedef struct EXTERN H245AudioCapability {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      ASN1USINT g711Alaw64k;
      /* t = 3 */
      ASN1USINT g711Alaw56k;
      /* t = 4 */
      ASN1USINT g711Ulaw64k;
      /* t = 5 */
      ASN1USINT g711Ulaw56k;
      /* t = 6 */
      ASN1USINT g722_64k;
      /* t = 7 */
      ASN1USINT g722_56k;
      /* t = 8 */
      ASN1USINT g722_48k;
      /* t = 9 */
      H245AudioCapability_g7231 *g7231;
      /* t = 10 */
      ASN1USINT g728;
      /* t = 11 */
      ASN1USINT g729;
      /* t = 12 */
      ASN1USINT g729AnnexA;
      /* t = 13 */
      H245IS11172AudioCapability *is11172AudioCapability;
      /* t = 14 */
      H245IS13818AudioCapability *is13818AudioCapability;
      /* t = 15 */
      ASN1USINT g729wAnnexB;
      /* t = 16 */
      ASN1USINT g729AnnexAwAnnexB;
      /* t = 17 */
      H245G7231AnnexCCapability *g7231AnnexCCapability;
      /* t = 18 */
      H245GSMAudioCapability *gsmFullRate;
      /* t = 19 */
      H245GSMAudioCapability *gsmHalfRate;
      /* t = 20 */
      H245GSMAudioCapability *gsmEnhancedFullRate;
      /* t = 21 */
      H245GenericCapability *genericAudioCapability;
      /* t = 22 */
      H245G729Extensions *g729Extensions;
      /* t = 23 */
      H245VBDCapability *vbd;
      /* t = 24 */
      H245NoPTAudioTelephonyEventCapability *audioTelephonyEvent;
      /* t = 25 */
      H245NoPTAudioToneCapability *audioTone;
      /* t = 26 */
      ASN1OpenType *extElem1;
   } u;
} H245AudioCapability;

EXTERN int asn1PE_H245AudioCapability (OOCTXT* pctxt, H245AudioCapability* pvalue);

EXTERN int asn1PD_H245AudioCapability (OOCTXT* pctxt, H245AudioCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  Capability_h233EncryptionReceiveCapability                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245Capability_h233EncryptionReceiveCapability {
   ASN1UINT8 h233IVResponseTime;
   DList extElem1;
} H245Capability_h233EncryptionReceiveCapability;

EXTERN int asn1PE_H245Capability_h233EncryptionReceiveCapability (OOCTXT* pctxt, H245Capability_h233EncryptionReceiveCapability* pvalue);

EXTERN int asn1PD_H245Capability_h233EncryptionReceiveCapability (OOCTXT* pctxt, H245Capability_h233EncryptionReceiveCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245NonStandardParameter                            */
/*                                                            */
/**************************************************************/

/* List of H245NonStandardParameter */
typedef DList H245_SeqOfH245NonStandardParameter;

EXTERN int asn1PE_H245_SeqOfH245NonStandardParameter (OOCTXT* pctxt, H245_SeqOfH245NonStandardParameter value);

EXTERN int asn1PD_H245_SeqOfH245NonStandardParameter (OOCTXT* pctxt, H245_SeqOfH245NonStandardParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceCapability                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceCapability {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned videoIndicateMixingCapabilityPresent : 1;
      unsigned multipointVisualizationCapabilityPresent : 1;
   } m;
   H245_SeqOfH245NonStandardParameter nonStandardData;
   ASN1BOOL chairControlCapability;
   ASN1BOOL videoIndicateMixingCapability;
   ASN1BOOL multipointVisualizationCapability;
   DList extElem1;
} H245ConferenceCapability;

EXTERN int asn1PE_H245ConferenceCapability (OOCTXT* pctxt, H245ConferenceCapability* pvalue);

EXTERN int asn1PD_H245ConferenceCapability (OOCTXT* pctxt, H245ConferenceCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  MediaEncryptionAlgorithm                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MediaEncryptionAlgorithm_nonStandard 1
#define T_H245MediaEncryptionAlgorithm_algorithm 2
#define T_H245MediaEncryptionAlgorithm_extElem1 3

typedef struct EXTERN H245MediaEncryptionAlgorithm {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      ASN1OBJID *algorithm;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245MediaEncryptionAlgorithm;

EXTERN int asn1PE_H245MediaEncryptionAlgorithm (OOCTXT* pctxt, H245MediaEncryptionAlgorithm* pvalue);

EXTERN int asn1PD_H245MediaEncryptionAlgorithm (OOCTXT* pctxt, H245MediaEncryptionAlgorithm* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionCapability                                      */
/*                                                            */
/**************************************************************/

/* List of H245MediaEncryptionAlgorithm */
typedef DList H245EncryptionCapability;

EXTERN int asn1PE_H245EncryptionCapability (OOCTXT* pctxt, H245EncryptionCapability value);

EXTERN int asn1PD_H245EncryptionCapability (OOCTXT* pctxt, H245EncryptionCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  AuthenticationCapability                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245AuthenticationCapability {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned antiSpamAlgorithmPresent : 1;
   } m;
   H245NonStandardParameter nonStandard;
   ASN1OBJID antiSpamAlgorithm;
   DList extElem1;
} H245AuthenticationCapability;

EXTERN int asn1PE_H245AuthenticationCapability (OOCTXT* pctxt, H245AuthenticationCapability* pvalue);

EXTERN int asn1PD_H245AuthenticationCapability (OOCTXT* pctxt, H245AuthenticationCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  IntegrityCapability                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IntegrityCapability {
   struct {
      unsigned nonStandardPresent : 1;
   } m;
   H245NonStandardParameter nonStandard;
   DList extElem1;
} H245IntegrityCapability;

EXTERN int asn1PE_H245IntegrityCapability (OOCTXT* pctxt, H245IntegrityCapability* pvalue);

EXTERN int asn1PD_H245IntegrityCapability (OOCTXT* pctxt, H245IntegrityCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionAuthenticationAndIntegrity                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EncryptionAuthenticationAndIntegrity {
   struct {
      unsigned encryptionCapabilityPresent : 1;
      unsigned authenticationCapabilityPresent : 1;
      unsigned integrityCapabilityPresent : 1;
   } m;
   H245EncryptionCapability encryptionCapability;
   H245AuthenticationCapability authenticationCapability;
   H245IntegrityCapability integrityCapability;
   DList extElem1;
} H245EncryptionAuthenticationAndIntegrity;

EXTERN int asn1PE_H245EncryptionAuthenticationAndIntegrity (OOCTXT* pctxt, H245EncryptionAuthenticationAndIntegrity* pvalue);

EXTERN int asn1PD_H245EncryptionAuthenticationAndIntegrity (OOCTXT* pctxt, H245EncryptionAuthenticationAndIntegrity* pvalue);

/**************************************************************/
/*                                                            */
/*  H235SecurityCapability                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H235SecurityCapability {
   H245EncryptionAuthenticationAndIntegrity encryptionAuthenticationAndIntegrity;
   H245CapabilityTableEntryNumber mediaCapability;
   DList extElem1;
} H245H235SecurityCapability;

EXTERN int asn1PE_H245H235SecurityCapability (OOCTXT* pctxt, H245H235SecurityCapability* pvalue);

EXTERN int asn1PD_H245H235SecurityCapability (OOCTXT* pctxt, H245H235SecurityCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputCapability_nonStandard                           */
/*                                                            */
/**************************************************************/

/* List of H245NonStandardParameter */
typedef DList H245UserInputCapability_nonStandard;

EXTERN int asn1PE_H245UserInputCapability_nonStandard (OOCTXT* pctxt, H245UserInputCapability_nonStandard value);

EXTERN int asn1PD_H245UserInputCapability_nonStandard (OOCTXT* pctxt, H245UserInputCapability_nonStandard* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputCapability                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245UserInputCapability_nonStandard 1
#define T_H245UserInputCapability_basicString 2
#define T_H245UserInputCapability_iA5String 3
#define T_H245UserInputCapability_generalString 4
#define T_H245UserInputCapability_dtmf  5
#define T_H245UserInputCapability_hookflash 6
#define T_H245UserInputCapability_extendedAlphanumeric 7
#define T_H245UserInputCapability_extElem1 8

typedef struct EXTERN H245UserInputCapability {
   int t;
   union {
      /* t = 1 */
      H245UserInputCapability_nonStandard *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      ASN1OpenType *extElem1;
   } u;
} H245UserInputCapability;

EXTERN int asn1PE_H245UserInputCapability (OOCTXT* pctxt, H245UserInputCapability* pvalue);

EXTERN int asn1PD_H245UserInputCapability (OOCTXT* pctxt, H245UserInputCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexFormat                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultiplexFormat_nonStandard 1
#define T_H245MultiplexFormat_h222Capability 2
#define T_H245MultiplexFormat_h223Capability 3
#define T_H245MultiplexFormat_extElem1  4

typedef struct EXTERN H245MultiplexFormat {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245H222Capability *h222Capability;
      /* t = 3 */
      H245H223Capability *h223Capability;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245MultiplexFormat;

EXTERN int asn1PE_H245MultiplexFormat (OOCTXT* pctxt, H245MultiplexFormat* pvalue);

EXTERN int asn1PD_H245MultiplexFormat (OOCTXT* pctxt, H245MultiplexFormat* pvalue);

/**************************************************************/
/*                                                            */
/*  AlternativeCapabilitySet                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245AlternativeCapabilitySet {
   ASN1UINT n;
   H245CapabilityTableEntryNumber elem[256];
} H245AlternativeCapabilitySet;

EXTERN int asn1PE_H245AlternativeCapabilitySet (OOCTXT* pctxt, H245AlternativeCapabilitySet* pvalue);

EXTERN int asn1PD_H245AlternativeCapabilitySet (OOCTXT* pctxt, H245AlternativeCapabilitySet* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexedStreamCapability_capabilityOnMuxStream         */
/*                                                            */
/**************************************************************/

/* List of H245AlternativeCapabilitySet */
typedef DList H245MultiplexedStreamCapability_capabilityOnMuxStream;

EXTERN int asn1PE_H245MultiplexedStreamCapability_capabilityOnMuxStream (OOCTXT* pctxt, H245MultiplexedStreamCapability_capabilityOnMuxStream value);

EXTERN int asn1PD_H245MultiplexedStreamCapability_capabilityOnMuxStream (OOCTXT* pctxt, H245MultiplexedStreamCapability_capabilityOnMuxStream* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexedStreamCapability                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexedStreamCapability {
   struct {
      unsigned capabilityOnMuxStreamPresent : 1;
   } m;
   H245MultiplexFormat multiplexFormat;
   ASN1BOOL controlOnMuxStream;
   H245MultiplexedStreamCapability_capabilityOnMuxStream capabilityOnMuxStream;
   DList extElem1;
} H245MultiplexedStreamCapability;

EXTERN int asn1PE_H245MultiplexedStreamCapability (OOCTXT* pctxt, H245MultiplexedStreamCapability* pvalue);

EXTERN int asn1PD_H245MultiplexedStreamCapability (OOCTXT* pctxt, H245MultiplexedStreamCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  AudioTelephonyEventCapability                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245AudioTelephonyEventCapability {
   ASN1UINT8 dynamicRTPPayloadType;
   ASN1GeneralString audioTelephoneEvent;
   DList extElem1;
} H245AudioTelephonyEventCapability;

EXTERN int asn1PE_H245AudioTelephonyEventCapability (OOCTXT* pctxt, H245AudioTelephonyEventCapability* pvalue);

EXTERN int asn1PD_H245AudioTelephonyEventCapability (OOCTXT* pctxt, H245AudioTelephonyEventCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  AudioToneCapability                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245AudioToneCapability {
   ASN1UINT8 dynamicRTPPayloadType;
   DList extElem1;
} H245AudioToneCapability;

EXTERN int asn1PE_H245AudioToneCapability (OOCTXT* pctxt, H245AudioToneCapability* pvalue);

EXTERN int asn1PD_H245AudioToneCapability (OOCTXT* pctxt, H245AudioToneCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  FECCapability_rfc2733_separateStream                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECCapability_rfc2733_separateStream {
   ASN1BOOL separatePort;
   ASN1BOOL samePort;
   DList extElem1;
} H245FECCapability_rfc2733_separateStream;

EXTERN int asn1PE_H245FECCapability_rfc2733_separateStream (OOCTXT* pctxt, H245FECCapability_rfc2733_separateStream* pvalue);

EXTERN int asn1PD_H245FECCapability_rfc2733_separateStream (OOCTXT* pctxt, H245FECCapability_rfc2733_separateStream* pvalue);

/**************************************************************/
/*                                                            */
/*  FECCapability_rfc2733                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECCapability_rfc2733 {
   ASN1BOOL redundancyEncoding;
   H245FECCapability_rfc2733_separateStream separateStream;
   DList extElem1;
} H245FECCapability_rfc2733;

EXTERN int asn1PE_H245FECCapability_rfc2733 (OOCTXT* pctxt, H245FECCapability_rfc2733* pvalue);

EXTERN int asn1PD_H245FECCapability_rfc2733 (OOCTXT* pctxt, H245FECCapability_rfc2733* pvalue);

/**************************************************************/
/*                                                            */
/*  FECCapability                                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECCapability_rfc2733     1
#define T_H245FECCapability_extElem1    2

typedef struct EXTERN H245FECCapability {
   int t;
   union {
      /* t = 1 */
      H245FECCapability_rfc2733 *rfc2733;
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245FECCapability;

EXTERN int asn1PE_H245FECCapability (OOCTXT* pctxt, H245FECCapability* pvalue);

EXTERN int asn1PD_H245FECCapability (OOCTXT* pctxt, H245FECCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplePayloadStreamCapability_capabilities              */
/*                                                            */
/**************************************************************/

/* List of H245AlternativeCapabilitySet */
typedef DList H245MultiplePayloadStreamCapability_capabilities;

EXTERN int asn1PE_H245MultiplePayloadStreamCapability_capabilities (OOCTXT* pctxt, H245MultiplePayloadStreamCapability_capabilities value);

EXTERN int asn1PD_H245MultiplePayloadStreamCapability_capabilities (OOCTXT* pctxt, H245MultiplePayloadStreamCapability_capabilities* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplePayloadStreamCapability                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplePayloadStreamCapability {
   H245MultiplePayloadStreamCapability_capabilities capabilities;
   DList extElem1;
} H245MultiplePayloadStreamCapability;

EXTERN int asn1PE_H245MultiplePayloadStreamCapability (OOCTXT* pctxt, H245MultiplePayloadStreamCapability* pvalue);

EXTERN int asn1PD_H245MultiplePayloadStreamCapability (OOCTXT* pctxt, H245MultiplePayloadStreamCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  Capability                                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245Capability_nonStandard    1
#define T_H245Capability_receiveVideoCapability 2
#define T_H245Capability_transmitVideoCapability 3
#define T_H245Capability_receiveAndTransmitVideoCapability 4
#define T_H245Capability_receiveAudioCapability 5
#define T_H245Capability_transmitAudioCapability 6
#define T_H245Capability_receiveAndTransmitAudioCapability 7
#define T_H245Capability_receiveDataApplicationCapability 8
#define T_H245Capability_transmitDataApplicationCapability 9
#define T_H245Capability_receiveAndTransmitDataApplicationCapability 10
#define T_H245Capability_h233EncryptionTransmitCapability 11
#define T_H245Capability_h233EncryptionReceiveCapability 12
#define T_H245Capability_conferenceCapability 13
#define T_H245Capability_h235SecurityCapability 14
#define T_H245Capability_maxPendingReplacementFor 15
#define T_H245Capability_receiveUserInputCapability 16
#define T_H245Capability_transmitUserInputCapability 17
#define T_H245Capability_receiveAndTransmitUserInputCapability 18
#define T_H245Capability_genericControlCapability 19
#define T_H245Capability_receiveMultiplexedStreamCapability 20
#define T_H245Capability_transmitMultiplexedStreamCapability 21
#define T_H245Capability_receiveAndTransmitMultiplexedStreamCapability 22
#define T_H245Capability_receiveRTPAudioTelephonyEventCapability 23
#define T_H245Capability_receiveRTPAudioToneCapability 24
#define T_H245Capability_fecCapability  25
#define T_H245Capability_multiplePayloadStreamCapability 26
#define T_H245Capability_extElem1       27

typedef struct EXTERN H245Capability {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245VideoCapability *receiveVideoCapability;
      /* t = 3 */
      H245VideoCapability *transmitVideoCapability;
      /* t = 4 */
      H245VideoCapability *receiveAndTransmitVideoCapability;
      /* t = 5 */
      H245AudioCapability *receiveAudioCapability;
      /* t = 6 */
      H245AudioCapability *transmitAudioCapability;
      /* t = 7 */
      H245AudioCapability *receiveAndTransmitAudioCapability;
      /* t = 8 */
      H245DataApplicationCapability *receiveDataApplicationCapability;
      /* t = 9 */
      H245DataApplicationCapability *transmitDataApplicationCapability;
      /* t = 10 */
      H245DataApplicationCapability *receiveAndTransmitDataApplicationCapability;
      /* t = 11 */
      ASN1BOOL h233EncryptionTransmitCapability;
      /* t = 12 */
      H245Capability_h233EncryptionReceiveCapability *h233EncryptionReceiveCapability;
      /* t = 13 */
      H245ConferenceCapability *conferenceCapability;
      /* t = 14 */
      H245H235SecurityCapability *h235SecurityCapability;
      /* t = 15 */
      ASN1UINT8 maxPendingReplacementFor;
      /* t = 16 */
      H245UserInputCapability *receiveUserInputCapability;
      /* t = 17 */
      H245UserInputCapability *transmitUserInputCapability;
      /* t = 18 */
      H245UserInputCapability *receiveAndTransmitUserInputCapability;
      /* t = 19 */
      H245GenericCapability *genericControlCapability;
      /* t = 20 */
      H245MultiplexedStreamCapability *receiveMultiplexedStreamCapability;
      /* t = 21 */
      H245MultiplexedStreamCapability *transmitMultiplexedStreamCapability;
      /* t = 22 */
      H245MultiplexedStreamCapability *receiveAndTransmitMultiplexedStreamCapability;
      /* t = 23 */
      H245AudioTelephonyEventCapability *receiveRTPAudioTelephonyEventCapability;
      /* t = 24 */
      H245AudioToneCapability *receiveRTPAudioToneCapability;
      /* t = 25 */
      H245FECCapability *fecCapability;
      /* t = 26 */
      H245MultiplePayloadStreamCapability *multiplePayloadStreamCapability;
      /* t = 27 */
      ASN1OpenType *extElem1;
   } u;
} H245Capability;

EXTERN int asn1PE_H245Capability (OOCTXT* pctxt, H245Capability* pvalue);

EXTERN int asn1PD_H245Capability (OOCTXT* pctxt, H245Capability* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityTableEntry                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CapabilityTableEntry {
   struct {
      unsigned capabilityPresent : 1;
   } m;
   H245CapabilityTableEntryNumber capabilityTableEntryNumber;
   H245Capability capability;
} H245CapabilityTableEntry;

EXTERN int asn1PE_H245CapabilityTableEntry (OOCTXT* pctxt, H245CapabilityTableEntry* pvalue);

EXTERN int asn1PD_H245CapabilityTableEntry (OOCTXT* pctxt, H245CapabilityTableEntry* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySet_capabilityTable                     */
/*                                                            */
/**************************************************************/

/* List of H245CapabilityTableEntry */
typedef DList H245TerminalCapabilitySet_capabilityTable;

EXTERN int asn1PE_H245TerminalCapabilitySet_capabilityTable (OOCTXT* pctxt, H245TerminalCapabilitySet_capabilityTable value);

EXTERN int asn1PD_H245TerminalCapabilitySet_capabilityTable (OOCTXT* pctxt, H245TerminalCapabilitySet_capabilityTable* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityDescriptor_simultaneousCapabilities             */
/*                                                            */
/**************************************************************/

/* List of H245AlternativeCapabilitySet */
typedef DList H245CapabilityDescriptor_simultaneousCapabilities;

EXTERN int asn1PE_H245CapabilityDescriptor_simultaneousCapabilities (OOCTXT* pctxt, H245CapabilityDescriptor_simultaneousCapabilities value);

EXTERN int asn1PD_H245CapabilityDescriptor_simultaneousCapabilities (OOCTXT* pctxt, H245CapabilityDescriptor_simultaneousCapabilities* pvalue);

/**************************************************************/
/*                                                            */
/*  CapabilityDescriptor                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CapabilityDescriptor {
   struct {
      unsigned simultaneousCapabilitiesPresent : 1;
   } m;
   H245CapabilityDescriptorNumber capabilityDescriptorNumber;
   H245CapabilityDescriptor_simultaneousCapabilities simultaneousCapabilities;
} H245CapabilityDescriptor;

EXTERN int asn1PE_H245CapabilityDescriptor (OOCTXT* pctxt, H245CapabilityDescriptor* pvalue);

EXTERN int asn1PD_H245CapabilityDescriptor (OOCTXT* pctxt, H245CapabilityDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySet_capabilityDescriptors               */
/*                                                            */
/**************************************************************/

/* List of H245CapabilityDescriptor */
typedef DList H245TerminalCapabilitySet_capabilityDescriptors;

EXTERN int asn1PE_H245TerminalCapabilitySet_capabilityDescriptors (OOCTXT* pctxt, H245TerminalCapabilitySet_capabilityDescriptors value);

EXTERN int asn1PD_H245TerminalCapabilitySet_capabilityDescriptors (OOCTXT* pctxt, H245TerminalCapabilitySet_capabilityDescriptors* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySet                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalCapabilitySet {
   struct {
      unsigned multiplexCapabilityPresent : 1;
      unsigned capabilityTablePresent : 1;
      unsigned capabilityDescriptorsPresent : 1;
   } m;
   H245SequenceNumber sequenceNumber;
   ASN1OBJID protocolIdentifier;
   H245MultiplexCapability multiplexCapability;
   H245TerminalCapabilitySet_capabilityTable capabilityTable;
   H245TerminalCapabilitySet_capabilityDescriptors capabilityDescriptors;
   DList extElem1;
} H245TerminalCapabilitySet;

EXTERN int asn1PE_H245TerminalCapabilitySet (OOCTXT* pctxt, H245TerminalCapabilitySet* pvalue);

EXTERN int asn1PD_H245TerminalCapabilitySet (OOCTXT* pctxt, H245TerminalCapabilitySet* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionMode                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245EncryptionMode_nonStandard 1
#define T_H245EncryptionMode_h233Encryption 2
#define T_H245EncryptionMode_extElem1   3

typedef struct EXTERN H245EncryptionMode {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245EncryptionMode;

EXTERN int asn1PE_H245EncryptionMode (OOCTXT* pctxt, H245EncryptionMode* pvalue);

EXTERN int asn1PD_H245EncryptionMode (OOCTXT* pctxt, H245EncryptionMode* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingElement                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncodingElement {
   struct {
      unsigned payloadTypePresent : 1;
   } m;
   struct H245DataType *dataType;
   ASN1UINT8 payloadType;
   DList extElem1;
} H245RedundancyEncodingElement;

EXTERN int asn1PE_H245RedundancyEncodingElement (OOCTXT* pctxt, H245RedundancyEncodingElement* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingElement (OOCTXT* pctxt, H245RedundancyEncodingElement* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245RedundancyEncodingElement                       */
/*                                                            */
/**************************************************************/

/* List of H245RedundancyEncodingElement */
typedef DList H245_SeqOfH245RedundancyEncodingElement;

EXTERN int asn1PE_H245_SeqOfH245RedundancyEncodingElement (OOCTXT* pctxt, H245_SeqOfH245RedundancyEncodingElement value);

EXTERN int asn1PD_H245_SeqOfH245RedundancyEncodingElement (OOCTXT* pctxt, H245_SeqOfH245RedundancyEncodingElement* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncoding_rtpRedundancyEncoding                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncoding_rtpRedundancyEncoding {
   struct {
      unsigned primaryPresent : 1;
      unsigned secondaryPresent : 1;
   } m;
   H245RedundancyEncodingElement primary;
   H245_SeqOfH245RedundancyEncodingElement secondary;
   DList extElem1;
} H245RedundancyEncoding_rtpRedundancyEncoding;

EXTERN int asn1PE_H245RedundancyEncoding_rtpRedundancyEncoding (OOCTXT* pctxt, H245RedundancyEncoding_rtpRedundancyEncoding* pvalue);

EXTERN int asn1PD_H245RedundancyEncoding_rtpRedundancyEncoding (OOCTXT* pctxt, H245RedundancyEncoding_rtpRedundancyEncoding* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncoding                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncoding {
   struct {
      unsigned secondaryEncodingPresent : 1;
      unsigned rtpRedundancyEncodingPresent : 1;
   } m;
   H245RedundancyEncodingMethod redundancyEncodingMethod;
   struct H245DataType *secondaryEncoding;
   H245RedundancyEncoding_rtpRedundancyEncoding rtpRedundancyEncoding;
   DList extElem1;
} H245RedundancyEncoding;

EXTERN int asn1PE_H245RedundancyEncoding (OOCTXT* pctxt, H245RedundancyEncoding* pvalue);

EXTERN int asn1PD_H245RedundancyEncoding (OOCTXT* pctxt, H245RedundancyEncoding* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplePayloadStreamElement                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplePayloadStreamElement {
   struct {
      unsigned payloadTypePresent : 1;
   } m;
   struct H245DataType *dataType;
   ASN1UINT8 payloadType;
   DList extElem1;
} H245MultiplePayloadStreamElement;

EXTERN int asn1PE_H245MultiplePayloadStreamElement (OOCTXT* pctxt, H245MultiplePayloadStreamElement* pvalue);

EXTERN int asn1PD_H245MultiplePayloadStreamElement (OOCTXT* pctxt, H245MultiplePayloadStreamElement* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245MultiplePayloadStreamElement                    */
/*                                                            */
/**************************************************************/

/* List of H245MultiplePayloadStreamElement */
typedef DList H245_SeqOfH245MultiplePayloadStreamElement;

EXTERN int asn1PE_H245_SeqOfH245MultiplePayloadStreamElement (OOCTXT* pctxt, H245_SeqOfH245MultiplePayloadStreamElement value);

EXTERN int asn1PD_H245_SeqOfH245MultiplePayloadStreamElement (OOCTXT* pctxt, H245_SeqOfH245MultiplePayloadStreamElement* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplePayloadStream                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplePayloadStream {
   H245_SeqOfH245MultiplePayloadStreamElement elements;
   DList extElem1;
} H245MultiplePayloadStream;

EXTERN int asn1PE_H245MultiplePayloadStream (OOCTXT* pctxt, H245MultiplePayloadStream* pvalue);

EXTERN int asn1PD_H245MultiplePayloadStream (OOCTXT* pctxt, H245MultiplePayloadStream* pvalue);

/**************************************************************/
/*                                                            */
/*  FECData_rfc2733_mode_separateStream_differentPort         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECData_rfc2733_mode_separateStream_differentPort {
   struct {
      unsigned protectedPayloadTypePresent : 1;
   } m;
   ASN1UINT8 protectedSessionID;
   ASN1UINT8 protectedPayloadType;
   DList extElem1;
} H245FECData_rfc2733_mode_separateStream_differentPort;

EXTERN int asn1PE_H245FECData_rfc2733_mode_separateStream_differentPort (OOCTXT* pctxt, H245FECData_rfc2733_mode_separateStream_differentPort* pvalue);

EXTERN int asn1PD_H245FECData_rfc2733_mode_separateStream_differentPort (OOCTXT* pctxt, H245FECData_rfc2733_mode_separateStream_differentPort* pvalue);

/**************************************************************/
/*                                                            */
/*  FECData_rfc2733_mode_separateStream_samePort              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECData_rfc2733_mode_separateStream_samePort {
   ASN1UINT8 protectedPayloadType;
   DList extElem1;
} H245FECData_rfc2733_mode_separateStream_samePort;

EXTERN int asn1PE_H245FECData_rfc2733_mode_separateStream_samePort (OOCTXT* pctxt, H245FECData_rfc2733_mode_separateStream_samePort* pvalue);

EXTERN int asn1PD_H245FECData_rfc2733_mode_separateStream_samePort (OOCTXT* pctxt, H245FECData_rfc2733_mode_separateStream_samePort* pvalue);

/**************************************************************/
/*                                                            */
/*  FECData_rfc2733_mode_separateStream                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECData_rfc2733_mode_separateStream_differentPort 1
#define T_H245FECData_rfc2733_mode_separateStream_samePort 2
#define T_H245FECData_rfc2733_mode_separateStream_extElem1 3

typedef struct EXTERN H245FECData_rfc2733_mode_separateStream {
   int t;
   union {
      /* t = 1 */
      H245FECData_rfc2733_mode_separateStream_differentPort *differentPort;
      /* t = 2 */
      H245FECData_rfc2733_mode_separateStream_samePort *samePort;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245FECData_rfc2733_mode_separateStream;

EXTERN int asn1PE_H245FECData_rfc2733_mode_separateStream (OOCTXT* pctxt, H245FECData_rfc2733_mode_separateStream* pvalue);

EXTERN int asn1PD_H245FECData_rfc2733_mode_separateStream (OOCTXT* pctxt, H245FECData_rfc2733_mode_separateStream* pvalue);

/**************************************************************/
/*                                                            */
/*  FECData_rfc2733_mode                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECData_rfc2733_mode_redundancyEncoding 1
#define T_H245FECData_rfc2733_mode_separateStream 2
#define T_H245FECData_rfc2733_mode_extElem1 3

typedef struct EXTERN H245FECData_rfc2733_mode {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245FECData_rfc2733_mode_separateStream *separateStream;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245FECData_rfc2733_mode;

EXTERN int asn1PE_H245FECData_rfc2733_mode (OOCTXT* pctxt, H245FECData_rfc2733_mode* pvalue);

EXTERN int asn1PD_H245FECData_rfc2733_mode (OOCTXT* pctxt, H245FECData_rfc2733_mode* pvalue);

/**************************************************************/
/*                                                            */
/*  FECData_rfc2733                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECData_rfc2733 {
   H245FECData_rfc2733_mode mode;
   DList extElem1;
} H245FECData_rfc2733;

EXTERN int asn1PE_H245FECData_rfc2733 (OOCTXT* pctxt, H245FECData_rfc2733* pvalue);

EXTERN int asn1PD_H245FECData_rfc2733 (OOCTXT* pctxt, H245FECData_rfc2733* pvalue);

/**************************************************************/
/*                                                            */
/*  FECData                                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECData_rfc2733           1

typedef struct EXTERN H245FECData {
   int t;
   union {
      /* t = 1 */
      H245FECData_rfc2733 *rfc2733;
   } u;
} H245FECData;

EXTERN int asn1PE_H245FECData (OOCTXT* pctxt, H245FECData* pvalue);

EXTERN int asn1PD_H245FECData (OOCTXT* pctxt, H245FECData* pvalue);

/**************************************************************/
/*                                                            */
/*  H235Media_mediaType                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H235Media_mediaType_nonStandard 1
#define T_H245H235Media_mediaType_videoData 2
#define T_H245H235Media_mediaType_audioData 3
#define T_H245H235Media_mediaType_data  4
#define T_H245H235Media_mediaType_redundancyEncoding 5
#define T_H245H235Media_mediaType_multiplePayloadStream 6
#define T_H245H235Media_mediaType_fec   7
#define T_H245H235Media_mediaType_extElem1 8

typedef struct EXTERN H245H235Media_mediaType {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245VideoCapability *videoData;
      /* t = 3 */
      H245AudioCapability *audioData;
      /* t = 4 */
      H245DataApplicationCapability *data;
      /* t = 5 */
      H245RedundancyEncoding *redundancyEncoding;
      /* t = 6 */
      H245MultiplePayloadStream *multiplePayloadStream;
      /* t = 7 */
      H245FECData *fec;
      /* t = 8 */
      ASN1OpenType *extElem1;
   } u;
} H245H235Media_mediaType;

EXTERN int asn1PE_H245H235Media_mediaType (OOCTXT* pctxt, H245H235Media_mediaType* pvalue);

EXTERN int asn1PD_H245H235Media_mediaType (OOCTXT* pctxt, H245H235Media_mediaType* pvalue);

/**************************************************************/
/*                                                            */
/*  H235Media                                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H235Media {
   H245EncryptionAuthenticationAndIntegrity encryptionAuthenticationAndIntegrity;
   H245H235Media_mediaType mediaType;
   DList extElem1;
} H245H235Media;

EXTERN int asn1PE_H245H235Media (OOCTXT* pctxt, H245H235Media* pvalue);

EXTERN int asn1PD_H245H235Media (OOCTXT* pctxt, H245H235Media* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexedStreamParameter                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexedStreamParameter {
   H245MultiplexFormat multiplexFormat;
   ASN1BOOL controlOnMuxStream;
   DList extElem1;
} H245MultiplexedStreamParameter;

EXTERN int asn1PE_H245MultiplexedStreamParameter (OOCTXT* pctxt, H245MultiplexedStreamParameter* pvalue);

EXTERN int asn1PD_H245MultiplexedStreamParameter (OOCTXT* pctxt, H245MultiplexedStreamParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  DataType                                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DataType_nonStandard      1
#define T_H245DataType_nullData         2
#define T_H245DataType_videoData        3
#define T_H245DataType_audioData        4
#define T_H245DataType_data             5
#define T_H245DataType_encryptionData   6
#define T_H245DataType_h235Control      7
#define T_H245DataType_h235Media        8
#define T_H245DataType_multiplexedStream 9
#define T_H245DataType_redundancyEncoding 10
#define T_H245DataType_multiplePayloadStream 11
#define T_H245DataType_fec              12
#define T_H245DataType_extElem1         13

typedef struct EXTERN H245DataType {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      H245VideoCapability *videoData;
      /* t = 4 */
      H245AudioCapability *audioData;
      /* t = 5 */
      H245DataApplicationCapability *data;
      /* t = 6 */
      H245EncryptionMode *encryptionData;
      /* t = 7 */
      H245NonStandardParameter *h235Control;
      /* t = 8 */
      H245H235Media *h235Media;
      /* t = 9 */
      H245MultiplexedStreamParameter *multiplexedStream;
      /* t = 10 */
      H245RedundancyEncoding *redundancyEncoding;
      /* t = 11 */
      H245MultiplePayloadStream *multiplePayloadStream;
      /* t = 12 */
      H245FECData *fec;
      /* t = 13 */
      ASN1OpenType *extElem1;
   } u;
} H245DataType;

EXTERN int asn1PE_H245DataType (OOCTXT* pctxt, H245DataType* pvalue);

EXTERN int asn1PD_H245DataType (OOCTXT* pctxt, H245DataType* pvalue);

/**************************************************************/
/*                                                            */
/*  H222LogicalChannelParameters                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H222LogicalChannelParameters {
   struct {
      unsigned pcr_pidPresent : 1;
      unsigned programDescriptorsPresent : 1;
      unsigned streamDescriptorsPresent : 1;
   } m;
   ASN1USINT resourceID;
   ASN1USINT subChannelID;
   ASN1USINT pcr_pid;
   ASN1DynOctStr programDescriptors;
   ASN1DynOctStr streamDescriptors;
   DList extElem1;
} H245H222LogicalChannelParameters;

EXTERN int asn1PE_H245H222LogicalChannelParameters (OOCTXT* pctxt, H245H222LogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245H222LogicalChannelParameters (OOCTXT* pctxt, H245H222LogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  H223LogicalChannelParameters_adaptationLayerType_al3      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223LogicalChannelParameters_adaptationLayerType_al3 {
   ASN1UINT8 controlFieldOctets;
   ASN1UINT sendBufferSize;
} H245H223LogicalChannelParameters_adaptationLayerType_al3;

EXTERN int asn1PE_H245H223LogicalChannelParameters_adaptationLayerType_al3 (OOCTXT* pctxt, H245H223LogicalChannelParameters_adaptationLayerType_al3* pvalue);

EXTERN int asn1PD_H245H223LogicalChannelParameters_adaptationLayerType_al3 (OOCTXT* pctxt, H245H223LogicalChannelParameters_adaptationLayerType_al3* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL1MParameters_transferMode                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL1MParameters_transferMode_framed 1
#define T_H245H223AL1MParameters_transferMode_unframed 2
#define T_H245H223AL1MParameters_transferMode_extElem1 3

typedef struct EXTERN H245H223AL1MParameters_transferMode {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL1MParameters_transferMode;

EXTERN int asn1PE_H245H223AL1MParameters_transferMode (OOCTXT* pctxt, H245H223AL1MParameters_transferMode* pvalue);

EXTERN int asn1PD_H245H223AL1MParameters_transferMode (OOCTXT* pctxt, H245H223AL1MParameters_transferMode* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL1MParameters_headerFEC                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL1MParameters_headerFEC_sebch16_7 1
#define T_H245H223AL1MParameters_headerFEC_golay24_12 2
#define T_H245H223AL1MParameters_headerFEC_extElem1 3

typedef struct EXTERN H245H223AL1MParameters_headerFEC {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL1MParameters_headerFEC;

EXTERN int asn1PE_H245H223AL1MParameters_headerFEC (OOCTXT* pctxt, H245H223AL1MParameters_headerFEC* pvalue);

EXTERN int asn1PD_H245H223AL1MParameters_headerFEC (OOCTXT* pctxt, H245H223AL1MParameters_headerFEC* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL1MParameters_crcLength                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL1MParameters_crcLength_crc4bit 1
#define T_H245H223AL1MParameters_crcLength_crc12bit 2
#define T_H245H223AL1MParameters_crcLength_crc20bit 3
#define T_H245H223AL1MParameters_crcLength_crc28bit 4
#define T_H245H223AL1MParameters_crcLength_crc8bit 5
#define T_H245H223AL1MParameters_crcLength_crc16bit 6
#define T_H245H223AL1MParameters_crcLength_crc32bit 7
#define T_H245H223AL1MParameters_crcLength_crcNotUsed 8
#define T_H245H223AL1MParameters_crcLength_extElem1 9

typedef struct EXTERN H245H223AL1MParameters_crcLength {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL1MParameters_crcLength;

EXTERN int asn1PE_H245H223AL1MParameters_crcLength (OOCTXT* pctxt, H245H223AL1MParameters_crcLength* pvalue);

EXTERN int asn1PD_H245H223AL1MParameters_crcLength (OOCTXT* pctxt, H245H223AL1MParameters_crcLength* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AnnexCArqParameters_numberOfRetransmissions           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AnnexCArqParameters_numberOfRetransmissions_finite 1
#define T_H245H223AnnexCArqParameters_numberOfRetransmissions_infinite 2
#define T_H245H223AnnexCArqParameters_numberOfRetransmissions_extElem1 3

typedef struct EXTERN H245H223AnnexCArqParameters_numberOfRetransmissions {
   int t;
   union {
      /* t = 1 */
      ASN1UINT8 finite;
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AnnexCArqParameters_numberOfRetransmissions;

EXTERN int asn1PE_H245H223AnnexCArqParameters_numberOfRetransmissions (OOCTXT* pctxt, H245H223AnnexCArqParameters_numberOfRetransmissions* pvalue);

EXTERN int asn1PD_H245H223AnnexCArqParameters_numberOfRetransmissions (OOCTXT* pctxt, H245H223AnnexCArqParameters_numberOfRetransmissions* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AnnexCArqParameters                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223AnnexCArqParameters {
   H245H223AnnexCArqParameters_numberOfRetransmissions numberOfRetransmissions;
   ASN1UINT sendBufferSize;
   DList extElem1;
} H245H223AnnexCArqParameters;

EXTERN int asn1PE_H245H223AnnexCArqParameters (OOCTXT* pctxt, H245H223AnnexCArqParameters* pvalue);

EXTERN int asn1PD_H245H223AnnexCArqParameters (OOCTXT* pctxt, H245H223AnnexCArqParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL1MParameters_arqType                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL1MParameters_arqType_noArq 1
#define T_H245H223AL1MParameters_arqType_typeIArq 2
#define T_H245H223AL1MParameters_arqType_typeIIArq 3
#define T_H245H223AL1MParameters_arqType_extElem1 4

typedef struct EXTERN H245H223AL1MParameters_arqType {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245H223AnnexCArqParameters *typeIArq;
      /* t = 3 */
      H245H223AnnexCArqParameters *typeIIArq;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL1MParameters_arqType;

EXTERN int asn1PE_H245H223AL1MParameters_arqType (OOCTXT* pctxt, H245H223AL1MParameters_arqType* pvalue);

EXTERN int asn1PD_H245H223AL1MParameters_arqType (OOCTXT* pctxt, H245H223AL1MParameters_arqType* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL1MParameters                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223AL1MParameters {
   struct {
      unsigned rsCodeCorrectionPresent : 1;
   } m;
   H245H223AL1MParameters_transferMode transferMode;
   H245H223AL1MParameters_headerFEC headerFEC;
   H245H223AL1MParameters_crcLength crcLength;
   ASN1UINT8 rcpcCodeRate;
   H245H223AL1MParameters_arqType arqType;
   ASN1BOOL alpduInterleaving;
   ASN1BOOL alsduSplitting;
   ASN1UINT8 rsCodeCorrection;
   DList extElem1;
} H245H223AL1MParameters;

EXTERN int asn1PE_H245H223AL1MParameters (OOCTXT* pctxt, H245H223AL1MParameters* pvalue);

EXTERN int asn1PD_H245H223AL1MParameters (OOCTXT* pctxt, H245H223AL1MParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL2MParameters_headerFEC                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL2MParameters_headerFEC_sebch16_5 1
#define T_H245H223AL2MParameters_headerFEC_golay24_12 2
#define T_H245H223AL2MParameters_headerFEC_extElem1 3

typedef struct EXTERN H245H223AL2MParameters_headerFEC {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL2MParameters_headerFEC;

EXTERN int asn1PE_H245H223AL2MParameters_headerFEC (OOCTXT* pctxt, H245H223AL2MParameters_headerFEC* pvalue);

EXTERN int asn1PD_H245H223AL2MParameters_headerFEC (OOCTXT* pctxt, H245H223AL2MParameters_headerFEC* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL2MParameters                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223AL2MParameters {
   H245H223AL2MParameters_headerFEC headerFEC;
   ASN1BOOL alpduInterleaving;
   DList extElem1;
} H245H223AL2MParameters;

EXTERN int asn1PE_H245H223AL2MParameters (OOCTXT* pctxt, H245H223AL2MParameters* pvalue);

EXTERN int asn1PD_H245H223AL2MParameters (OOCTXT* pctxt, H245H223AL2MParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL3MParameters_headerFormat                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL3MParameters_headerFormat_sebch16_7 1
#define T_H245H223AL3MParameters_headerFormat_golay24_12 2
#define T_H245H223AL3MParameters_headerFormat_extElem1 3

typedef struct EXTERN H245H223AL3MParameters_headerFormat {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL3MParameters_headerFormat;

EXTERN int asn1PE_H245H223AL3MParameters_headerFormat (OOCTXT* pctxt, H245H223AL3MParameters_headerFormat* pvalue);

EXTERN int asn1PD_H245H223AL3MParameters_headerFormat (OOCTXT* pctxt, H245H223AL3MParameters_headerFormat* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL3MParameters_crcLength                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL3MParameters_crcLength_crc4bit 1
#define T_H245H223AL3MParameters_crcLength_crc12bit 2
#define T_H245H223AL3MParameters_crcLength_crc20bit 3
#define T_H245H223AL3MParameters_crcLength_crc28bit 4
#define T_H245H223AL3MParameters_crcLength_crc8bit 5
#define T_H245H223AL3MParameters_crcLength_crc16bit 6
#define T_H245H223AL3MParameters_crcLength_crc32bit 7
#define T_H245H223AL3MParameters_crcLength_crcNotUsed 8
#define T_H245H223AL3MParameters_crcLength_extElem1 9

typedef struct EXTERN H245H223AL3MParameters_crcLength {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL3MParameters_crcLength;

EXTERN int asn1PE_H245H223AL3MParameters_crcLength (OOCTXT* pctxt, H245H223AL3MParameters_crcLength* pvalue);

EXTERN int asn1PD_H245H223AL3MParameters_crcLength (OOCTXT* pctxt, H245H223AL3MParameters_crcLength* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL3MParameters_arqType                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223AL3MParameters_arqType_noArq 1
#define T_H245H223AL3MParameters_arqType_typeIArq 2
#define T_H245H223AL3MParameters_arqType_typeIIArq 3
#define T_H245H223AL3MParameters_arqType_extElem1 4

typedef struct EXTERN H245H223AL3MParameters_arqType {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245H223AnnexCArqParameters *typeIArq;
      /* t = 3 */
      H245H223AnnexCArqParameters *typeIIArq;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245H223AL3MParameters_arqType;

EXTERN int asn1PE_H245H223AL3MParameters_arqType (OOCTXT* pctxt, H245H223AL3MParameters_arqType* pvalue);

EXTERN int asn1PD_H245H223AL3MParameters_arqType (OOCTXT* pctxt, H245H223AL3MParameters_arqType* pvalue);

/**************************************************************/
/*                                                            */
/*  H223AL3MParameters                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223AL3MParameters {
   struct {
      unsigned rsCodeCorrectionPresent : 1;
   } m;
   H245H223AL3MParameters_headerFormat headerFormat;
   H245H223AL3MParameters_crcLength crcLength;
   ASN1UINT8 rcpcCodeRate;
   H245H223AL3MParameters_arqType arqType;
   ASN1BOOL alpduInterleaving;
   ASN1UINT8 rsCodeCorrection;
   DList extElem1;
} H245H223AL3MParameters;

EXTERN int asn1PE_H245H223AL3MParameters (OOCTXT* pctxt, H245H223AL3MParameters* pvalue);

EXTERN int asn1PD_H245H223AL3MParameters (OOCTXT* pctxt, H245H223AL3MParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  H223LogicalChannelParameters_adaptationLayerType          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223LogicalChannelParameters_adaptationLayerType_nonStandard 1
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al1Framed 2
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al1NotFramed 3
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al2WithoutSequenceNumbers 4
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al2WithSequenceNumbers 5
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al3 6
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al1M 7
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al2M 8
#define T_H245H223LogicalChannelParameters_adaptationLayerType_al3M 9
#define T_H245H223LogicalChannelParameters_adaptationLayerType_extElem1 10

typedef struct EXTERN H245H223LogicalChannelParameters_adaptationLayerType {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      H245H223LogicalChannelParameters_adaptationLayerType_al3 *al3;
      /* t = 7 */
      H245H223AL1MParameters *al1M;
      /* t = 8 */
      H245H223AL2MParameters *al2M;
      /* t = 9 */
      H245H223AL3MParameters *al3M;
      /* t = 10 */
      ASN1OpenType *extElem1;
   } u;
} H245H223LogicalChannelParameters_adaptationLayerType;

EXTERN int asn1PE_H245H223LogicalChannelParameters_adaptationLayerType (OOCTXT* pctxt, H245H223LogicalChannelParameters_adaptationLayerType* pvalue);

EXTERN int asn1PD_H245H223LogicalChannelParameters_adaptationLayerType (OOCTXT* pctxt, H245H223LogicalChannelParameters_adaptationLayerType* pvalue);

/**************************************************************/
/*                                                            */
/*  H223LogicalChannelParameters                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223LogicalChannelParameters {
   H245H223LogicalChannelParameters_adaptationLayerType adaptationLayerType;
   ASN1BOOL segmentableFlag;
   DList extElem1;
} H245H223LogicalChannelParameters;

EXTERN int asn1PE_H245H223LogicalChannelParameters (OOCTXT* pctxt, H245H223LogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245H223LogicalChannelParameters (OOCTXT* pctxt, H245H223LogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  CRCLength                                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CRCLength_crc8bit         1
#define T_H245CRCLength_crc16bit        2
#define T_H245CRCLength_crc32bit        3
#define T_H245CRCLength_extElem1        4

typedef struct EXTERN H245CRCLength {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245CRCLength;

EXTERN int asn1PE_H245CRCLength (OOCTXT* pctxt, H245CRCLength* pvalue);

EXTERN int asn1PD_H245CRCLength (OOCTXT* pctxt, H245CRCLength* pvalue);

/**************************************************************/
/*                                                            */
/*  V76HDLCParameters                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V76HDLCParameters {
   H245CRCLength crcLength;
   ASN1USINT n401;
   ASN1BOOL loopbackTestProcedure;
   DList extElem1;
} H245V76HDLCParameters;

EXTERN int asn1PE_H245V76HDLCParameters (OOCTXT* pctxt, H245V76HDLCParameters* pvalue);

EXTERN int asn1PD_H245V76HDLCParameters (OOCTXT* pctxt, H245V76HDLCParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  V76LogicalChannelParameters_suspendResume                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245V76LogicalChannelParameters_suspendResume_noSuspendResume 1
#define T_H245V76LogicalChannelParameters_suspendResume_suspendResumewAddress 2
#define T_H245V76LogicalChannelParameters_suspendResume_suspendResumewoAddress 3
#define T_H245V76LogicalChannelParameters_suspendResume_extElem1 4

typedef struct EXTERN H245V76LogicalChannelParameters_suspendResume {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245V76LogicalChannelParameters_suspendResume;

EXTERN int asn1PE_H245V76LogicalChannelParameters_suspendResume (OOCTXT* pctxt, H245V76LogicalChannelParameters_suspendResume* pvalue);

EXTERN int asn1PD_H245V76LogicalChannelParameters_suspendResume (OOCTXT* pctxt, H245V76LogicalChannelParameters_suspendResume* pvalue);

/**************************************************************/
/*                                                            */
/*  V76LogicalChannelParameters_mode_eRM_recovery             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245V76LogicalChannelParameters_mode_eRM_recovery_rej 1
#define T_H245V76LogicalChannelParameters_mode_eRM_recovery_sREJ 2
#define T_H245V76LogicalChannelParameters_mode_eRM_recovery_mSREJ 3
#define T_H245V76LogicalChannelParameters_mode_eRM_recovery_extElem1 4

typedef struct EXTERN H245V76LogicalChannelParameters_mode_eRM_recovery {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245V76LogicalChannelParameters_mode_eRM_recovery;

EXTERN int asn1PE_H245V76LogicalChannelParameters_mode_eRM_recovery (OOCTXT* pctxt, H245V76LogicalChannelParameters_mode_eRM_recovery* pvalue);

EXTERN int asn1PD_H245V76LogicalChannelParameters_mode_eRM_recovery (OOCTXT* pctxt, H245V76LogicalChannelParameters_mode_eRM_recovery* pvalue);

/**************************************************************/
/*                                                            */
/*  V76LogicalChannelParameters_mode_eRM                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V76LogicalChannelParameters_mode_eRM {
   ASN1UINT8 windowSize;
   H245V76LogicalChannelParameters_mode_eRM_recovery recovery;
   DList extElem1;
} H245V76LogicalChannelParameters_mode_eRM;

EXTERN int asn1PE_H245V76LogicalChannelParameters_mode_eRM (OOCTXT* pctxt, H245V76LogicalChannelParameters_mode_eRM* pvalue);

EXTERN int asn1PD_H245V76LogicalChannelParameters_mode_eRM (OOCTXT* pctxt, H245V76LogicalChannelParameters_mode_eRM* pvalue);

/**************************************************************/
/*                                                            */
/*  V76LogicalChannelParameters_mode                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245V76LogicalChannelParameters_mode_eRM 1
#define T_H245V76LogicalChannelParameters_mode_uNERM 2
#define T_H245V76LogicalChannelParameters_mode_extElem1 3

typedef struct EXTERN H245V76LogicalChannelParameters_mode {
   int t;
   union {
      /* t = 1 */
      H245V76LogicalChannelParameters_mode_eRM *eRM;
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245V76LogicalChannelParameters_mode;

EXTERN int asn1PE_H245V76LogicalChannelParameters_mode (OOCTXT* pctxt, H245V76LogicalChannelParameters_mode* pvalue);

EXTERN int asn1PD_H245V76LogicalChannelParameters_mode (OOCTXT* pctxt, H245V76LogicalChannelParameters_mode* pvalue);

/**************************************************************/
/*                                                            */
/*  V75Parameters                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V75Parameters {
   ASN1BOOL audioHeaderPresent;
   DList extElem1;
} H245V75Parameters;

EXTERN int asn1PE_H245V75Parameters (OOCTXT* pctxt, H245V75Parameters* pvalue);

EXTERN int asn1PD_H245V75Parameters (OOCTXT* pctxt, H245V75Parameters* pvalue);

/**************************************************************/
/*                                                            */
/*  V76LogicalChannelParameters                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245V76LogicalChannelParameters {
   H245V76HDLCParameters hdlcParameters;
   H245V76LogicalChannelParameters_suspendResume suspendResume;
   ASN1BOOL uIH;
   H245V76LogicalChannelParameters_mode mode;
   H245V75Parameters v75Parameters;
   DList extElem1;
} H245V76LogicalChannelParameters;

EXTERN int asn1PE_H245V76LogicalChannelParameters (OOCTXT* pctxt, H245V76LogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245V76LogicalChannelParameters (OOCTXT* pctxt, H245V76LogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPAddress                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPAddress {
   H245UnicastAddress_iPAddress_network network;
   ASN1USINT tsapIdentifier;
   DList extElem1;
} H245UnicastAddress_iPAddress;

EXTERN int asn1PE_H245UnicastAddress_iPAddress (OOCTXT* pctxt, H245UnicastAddress_iPAddress* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPAddress (OOCTXT* pctxt, H245UnicastAddress_iPAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPXAddress                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPXAddress {
   H245UnicastAddress_iPXAddress_node node;
   H245UnicastAddress_iPXAddress_netnum netnum;
   H245UnicastAddress_iPXAddress_tsapIdentifier tsapIdentifier;
   DList extElem1;
} H245UnicastAddress_iPXAddress;

EXTERN int asn1PE_H245UnicastAddress_iPXAddress (OOCTXT* pctxt, H245UnicastAddress_iPXAddress* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPXAddress (OOCTXT* pctxt, H245UnicastAddress_iPXAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iP6Address                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iP6Address {
   H245UnicastAddress_iP6Address_network network;
   ASN1USINT tsapIdentifier;
   DList extElem1;
} H245UnicastAddress_iP6Address;

EXTERN int asn1PE_H245UnicastAddress_iP6Address (OOCTXT* pctxt, H245UnicastAddress_iP6Address* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iP6Address (OOCTXT* pctxt, H245UnicastAddress_iP6Address* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPSourceRouteAddress_routing               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245UnicastAddress_iPSourceRouteAddress_routing_strict 1
#define T_H245UnicastAddress_iPSourceRouteAddress_routing_loose 2

typedef struct EXTERN H245UnicastAddress_iPSourceRouteAddress_routing {
   int t;
} H245UnicastAddress_iPSourceRouteAddress_routing;

EXTERN int asn1PE_H245UnicastAddress_iPSourceRouteAddress_routing (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress_routing* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPSourceRouteAddress_routing (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress_routing* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245UnicastAddress_iPSourceRouteAddress_route_elem  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element {
   ASN1UINT n;
   H245UnicastAddress_iPSourceRouteAddress_route_element *elem;
} H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element;

EXTERN int asn1PE_H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element (OOCTXT* pctxt, H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element* pvalue);

EXTERN int asn1PD_H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element (OOCTXT* pctxt, H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress_iPSourceRouteAddress                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UnicastAddress_iPSourceRouteAddress {
   H245UnicastAddress_iPSourceRouteAddress_routing routing;
   H245UnicastAddress_iPSourceRouteAddress_network network;
   ASN1USINT tsapIdentifier;
   H245_SeqOfH245UnicastAddress_iPSourceRouteAddress_route_element route;
   DList extElem1;
} H245UnicastAddress_iPSourceRouteAddress;

EXTERN int asn1PE_H245UnicastAddress_iPSourceRouteAddress (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress* pvalue);

EXTERN int asn1PD_H245UnicastAddress_iPSourceRouteAddress (OOCTXT* pctxt, H245UnicastAddress_iPSourceRouteAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  UnicastAddress                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245UnicastAddress_iPAddress  1
#define T_H245UnicastAddress_iPXAddress 2
#define T_H245UnicastAddress_iP6Address 3
#define T_H245UnicastAddress_netBios    4
#define T_H245UnicastAddress_iPSourceRouteAddress 5
#define T_H245UnicastAddress_nsap       6
#define T_H245UnicastAddress_nonStandardAddress 7
#define T_H245UnicastAddress_extElem1   8

typedef struct EXTERN H245UnicastAddress {
   int t;
   union {
      /* t = 1 */
      H245UnicastAddress_iPAddress *iPAddress;
      /* t = 2 */
      H245UnicastAddress_iPXAddress *iPXAddress;
      /* t = 3 */
      H245UnicastAddress_iP6Address *iP6Address;
      /* t = 4 */
      H245UnicastAddress_netBios *netBios;
      /* t = 5 */
      H245UnicastAddress_iPSourceRouteAddress *iPSourceRouteAddress;
      /* t = 6 */
      H245UnicastAddress_nsap *nsap;
      /* t = 7 */
      H245NonStandardParameter *nonStandardAddress;
      /* t = 8 */
      ASN1OpenType *extElem1;
   } u;
} H245UnicastAddress;

EXTERN int asn1PE_H245UnicastAddress (OOCTXT* pctxt, H245UnicastAddress* pvalue);

EXTERN int asn1PD_H245UnicastAddress (OOCTXT* pctxt, H245UnicastAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  MulticastAddress_iPAddress                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MulticastAddress_iPAddress {
   H245MulticastAddress_iPAddress_network network;
   ASN1USINT tsapIdentifier;
   DList extElem1;
} H245MulticastAddress_iPAddress;

EXTERN int asn1PE_H245MulticastAddress_iPAddress (OOCTXT* pctxt, H245MulticastAddress_iPAddress* pvalue);

EXTERN int asn1PD_H245MulticastAddress_iPAddress (OOCTXT* pctxt, H245MulticastAddress_iPAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  MulticastAddress_iP6Address                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MulticastAddress_iP6Address {
   H245MulticastAddress_iP6Address_network network;
   ASN1USINT tsapIdentifier;
   DList extElem1;
} H245MulticastAddress_iP6Address;

EXTERN int asn1PE_H245MulticastAddress_iP6Address (OOCTXT* pctxt, H245MulticastAddress_iP6Address* pvalue);

EXTERN int asn1PD_H245MulticastAddress_iP6Address (OOCTXT* pctxt, H245MulticastAddress_iP6Address* pvalue);

/**************************************************************/
/*                                                            */
/*  MulticastAddress                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MulticastAddress_iPAddress 1
#define T_H245MulticastAddress_iP6Address 2
#define T_H245MulticastAddress_nsap     3
#define T_H245MulticastAddress_nonStandardAddress 4
#define T_H245MulticastAddress_extElem1 5

typedef struct EXTERN H245MulticastAddress {
   int t;
   union {
      /* t = 1 */
      H245MulticastAddress_iPAddress *iPAddress;
      /* t = 2 */
      H245MulticastAddress_iP6Address *iP6Address;
      /* t = 3 */
      H245MulticastAddress_nsap *nsap;
      /* t = 4 */
      H245NonStandardParameter *nonStandardAddress;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245MulticastAddress;

EXTERN int asn1PE_H245MulticastAddress (OOCTXT* pctxt, H245MulticastAddress* pvalue);

EXTERN int asn1PD_H245MulticastAddress (OOCTXT* pctxt, H245MulticastAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245TransportAddress_unicastAddress 1
#define T_H245TransportAddress_multicastAddress 2
#define T_H245TransportAddress_extElem1 3

typedef struct EXTERN H245TransportAddress {
   int t;
   union {
      /* t = 1 */
      H245UnicastAddress *unicastAddress;
      /* t = 2 */
      H245MulticastAddress *multicastAddress;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245TransportAddress;

EXTERN int asn1PE_H245TransportAddress (OOCTXT* pctxt, H245TransportAddress* pvalue);

EXTERN int asn1PD_H245TransportAddress (OOCTXT* pctxt, H245TransportAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalLabel                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalLabel {
   H245McuNumber mcuNumber;
   H245TerminalNumber terminalNumber;
   DList extElem1;
} H245TerminalLabel;

EXTERN int asn1PE_H245TerminalLabel (OOCTXT* pctxt, H245TerminalLabel* pvalue);

EXTERN int asn1PD_H245TerminalLabel (OOCTXT* pctxt, H245TerminalLabel* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250LogicalChannelParameters_mediaPacketization          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H2250LogicalChannelParameters_mediaPacketization_h261aVideoPacketization 1
#define T_H245H2250LogicalChannelParameters_mediaPacketization_rtpPayloadType 2
#define T_H245H2250LogicalChannelParameters_mediaPacketization_extElem1 3

typedef struct EXTERN H245H2250LogicalChannelParameters_mediaPacketization {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245RTPPayloadType *rtpPayloadType;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H2250LogicalChannelParameters_mediaPacketization;

EXTERN int asn1PE_H245H2250LogicalChannelParameters_mediaPacketization (OOCTXT* pctxt, H245H2250LogicalChannelParameters_mediaPacketization* pvalue);

EXTERN int asn1PD_H245H2250LogicalChannelParameters_mediaPacketization (OOCTXT* pctxt, H245H2250LogicalChannelParameters_mediaPacketization* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250LogicalChannelParameters                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H2250LogicalChannelParameters {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned associatedSessionIDPresent : 1;
      unsigned mediaChannelPresent : 1;
      unsigned mediaGuaranteedDeliveryPresent : 1;
      unsigned mediaControlChannelPresent : 1;
      unsigned mediaControlGuaranteedDeliveryPresent : 1;
      unsigned silenceSuppressionPresent : 1;
      unsigned destinationPresent : 1;
      unsigned dynamicRTPPayloadTypePresent : 1;
      unsigned mediaPacketizationPresent : 1;
      unsigned transportCapabilityPresent : 1;
      unsigned redundancyEncodingPresent : 1;
      unsigned sourcePresent : 1;
   } m;
   H245_SeqOfH245NonStandardParameter nonStandard;
   ASN1UINT8 sessionID;
   ASN1UINT8 associatedSessionID;
   H245TransportAddress mediaChannel;
   ASN1BOOL mediaGuaranteedDelivery;
   H245TransportAddress mediaControlChannel;
   ASN1BOOL mediaControlGuaranteedDelivery;
   ASN1BOOL silenceSuppression;
   H245TerminalLabel destination;
   ASN1UINT8 dynamicRTPPayloadType;
   H245H2250LogicalChannelParameters_mediaPacketization mediaPacketization;
   H245TransportCapability transportCapability;
   H245RedundancyEncoding redundancyEncoding;
   H245TerminalLabel source;
   DList extElem1;
} H245H2250LogicalChannelParameters;

EXTERN int asn1PE_H245H2250LogicalChannelParameters (OOCTXT* pctxt, H245H2250LogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245H2250LogicalChannelParameters (OOCTXT* pctxt, H245H2250LogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannel_forwardLogicalChannelParameters_multi  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters_h222LogicalChannelParameters 1
#define T_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters_h223LogicalChannelParameters 2
#define T_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters_v76LogicalChannelParameters 3
#define T_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters_h2250LogicalChannelParameters 4
#define T_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters_none 5
#define T_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters_extElem1 6

typedef struct EXTERN H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters {
   int t;
   union {
      /* t = 1 */
      H245H222LogicalChannelParameters *h222LogicalChannelParameters;
      /* t = 2 */
      H245H223LogicalChannelParameters *h223LogicalChannelParameters;
      /* t = 3 */
      H245V76LogicalChannelParameters *v76LogicalChannelParameters;
      /* t = 4 */
      H245H2250LogicalChannelParameters *h2250LogicalChannelParameters;
      /* t = 5 */
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters;

EXTERN int asn1PE_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters (OOCTXT* pctxt, H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters (OOCTXT* pctxt, H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannel_forwardLogicalChannelParameters        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannel_forwardLogicalChannelParameters {
   struct {
      unsigned portNumberPresent : 1;
      unsigned forwardLogicalChannelDependencyPresent : 1;
      unsigned replacementForPresent : 1;
   } m;
   ASN1USINT portNumber;
   H245DataType dataType;
   H245OpenLogicalChannel_forwardLogicalChannelParameters_multiplexParameters multiplexParameters;
   H245LogicalChannelNumber forwardLogicalChannelDependency;
   H245LogicalChannelNumber replacementFor;
   DList extElem1;
} H245OpenLogicalChannel_forwardLogicalChannelParameters;

EXTERN int asn1PE_H245OpenLogicalChannel_forwardLogicalChannelParameters (OOCTXT* pctxt, H245OpenLogicalChannel_forwardLogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannel_forwardLogicalChannelParameters (OOCTXT* pctxt, H245OpenLogicalChannel_forwardLogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannel_reverseLogicalChannelParameters_multi  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters_h223LogicalChannelParameters 1
#define T_H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters_v76LogicalChannelParameters 2
#define T_H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters_h2250LogicalChannelParameters 3
#define T_H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters_extElem1 4

typedef struct EXTERN H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters {
   int t;
   union {
      /* t = 1 */
      H245H223LogicalChannelParameters *h223LogicalChannelParameters;
      /* t = 2 */
      H245V76LogicalChannelParameters *v76LogicalChannelParameters;
      /* t = 3 */
      H245H2250LogicalChannelParameters *h2250LogicalChannelParameters;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters;

EXTERN int asn1PE_H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters (OOCTXT* pctxt, H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters (OOCTXT* pctxt, H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannel_reverseLogicalChannelParameters        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannel_reverseLogicalChannelParameters {
   struct {
      unsigned multiplexParametersPresent : 1;
      unsigned reverseLogicalChannelDependencyPresent : 1;
      unsigned replacementForPresent : 1;
   } m;
   H245DataType dataType;
   H245OpenLogicalChannel_reverseLogicalChannelParameters_multiplexParameters multiplexParameters;
   H245LogicalChannelNumber reverseLogicalChannelDependency;
   H245LogicalChannelNumber replacementFor;
   DList extElem1;
} H245OpenLogicalChannel_reverseLogicalChannelParameters;

EXTERN int asn1PE_H245OpenLogicalChannel_reverseLogicalChannelParameters (OOCTXT* pctxt, H245OpenLogicalChannel_reverseLogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannel_reverseLogicalChannelParameters (OOCTXT* pctxt, H245OpenLogicalChannel_reverseLogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  NetworkAccessParameters_distribution                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NetworkAccessParameters_distribution_unicast 1
#define T_H245NetworkAccessParameters_distribution_multicast 2
#define T_H245NetworkAccessParameters_distribution_extElem1 3

typedef struct EXTERN H245NetworkAccessParameters_distribution {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245NetworkAccessParameters_distribution;

EXTERN int asn1PE_H245NetworkAccessParameters_distribution (OOCTXT* pctxt, H245NetworkAccessParameters_distribution* pvalue);

EXTERN int asn1PD_H245NetworkAccessParameters_distribution (OOCTXT* pctxt, H245NetworkAccessParameters_distribution* pvalue);

/**************************************************************/
/*                                                            */
/*  NetworkAccessParameters_networkAddress                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NetworkAccessParameters_networkAddress_q2931Address 1
#define T_H245NetworkAccessParameters_networkAddress_e164Address 2
#define T_H245NetworkAccessParameters_networkAddress_localAreaAddress 3
#define T_H245NetworkAccessParameters_networkAddress_extElem1 4

typedef struct EXTERN H245NetworkAccessParameters_networkAddress {
   int t;
   union {
      /* t = 1 */
      H245Q2931Address *q2931Address;
      /* t = 2 */
      ASN1IA5String e164Address;
      /* t = 3 */
      H245TransportAddress *localAreaAddress;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NetworkAccessParameters_networkAddress;

EXTERN int asn1PE_H245NetworkAccessParameters_networkAddress (OOCTXT* pctxt, H245NetworkAccessParameters_networkAddress* pvalue);

EXTERN int asn1PD_H245NetworkAccessParameters_networkAddress (OOCTXT* pctxt, H245NetworkAccessParameters_networkAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  NetworkAccessParameters_t120SetupProcedure                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NetworkAccessParameters_t120SetupProcedure_originateCall 1
#define T_H245NetworkAccessParameters_t120SetupProcedure_waitForCall 2
#define T_H245NetworkAccessParameters_t120SetupProcedure_issueQuery 3
#define T_H245NetworkAccessParameters_t120SetupProcedure_extElem1 4

typedef struct EXTERN H245NetworkAccessParameters_t120SetupProcedure {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NetworkAccessParameters_t120SetupProcedure;

EXTERN int asn1PE_H245NetworkAccessParameters_t120SetupProcedure (OOCTXT* pctxt, H245NetworkAccessParameters_t120SetupProcedure* pvalue);

EXTERN int asn1PD_H245NetworkAccessParameters_t120SetupProcedure (OOCTXT* pctxt, H245NetworkAccessParameters_t120SetupProcedure* pvalue);

/**************************************************************/
/*                                                            */
/*  NetworkAccessParameters                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NetworkAccessParameters {
   struct {
      unsigned distributionPresent : 1;
      unsigned externalReferencePresent : 1;
      unsigned t120SetupProcedurePresent : 1;
   } m;
   H245NetworkAccessParameters_distribution distribution;
   H245NetworkAccessParameters_networkAddress networkAddress;
   ASN1BOOL associateConference;
   H245NetworkAccessParameters_externalReference externalReference;
   H245NetworkAccessParameters_t120SetupProcedure t120SetupProcedure;
   DList extElem1;
} H245NetworkAccessParameters;

EXTERN int asn1PE_H245NetworkAccessParameters (OOCTXT* pctxt, H245NetworkAccessParameters* pvalue);

EXTERN int asn1PD_H245NetworkAccessParameters (OOCTXT* pctxt, H245NetworkAccessParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  EscrowData                                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EscrowData {
   ASN1OBJID escrowID;
   H245EscrowData_escrowValue escrowValue;
   DList extElem1;
} H245EscrowData;

EXTERN int asn1PE_H245EscrowData (OOCTXT* pctxt, H245EscrowData* pvalue);

EXTERN int asn1PD_H245EscrowData (OOCTXT* pctxt, H245EscrowData* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionSync_escrowentry                                */
/*                                                            */
/**************************************************************/

/* List of H245EscrowData */
typedef DList H245EncryptionSync_escrowentry;

EXTERN int asn1PE_H245EncryptionSync_escrowentry (OOCTXT* pctxt, H245EncryptionSync_escrowentry value);

EXTERN int asn1PD_H245EncryptionSync_escrowentry (OOCTXT* pctxt, H245EncryptionSync_escrowentry* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionSync                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EncryptionSync {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned escrowentryPresent : 1;
   } m;
   H245NonStandardParameter nonStandard;
   ASN1UINT8 synchFlag;
   ASN1DynOctStr h235Key;
   H245EncryptionSync_escrowentry escrowentry;
   DList extElem1;
} H245EncryptionSync;

EXTERN int asn1PE_H245EncryptionSync (OOCTXT* pctxt, H245EncryptionSync* pvalue);

EXTERN int asn1PD_H245EncryptionSync (OOCTXT* pctxt, H245EncryptionSync* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannel                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannel {
   struct {
      unsigned reverseLogicalChannelParametersPresent : 1;
      unsigned separateStackPresent : 1;
      unsigned encryptionSyncPresent : 1;
   } m;
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   H245OpenLogicalChannel_forwardLogicalChannelParameters forwardLogicalChannelParameters;
   H245OpenLogicalChannel_reverseLogicalChannelParameters reverseLogicalChannelParameters;
   H245NetworkAccessParameters separateStack;
   H245EncryptionSync encryptionSync;
   DList extElem1;
} H245OpenLogicalChannel;

EXTERN int asn1PE_H245OpenLogicalChannel (OOCTXT* pctxt, H245OpenLogicalChannel* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannel (OOCTXT* pctxt, H245OpenLogicalChannel* pvalue);

/**************************************************************/
/*                                                            */
/*  CloseLogicalChannel_source                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CloseLogicalChannel_source_user 1
#define T_H245CloseLogicalChannel_source_lcse 2

typedef struct EXTERN H245CloseLogicalChannel_source {
   int t;
} H245CloseLogicalChannel_source;

EXTERN int asn1PE_H245CloseLogicalChannel_source (OOCTXT* pctxt, H245CloseLogicalChannel_source* pvalue);

EXTERN int asn1PD_H245CloseLogicalChannel_source (OOCTXT* pctxt, H245CloseLogicalChannel_source* pvalue);

/**************************************************************/
/*                                                            */
/*  CloseLogicalChannel_reason                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CloseLogicalChannel_reason_unknown 1
#define T_H245CloseLogicalChannel_reason_reopen 2
#define T_H245CloseLogicalChannel_reason_reservationFailure 3
#define T_H245CloseLogicalChannel_reason_extElem1 4

typedef struct EXTERN H245CloseLogicalChannel_reason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245CloseLogicalChannel_reason;

EXTERN int asn1PE_H245CloseLogicalChannel_reason (OOCTXT* pctxt, H245CloseLogicalChannel_reason* pvalue);

EXTERN int asn1PD_H245CloseLogicalChannel_reason (OOCTXT* pctxt, H245CloseLogicalChannel_reason* pvalue);

/**************************************************************/
/*                                                            */
/*  CloseLogicalChannel                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CloseLogicalChannel {
   struct {
      unsigned reasonPresent : 1;
   } m;
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   H245CloseLogicalChannel_source source;
   H245CloseLogicalChannel_reason reason;
   DList extElem1;
} H245CloseLogicalChannel;

EXTERN int asn1PE_H245CloseLogicalChannel (OOCTXT* pctxt, H245CloseLogicalChannel* pvalue);

EXTERN int asn1PD_H245CloseLogicalChannel (OOCTXT* pctxt, H245CloseLogicalChannel* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestChannelClose_reason                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RequestChannelClose_reason_unknown 1
#define T_H245RequestChannelClose_reason_normal 2
#define T_H245RequestChannelClose_reason_reopen 3
#define T_H245RequestChannelClose_reason_reservationFailure 4
#define T_H245RequestChannelClose_reason_extElem1 5

typedef struct EXTERN H245RequestChannelClose_reason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245RequestChannelClose_reason;

EXTERN int asn1PE_H245RequestChannelClose_reason (OOCTXT* pctxt, H245RequestChannelClose_reason* pvalue);

EXTERN int asn1PD_H245RequestChannelClose_reason (OOCTXT* pctxt, H245RequestChannelClose_reason* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestChannelClose                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestChannelClose {
   struct {
      unsigned qosCapabilityPresent : 1;
      unsigned reasonPresent : 1;
   } m;
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   H245QOSCapability qosCapability;
   H245RequestChannelClose_reason reason;
   DList extElem1;
} H245RequestChannelClose;

EXTERN int asn1PE_H245RequestChannelClose (OOCTXT* pctxt, H245RequestChannelClose* pvalue);

EXTERN int asn1PD_H245RequestChannelClose (OOCTXT* pctxt, H245RequestChannelClose* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexElement_type_subElementList                      */
/*                                                            */
/**************************************************************/

/* List of H245MultiplexElement */
typedef DList H245MultiplexElement_type_subElementList;

EXTERN int asn1PE_H245MultiplexElement_type_subElementList (OOCTXT* pctxt, H245MultiplexElement_type_subElementList value);

EXTERN int asn1PD_H245MultiplexElement_type_subElementList (OOCTXT* pctxt, H245MultiplexElement_type_subElementList* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexElement_type                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultiplexElement_type_logicalChannelNumber 1
#define T_H245MultiplexElement_type_subElementList 2

typedef struct EXTERN H245MultiplexElement_type {
   int t;
   union {
      /* t = 1 */
      ASN1USINT logicalChannelNumber;
      /* t = 2 */
      H245MultiplexElement_type_subElementList *subElementList;
   } u;
} H245MultiplexElement_type;

EXTERN int asn1PE_H245MultiplexElement_type (OOCTXT* pctxt, H245MultiplexElement_type* pvalue);

EXTERN int asn1PD_H245MultiplexElement_type (OOCTXT* pctxt, H245MultiplexElement_type* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexElement_repeatCount                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultiplexElement_repeatCount_finite 1
#define T_H245MultiplexElement_repeatCount_untilClosingFlag 2

typedef struct EXTERN H245MultiplexElement_repeatCount {
   int t;
   union {
      /* t = 1 */
      ASN1USINT finite;
      /* t = 2 */
   } u;
} H245MultiplexElement_repeatCount;

EXTERN int asn1PE_H245MultiplexElement_repeatCount (OOCTXT* pctxt, H245MultiplexElement_repeatCount* pvalue);

EXTERN int asn1PD_H245MultiplexElement_repeatCount (OOCTXT* pctxt, H245MultiplexElement_repeatCount* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexElement                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexElement {
   H245MultiplexElement_type type;
   H245MultiplexElement_repeatCount repeatCount;
} H245MultiplexElement;

EXTERN int asn1PE_H245MultiplexElement (OOCTXT* pctxt, H245MultiplexElement* pvalue);

EXTERN int asn1PD_H245MultiplexElement (OOCTXT* pctxt, H245MultiplexElement* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntryDescriptor_elementList                      */
/*                                                            */
/**************************************************************/

/* List of H245MultiplexElement */
typedef DList H245MultiplexEntryDescriptor_elementList;

EXTERN int asn1PE_H245MultiplexEntryDescriptor_elementList (OOCTXT* pctxt, H245MultiplexEntryDescriptor_elementList value);

EXTERN int asn1PD_H245MultiplexEntryDescriptor_elementList (OOCTXT* pctxt, H245MultiplexEntryDescriptor_elementList* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntryDescriptor                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntryDescriptor {
   struct {
      unsigned elementListPresent : 1;
   } m;
   H245MultiplexTableEntryNumber multiplexTableEntryNumber;
   H245MultiplexEntryDescriptor_elementList elementList;
} H245MultiplexEntryDescriptor;

EXTERN int asn1PE_H245MultiplexEntryDescriptor (OOCTXT* pctxt, H245MultiplexEntryDescriptor* pvalue);

EXTERN int asn1PD_H245MultiplexEntryDescriptor (OOCTXT* pctxt, H245MultiplexEntryDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySend_multiplexEntryDescriptors              */
/*                                                            */
/**************************************************************/

/* List of H245MultiplexEntryDescriptor */
typedef DList H245MultiplexEntrySend_multiplexEntryDescriptors;

EXTERN int asn1PE_H245MultiplexEntrySend_multiplexEntryDescriptors (OOCTXT* pctxt, H245MultiplexEntrySend_multiplexEntryDescriptors value);

EXTERN int asn1PD_H245MultiplexEntrySend_multiplexEntryDescriptors (OOCTXT* pctxt, H245MultiplexEntrySend_multiplexEntryDescriptors* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySend                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntrySend {
   H245SequenceNumber sequenceNumber;
   H245MultiplexEntrySend_multiplexEntryDescriptors multiplexEntryDescriptors;
   DList extElem1;
} H245MultiplexEntrySend;

EXTERN int asn1PE_H245MultiplexEntrySend (OOCTXT* pctxt, H245MultiplexEntrySend* pvalue);

EXTERN int asn1PD_H245MultiplexEntrySend (OOCTXT* pctxt, H245MultiplexEntrySend* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntry_entryNumbers                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntry_entryNumbers {
   ASN1UINT n;
   H245MultiplexTableEntryNumber elem[15];
} H245RequestMultiplexEntry_entryNumbers;

EXTERN int asn1PE_H245RequestMultiplexEntry_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntry_entryNumbers* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntry_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntry_entryNumbers* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntry                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntry {
   H245RequestMultiplexEntry_entryNumbers entryNumbers;
   DList extElem1;
} H245RequestMultiplexEntry;

EXTERN int asn1PE_H245RequestMultiplexEntry (OOCTXT* pctxt, H245RequestMultiplexEntry* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntry (OOCTXT* pctxt, H245RequestMultiplexEntry* pvalue);

/**************************************************************/
/*                                                            */
/*  H261VideoMode_resolution                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H261VideoMode_resolution_qcif 1
#define T_H245H261VideoMode_resolution_cif 2

typedef struct EXTERN H245H261VideoMode_resolution {
   int t;
} H245H261VideoMode_resolution;

EXTERN int asn1PE_H245H261VideoMode_resolution (OOCTXT* pctxt, H245H261VideoMode_resolution* pvalue);

EXTERN int asn1PD_H245H261VideoMode_resolution (OOCTXT* pctxt, H245H261VideoMode_resolution* pvalue);

/**************************************************************/
/*                                                            */
/*  H261VideoMode                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H261VideoMode {
   H245H261VideoMode_resolution resolution;
   ASN1USINT bitRate;
   ASN1BOOL stillImageTransmission;
   DList extElem1;
} H245H261VideoMode;

EXTERN int asn1PE_H245H261VideoMode (OOCTXT* pctxt, H245H261VideoMode* pvalue);

EXTERN int asn1PD_H245H261VideoMode (OOCTXT* pctxt, H245H261VideoMode* pvalue);

/**************************************************************/
/*                                                            */
/*  H262VideoMode_profileAndLevel                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_SPatML 1
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_MPatLL 2
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_MPatML 3
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_MPatH_14 4
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_MPatHL 5
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_SNRatLL 6
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_SNRatML 7
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_SpatialatH_14 8
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_HPatML 9
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_HPatH_14 10
#define T_H245H262VideoMode_profileAndLevel_profileAndLevel_HPatHL 11
#define T_H245H262VideoMode_profileAndLevel_extElem1 12

typedef struct EXTERN H245H262VideoMode_profileAndLevel {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      /* t = 12 */
      ASN1OpenType *extElem1;
   } u;
} H245H262VideoMode_profileAndLevel;

EXTERN int asn1PE_H245H262VideoMode_profileAndLevel (OOCTXT* pctxt, H245H262VideoMode_profileAndLevel* pvalue);

EXTERN int asn1PD_H245H262VideoMode_profileAndLevel (OOCTXT* pctxt, H245H262VideoMode_profileAndLevel* pvalue);

/**************************************************************/
/*                                                            */
/*  H262VideoMode                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H262VideoMode {
   struct {
      unsigned videoBitRatePresent : 1;
      unsigned vbvBufferSizePresent : 1;
      unsigned samplesPerLinePresent : 1;
      unsigned linesPerFramePresent : 1;
      unsigned framesPerSecondPresent : 1;
      unsigned luminanceSampleRatePresent : 1;
   } m;
   H245H262VideoMode_profileAndLevel profileAndLevel;
   ASN1UINT videoBitRate;
   ASN1UINT vbvBufferSize;
   ASN1USINT samplesPerLine;
   ASN1USINT linesPerFrame;
   ASN1UINT8 framesPerSecond;
   ASN1UINT luminanceSampleRate;
   DList extElem1;
} H245H262VideoMode;

EXTERN int asn1PE_H245H262VideoMode (OOCTXT* pctxt, H245H262VideoMode* pvalue);

EXTERN int asn1PD_H245H262VideoMode (OOCTXT* pctxt, H245H262VideoMode* pvalue);

/**************************************************************/
/*                                                            */
/*  H263VideoMode_resolution                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H263VideoMode_resolution_sqcif 1
#define T_H245H263VideoMode_resolution_qcif 2
#define T_H245H263VideoMode_resolution_cif 3
#define T_H245H263VideoMode_resolution_cif4 4
#define T_H245H263VideoMode_resolution_cif16 5
#define T_H245H263VideoMode_resolution_custom 6
#define T_H245H263VideoMode_resolution_extElem1 7

typedef struct EXTERN H245H263VideoMode_resolution {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H245H263VideoMode_resolution;

EXTERN int asn1PE_H245H263VideoMode_resolution (OOCTXT* pctxt, H245H263VideoMode_resolution* pvalue);

EXTERN int asn1PD_H245H263VideoMode_resolution (OOCTXT* pctxt, H245H263VideoMode_resolution* pvalue);

/**************************************************************/
/*                                                            */
/*  H263VideoMode                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H263VideoMode {
   struct {
      unsigned errorCompensationPresent : 1;
      unsigned enhancementLayerInfoPresent : 1;
      unsigned h263OptionsPresent : 1;
   } m;
   H245H263VideoMode_resolution resolution;
   ASN1USINT bitRate;
   ASN1BOOL unrestrictedVector;
   ASN1BOOL arithmeticCoding;
   ASN1BOOL advancedPrediction;
   ASN1BOOL pbFrames;
   ASN1BOOL errorCompensation;
   H245EnhancementLayerInfo enhancementLayerInfo;
   H245H263Options h263Options;
   DList extElem1;
} H245H263VideoMode;

EXTERN int asn1PE_H245H263VideoMode (OOCTXT* pctxt, H245H263VideoMode* pvalue);

EXTERN int asn1PD_H245H263VideoMode (OOCTXT* pctxt, H245H263VideoMode* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172VideoMode                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IS11172VideoMode {
   struct {
      unsigned videoBitRatePresent : 1;
      unsigned vbvBufferSizePresent : 1;
      unsigned samplesPerLinePresent : 1;
      unsigned linesPerFramePresent : 1;
      unsigned pictureRatePresent : 1;
      unsigned luminanceSampleRatePresent : 1;
   } m;
   ASN1BOOL constrainedBitstream;
   ASN1UINT videoBitRate;
   ASN1UINT vbvBufferSize;
   ASN1USINT samplesPerLine;
   ASN1USINT linesPerFrame;
   ASN1UINT8 pictureRate;
   ASN1UINT luminanceSampleRate;
   DList extElem1;
} H245IS11172VideoMode;

EXTERN int asn1PE_H245IS11172VideoMode (OOCTXT* pctxt, H245IS11172VideoMode* pvalue);

EXTERN int asn1PD_H245IS11172VideoMode (OOCTXT* pctxt, H245IS11172VideoMode* pvalue);

/**************************************************************/
/*                                                            */
/*  VideoMode                                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245VideoMode_nonStandard     1
#define T_H245VideoMode_h261VideoMode   2
#define T_H245VideoMode_h262VideoMode   3
#define T_H245VideoMode_h263VideoMode   4
#define T_H245VideoMode_is11172VideoMode 5
#define T_H245VideoMode_genericVideoMode 6
#define T_H245VideoMode_extElem1        7

typedef struct EXTERN H245VideoMode {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245H261VideoMode *h261VideoMode;
      /* t = 3 */
      H245H262VideoMode *h262VideoMode;
      /* t = 4 */
      H245H263VideoMode *h263VideoMode;
      /* t = 5 */
      H245IS11172VideoMode *is11172VideoMode;
      /* t = 6 */
      H245GenericCapability *genericVideoMode;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H245VideoMode;

EXTERN int asn1PE_H245VideoMode (OOCTXT* pctxt, H245VideoMode* pvalue);

EXTERN int asn1PD_H245VideoMode (OOCTXT* pctxt, H245VideoMode* pvalue);

/**************************************************************/
/*                                                            */
/*  AudioMode_g7231                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245AudioMode_g7231_noSilenceSuppressionLowRate 1
#define T_H245AudioMode_g7231_noSilenceSuppressionHighRate 2
#define T_H245AudioMode_g7231_silenceSuppressionLowRate 3
#define T_H245AudioMode_g7231_silenceSuppressionHighRate 4

typedef struct EXTERN H245AudioMode_g7231 {
   int t;
} H245AudioMode_g7231;

EXTERN int asn1PE_H245AudioMode_g7231 (OOCTXT* pctxt, H245AudioMode_g7231* pvalue);

EXTERN int asn1PD_H245AudioMode_g7231 (OOCTXT* pctxt, H245AudioMode_g7231* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172AudioMode_audioLayer                               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IS11172AudioMode_audioLayer_audioLayer1 1
#define T_H245IS11172AudioMode_audioLayer_audioLayer2 2
#define T_H245IS11172AudioMode_audioLayer_audioLayer3 3

typedef struct EXTERN H245IS11172AudioMode_audioLayer {
   int t;
} H245IS11172AudioMode_audioLayer;

EXTERN int asn1PE_H245IS11172AudioMode_audioLayer (OOCTXT* pctxt, H245IS11172AudioMode_audioLayer* pvalue);

EXTERN int asn1PD_H245IS11172AudioMode_audioLayer (OOCTXT* pctxt, H245IS11172AudioMode_audioLayer* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172AudioMode_audioSampling                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IS11172AudioMode_audioSampling_audioSampling32k 1
#define T_H245IS11172AudioMode_audioSampling_audioSampling44k1 2
#define T_H245IS11172AudioMode_audioSampling_audioSampling48k 3

typedef struct EXTERN H245IS11172AudioMode_audioSampling {
   int t;
} H245IS11172AudioMode_audioSampling;

EXTERN int asn1PE_H245IS11172AudioMode_audioSampling (OOCTXT* pctxt, H245IS11172AudioMode_audioSampling* pvalue);

EXTERN int asn1PD_H245IS11172AudioMode_audioSampling (OOCTXT* pctxt, H245IS11172AudioMode_audioSampling* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172AudioMode_multichannelType                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IS11172AudioMode_multichannelType_singleChannel 1
#define T_H245IS11172AudioMode_multichannelType_twoChannelStereo 2
#define T_H245IS11172AudioMode_multichannelType_twoChannelDual 3

typedef struct EXTERN H245IS11172AudioMode_multichannelType {
   int t;
} H245IS11172AudioMode_multichannelType;

EXTERN int asn1PE_H245IS11172AudioMode_multichannelType (OOCTXT* pctxt, H245IS11172AudioMode_multichannelType* pvalue);

EXTERN int asn1PD_H245IS11172AudioMode_multichannelType (OOCTXT* pctxt, H245IS11172AudioMode_multichannelType* pvalue);

/**************************************************************/
/*                                                            */
/*  IS11172AudioMode                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IS11172AudioMode {
   H245IS11172AudioMode_audioLayer audioLayer;
   H245IS11172AudioMode_audioSampling audioSampling;
   H245IS11172AudioMode_multichannelType multichannelType;
   ASN1USINT bitRate;
   DList extElem1;
} H245IS11172AudioMode;

EXTERN int asn1PE_H245IS11172AudioMode (OOCTXT* pctxt, H245IS11172AudioMode* pvalue);

EXTERN int asn1PD_H245IS11172AudioMode (OOCTXT* pctxt, H245IS11172AudioMode* pvalue);

/**************************************************************/
/*                                                            */
/*  IS13818AudioMode_audioLayer                               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IS13818AudioMode_audioLayer_audioLayer1 1
#define T_H245IS13818AudioMode_audioLayer_audioLayer2 2
#define T_H245IS13818AudioMode_audioLayer_audioLayer3 3

typedef struct EXTERN H245IS13818AudioMode_audioLayer {
   int t;
} H245IS13818AudioMode_audioLayer;

EXTERN int asn1PE_H245IS13818AudioMode_audioLayer (OOCTXT* pctxt, H245IS13818AudioMode_audioLayer* pvalue);

EXTERN int asn1PD_H245IS13818AudioMode_audioLayer (OOCTXT* pctxt, H245IS13818AudioMode_audioLayer* pvalue);

/**************************************************************/
/*                                                            */
/*  IS13818AudioMode_audioSampling                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IS13818AudioMode_audioSampling_audioSampling16k 1
#define T_H245IS13818AudioMode_audioSampling_audioSampling22k05 2
#define T_H245IS13818AudioMode_audioSampling_audioSampling24k 3
#define T_H245IS13818AudioMode_audioSampling_audioSampling32k 4
#define T_H245IS13818AudioMode_audioSampling_audioSampling44k1 5
#define T_H245IS13818AudioMode_audioSampling_audioSampling48k 6

typedef struct EXTERN H245IS13818AudioMode_audioSampling {
   int t;
} H245IS13818AudioMode_audioSampling;

EXTERN int asn1PE_H245IS13818AudioMode_audioSampling (OOCTXT* pctxt, H245IS13818AudioMode_audioSampling* pvalue);

EXTERN int asn1PD_H245IS13818AudioMode_audioSampling (OOCTXT* pctxt, H245IS13818AudioMode_audioSampling* pvalue);

/**************************************************************/
/*                                                            */
/*  IS13818AudioMode_multichannelType                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IS13818AudioMode_multichannelType_singleChannel 1
#define T_H245IS13818AudioMode_multichannelType_twoChannelStereo 2
#define T_H245IS13818AudioMode_multichannelType_twoChannelDual 3
#define T_H245IS13818AudioMode_multichannelType_threeChannels2_1 4
#define T_H245IS13818AudioMode_multichannelType_threeChannels3_0 5
#define T_H245IS13818AudioMode_multichannelType_fourChannels2_0_2_0 6
#define T_H245IS13818AudioMode_multichannelType_fourChannels2_2 7
#define T_H245IS13818AudioMode_multichannelType_fourChannels3_1 8
#define T_H245IS13818AudioMode_multichannelType_fiveChannels3_0_2_0 9
#define T_H245IS13818AudioMode_multichannelType_fiveChannels3_2 10

typedef struct EXTERN H245IS13818AudioMode_multichannelType {
   int t;
} H245IS13818AudioMode_multichannelType;

EXTERN int asn1PE_H245IS13818AudioMode_multichannelType (OOCTXT* pctxt, H245IS13818AudioMode_multichannelType* pvalue);

EXTERN int asn1PD_H245IS13818AudioMode_multichannelType (OOCTXT* pctxt, H245IS13818AudioMode_multichannelType* pvalue);

/**************************************************************/
/*                                                            */
/*  IS13818AudioMode                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245IS13818AudioMode {
   H245IS13818AudioMode_audioLayer audioLayer;
   H245IS13818AudioMode_audioSampling audioSampling;
   H245IS13818AudioMode_multichannelType multichannelType;
   ASN1BOOL lowFrequencyEnhancement;
   ASN1BOOL multilingual;
   ASN1USINT bitRate;
   DList extElem1;
} H245IS13818AudioMode;

EXTERN int asn1PE_H245IS13818AudioMode (OOCTXT* pctxt, H245IS13818AudioMode* pvalue);

EXTERN int asn1PD_H245IS13818AudioMode (OOCTXT* pctxt, H245IS13818AudioMode* pvalue);

/**************************************************************/
/*                                                            */
/*  G7231AnnexCMode_g723AnnexCAudioMode                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245G7231AnnexCMode_g723AnnexCAudioMode {
   ASN1UINT8 highRateMode0;
   ASN1UINT8 highRateMode1;
   ASN1UINT8 lowRateMode0;
   ASN1UINT8 lowRateMode1;
   ASN1UINT8 sidMode0;
   ASN1UINT8 sidMode1;
   DList extElem1;
} H245G7231AnnexCMode_g723AnnexCAudioMode;

EXTERN int asn1PE_H245G7231AnnexCMode_g723AnnexCAudioMode (OOCTXT* pctxt, H245G7231AnnexCMode_g723AnnexCAudioMode* pvalue);

EXTERN int asn1PD_H245G7231AnnexCMode_g723AnnexCAudioMode (OOCTXT* pctxt, H245G7231AnnexCMode_g723AnnexCAudioMode* pvalue);

/**************************************************************/
/*                                                            */
/*  G7231AnnexCMode                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245G7231AnnexCMode {
   ASN1USINT maxAl_sduAudioFrames;
   ASN1BOOL silenceSuppression;
   H245G7231AnnexCMode_g723AnnexCAudioMode g723AnnexCAudioMode;
   DList extElem1;
} H245G7231AnnexCMode;

EXTERN int asn1PE_H245G7231AnnexCMode (OOCTXT* pctxt, H245G7231AnnexCMode* pvalue);

EXTERN int asn1PD_H245G7231AnnexCMode (OOCTXT* pctxt, H245G7231AnnexCMode* pvalue);

/**************************************************************/
/*                                                            */
/*  VBDMode                                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VBDMode {
   struct H245AudioMode *type;
   DList extElem1;
} H245VBDMode;

EXTERN int asn1PE_H245VBDMode (OOCTXT* pctxt, H245VBDMode* pvalue);

EXTERN int asn1PD_H245VBDMode (OOCTXT* pctxt, H245VBDMode* pvalue);

/**************************************************************/
/*                                                            */
/*  AudioMode                                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245AudioMode_nonStandard     1
#define T_H245AudioMode_g711Alaw64k     2
#define T_H245AudioMode_g711Alaw56k     3
#define T_H245AudioMode_g711Ulaw64k     4
#define T_H245AudioMode_g711Ulaw56k     5
#define T_H245AudioMode_g722_64k        6
#define T_H245AudioMode_g722_56k        7
#define T_H245AudioMode_g722_48k        8
#define T_H245AudioMode_g728            9
#define T_H245AudioMode_g729            10
#define T_H245AudioMode_g729AnnexA      11
#define T_H245AudioMode_g7231           12
#define T_H245AudioMode_is11172AudioMode 13
#define T_H245AudioMode_is13818AudioMode 14
#define T_H245AudioMode_g729wAnnexB     15
#define T_H245AudioMode_g729AnnexAwAnnexB 16
#define T_H245AudioMode_g7231AnnexCMode 17
#define T_H245AudioMode_gsmFullRate     18
#define T_H245AudioMode_gsmHalfRate     19
#define T_H245AudioMode_gsmEnhancedFullRate 20
#define T_H245AudioMode_genericAudioMode 21
#define T_H245AudioMode_g729Extensions  22
#define T_H245AudioMode_vbd             23
#define T_H245AudioMode_extElem1        24

typedef struct EXTERN H245AudioMode {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      /* t = 12 */
      H245AudioMode_g7231 *g7231;
      /* t = 13 */
      H245IS11172AudioMode *is11172AudioMode;
      /* t = 14 */
      H245IS13818AudioMode *is13818AudioMode;
      /* t = 15 */
      ASN1USINT g729wAnnexB;
      /* t = 16 */
      ASN1USINT g729AnnexAwAnnexB;
      /* t = 17 */
      H245G7231AnnexCMode *g7231AnnexCMode;
      /* t = 18 */
      H245GSMAudioCapability *gsmFullRate;
      /* t = 19 */
      H245GSMAudioCapability *gsmHalfRate;
      /* t = 20 */
      H245GSMAudioCapability *gsmEnhancedFullRate;
      /* t = 21 */
      H245GenericCapability *genericAudioMode;
      /* t = 22 */
      H245G729Extensions *g729Extensions;
      /* t = 23 */
      H245VBDMode *vbd;
      /* t = 24 */
      ASN1OpenType *extElem1;
   } u;
} H245AudioMode;

EXTERN int asn1PE_H245AudioMode (OOCTXT* pctxt, H245AudioMode* pvalue);

EXTERN int asn1PD_H245AudioMode (OOCTXT* pctxt, H245AudioMode* pvalue);

/**************************************************************/
/*                                                            */
/*  DataMode_application_nlpid                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataMode_application_nlpid {
   H245DataProtocolCapability nlpidProtocol;
   ASN1DynOctStr nlpidData;
} H245DataMode_application_nlpid;

EXTERN int asn1PE_H245DataMode_application_nlpid (OOCTXT* pctxt, H245DataMode_application_nlpid* pvalue);

EXTERN int asn1PD_H245DataMode_application_nlpid (OOCTXT* pctxt, H245DataMode_application_nlpid* pvalue);

/**************************************************************/
/*                                                            */
/*  DataMode_application_t38fax                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataMode_application_t38fax {
   H245DataProtocolCapability t38FaxProtocol;
   H245T38FaxProfile t38FaxProfile;
} H245DataMode_application_t38fax;

EXTERN int asn1PE_H245DataMode_application_t38fax (OOCTXT* pctxt, H245DataMode_application_t38fax* pvalue);

EXTERN int asn1PD_H245DataMode_application_t38fax (OOCTXT* pctxt, H245DataMode_application_t38fax* pvalue);

/**************************************************************/
/*                                                            */
/*  DataMode_application                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DataMode_application_nonStandard 1
#define T_H245DataMode_application_t120 2
#define T_H245DataMode_application_dsm_cc 3
#define T_H245DataMode_application_userData 4
#define T_H245DataMode_application_t84  5
#define T_H245DataMode_application_t434 6
#define T_H245DataMode_application_h224 7
#define T_H245DataMode_application_nlpid 8
#define T_H245DataMode_application_dsvdControl 9
#define T_H245DataMode_application_h222DataPartitioning 10
#define T_H245DataMode_application_t30fax 11
#define T_H245DataMode_application_t140 12
#define T_H245DataMode_application_t38fax 13
#define T_H245DataMode_application_genericDataMode 14
#define T_H245DataMode_application_extElem1 15

typedef struct EXTERN H245DataMode_application {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245DataProtocolCapability *t120;
      /* t = 3 */
      H245DataProtocolCapability *dsm_cc;
      /* t = 4 */
      H245DataProtocolCapability *userData;
      /* t = 5 */
      H245DataProtocolCapability *t84;
      /* t = 6 */
      H245DataProtocolCapability *t434;
      /* t = 7 */
      H245DataProtocolCapability *h224;
      /* t = 8 */
      H245DataMode_application_nlpid *nlpid;
      /* t = 9 */
      /* t = 10 */
      H245DataProtocolCapability *h222DataPartitioning;
      /* t = 11 */
      H245DataProtocolCapability *t30fax;
      /* t = 12 */
      H245DataProtocolCapability *t140;
      /* t = 13 */
      H245DataMode_application_t38fax *t38fax;
      /* t = 14 */
      H245GenericCapability *genericDataMode;
      /* t = 15 */
      ASN1OpenType *extElem1;
   } u;
} H245DataMode_application;

EXTERN int asn1PE_H245DataMode_application (OOCTXT* pctxt, H245DataMode_application* pvalue);

EXTERN int asn1PD_H245DataMode_application (OOCTXT* pctxt, H245DataMode_application* pvalue);

/**************************************************************/
/*                                                            */
/*  DataMode                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DataMode {
   H245DataMode_application application;
   ASN1UINT bitRate;
   DList extElem1;
} H245DataMode;

EXTERN int asn1PE_H245DataMode (OOCTXT* pctxt, H245DataMode* pvalue);

EXTERN int asn1PD_H245DataMode (OOCTXT* pctxt, H245DataMode* pvalue);

/**************************************************************/
/*                                                            */
/*  H235Mode_mediaMode                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H235Mode_mediaMode_nonStandard 1
#define T_H245H235Mode_mediaMode_videoMode 2
#define T_H245H235Mode_mediaMode_audioMode 3
#define T_H245H235Mode_mediaMode_dataMode 4
#define T_H245H235Mode_mediaMode_extElem1 5

typedef struct EXTERN H245H235Mode_mediaMode {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245VideoMode *videoMode;
      /* t = 3 */
      H245AudioMode *audioMode;
      /* t = 4 */
      H245DataMode *dataMode;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245H235Mode_mediaMode;

EXTERN int asn1PE_H245H235Mode_mediaMode (OOCTXT* pctxt, H245H235Mode_mediaMode* pvalue);

EXTERN int asn1PD_H245H235Mode_mediaMode (OOCTXT* pctxt, H245H235Mode_mediaMode* pvalue);

/**************************************************************/
/*                                                            */
/*  H235Mode                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H235Mode {
   H245EncryptionAuthenticationAndIntegrity encryptionAuthenticationAndIntegrity;
   H245H235Mode_mediaMode mediaMode;
   DList extElem1;
} H245H235Mode;

EXTERN int asn1PE_H245H235Mode (OOCTXT* pctxt, H245H235Mode* pvalue);

EXTERN int asn1PD_H245H235Mode (OOCTXT* pctxt, H245H235Mode* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingDTModeElement_type                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RedundancyEncodingDTModeElement_type_nonStandard 1
#define T_H245RedundancyEncodingDTModeElement_type_videoMode 2
#define T_H245RedundancyEncodingDTModeElement_type_audioMode 3
#define T_H245RedundancyEncodingDTModeElement_type_dataMode 4
#define T_H245RedundancyEncodingDTModeElement_type_encryptionMode 5
#define T_H245RedundancyEncodingDTModeElement_type_h235Mode 6
#define T_H245RedundancyEncodingDTModeElement_type_extElem1 7

typedef struct EXTERN H245RedundancyEncodingDTModeElement_type {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245VideoMode *videoMode;
      /* t = 3 */
      H245AudioMode *audioMode;
      /* t = 4 */
      H245DataMode *dataMode;
      /* t = 5 */
      H245EncryptionMode *encryptionMode;
      /* t = 6 */
      H245H235Mode *h235Mode;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H245RedundancyEncodingDTModeElement_type;

EXTERN int asn1PE_H245RedundancyEncodingDTModeElement_type (OOCTXT* pctxt, H245RedundancyEncodingDTModeElement_type* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingDTModeElement_type (OOCTXT* pctxt, H245RedundancyEncodingDTModeElement_type* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingDTModeElement                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncodingDTModeElement {
   H245RedundancyEncodingDTModeElement_type type;
   DList extElem1;
} H245RedundancyEncodingDTModeElement;

EXTERN int asn1PE_H245RedundancyEncodingDTModeElement (OOCTXT* pctxt, H245RedundancyEncodingDTModeElement* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingDTModeElement (OOCTXT* pctxt, H245RedundancyEncodingDTModeElement* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245RedundancyEncodingDTModeElement                 */
/*                                                            */
/**************************************************************/

/* List of H245RedundancyEncodingDTModeElement */
typedef DList H245_SeqOfH245RedundancyEncodingDTModeElement;

EXTERN int asn1PE_H245_SeqOfH245RedundancyEncodingDTModeElement (OOCTXT* pctxt, H245_SeqOfH245RedundancyEncodingDTModeElement value);

EXTERN int asn1PD_H245_SeqOfH245RedundancyEncodingDTModeElement (OOCTXT* pctxt, H245_SeqOfH245RedundancyEncodingDTModeElement* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingDTMode                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncodingDTMode {
   H245RedundancyEncodingMethod redundancyEncodingMethod;
   H245RedundancyEncodingDTModeElement primary;
   H245_SeqOfH245RedundancyEncodingDTModeElement secondary;
   DList extElem1;
} H245RedundancyEncodingDTMode;

EXTERN int asn1PE_H245RedundancyEncodingDTMode (OOCTXT* pctxt, H245RedundancyEncodingDTMode* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingDTMode (OOCTXT* pctxt, H245RedundancyEncodingDTMode* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplePayloadStreamElementMode                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplePayloadStreamElementMode {
   struct H245ModeElementType *type;
   DList extElem1;
} H245MultiplePayloadStreamElementMode;

EXTERN int asn1PE_H245MultiplePayloadStreamElementMode (OOCTXT* pctxt, H245MultiplePayloadStreamElementMode* pvalue);

EXTERN int asn1PD_H245MultiplePayloadStreamElementMode (OOCTXT* pctxt, H245MultiplePayloadStreamElementMode* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245MultiplePayloadStreamElementMode                */
/*                                                            */
/**************************************************************/

/* List of H245MultiplePayloadStreamElementMode */
typedef DList H245_SeqOfH245MultiplePayloadStreamElementMode;

EXTERN int asn1PE_H245_SeqOfH245MultiplePayloadStreamElementMode (OOCTXT* pctxt, H245_SeqOfH245MultiplePayloadStreamElementMode value);

EXTERN int asn1PD_H245_SeqOfH245MultiplePayloadStreamElementMode (OOCTXT* pctxt, H245_SeqOfH245MultiplePayloadStreamElementMode* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplePayloadStreamMode                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplePayloadStreamMode {
   H245_SeqOfH245MultiplePayloadStreamElementMode elements;
   DList extElem1;
} H245MultiplePayloadStreamMode;

EXTERN int asn1PE_H245MultiplePayloadStreamMode (OOCTXT* pctxt, H245MultiplePayloadStreamMode* pvalue);

EXTERN int asn1PD_H245MultiplePayloadStreamMode (OOCTXT* pctxt, H245MultiplePayloadStreamMode* pvalue);

/**************************************************************/
/*                                                            */
/*  FECMode_rfc2733Mode_mode_separateStream_differentPort     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECMode_rfc2733Mode_mode_separateStream_differentPort {
   struct {
      unsigned protectedPayloadTypePresent : 1;
   } m;
   ASN1UINT8 protectedSessionID;
   ASN1UINT8 protectedPayloadType;
   DList extElem1;
} H245FECMode_rfc2733Mode_mode_separateStream_differentPort;

EXTERN int asn1PE_H245FECMode_rfc2733Mode_mode_separateStream_differentPort (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode_separateStream_differentPort* pvalue);

EXTERN int asn1PD_H245FECMode_rfc2733Mode_mode_separateStream_differentPort (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode_separateStream_differentPort* pvalue);

/**************************************************************/
/*                                                            */
/*  FECMode_rfc2733Mode_mode_separateStream_samePort          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECMode_rfc2733Mode_mode_separateStream_samePort {
   struct H245ModeElementType *protectedType;
   DList extElem1;
} H245FECMode_rfc2733Mode_mode_separateStream_samePort;

EXTERN int asn1PE_H245FECMode_rfc2733Mode_mode_separateStream_samePort (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode_separateStream_samePort* pvalue);

EXTERN int asn1PD_H245FECMode_rfc2733Mode_mode_separateStream_samePort (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode_separateStream_samePort* pvalue);

/**************************************************************/
/*                                                            */
/*  FECMode_rfc2733Mode_mode_separateStream                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECMode_rfc2733Mode_mode_separateStream_differentPort 1
#define T_H245FECMode_rfc2733Mode_mode_separateStream_samePort 2
#define T_H245FECMode_rfc2733Mode_mode_separateStream_extElem1 3

typedef struct EXTERN H245FECMode_rfc2733Mode_mode_separateStream {
   int t;
   union {
      /* t = 1 */
      H245FECMode_rfc2733Mode_mode_separateStream_differentPort *differentPort;
      /* t = 2 */
      H245FECMode_rfc2733Mode_mode_separateStream_samePort *samePort;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245FECMode_rfc2733Mode_mode_separateStream;

EXTERN int asn1PE_H245FECMode_rfc2733Mode_mode_separateStream (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode_separateStream* pvalue);

EXTERN int asn1PD_H245FECMode_rfc2733Mode_mode_separateStream (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode_separateStream* pvalue);

/**************************************************************/
/*                                                            */
/*  FECMode_rfc2733Mode_mode                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECMode_rfc2733Mode_mode_redundancyEncoding 1
#define T_H245FECMode_rfc2733Mode_mode_separateStream 2
#define T_H245FECMode_rfc2733Mode_mode_extElem1 3

typedef struct EXTERN H245FECMode_rfc2733Mode_mode {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245FECMode_rfc2733Mode_mode_separateStream *separateStream;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245FECMode_rfc2733Mode_mode;

EXTERN int asn1PE_H245FECMode_rfc2733Mode_mode (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode* pvalue);

EXTERN int asn1PD_H245FECMode_rfc2733Mode_mode (OOCTXT* pctxt, H245FECMode_rfc2733Mode_mode* pvalue);

/**************************************************************/
/*                                                            */
/*  FECMode_rfc2733Mode                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FECMode_rfc2733Mode {
   H245FECMode_rfc2733Mode_mode mode;
   DList extElem1;
} H245FECMode_rfc2733Mode;

EXTERN int asn1PE_H245FECMode_rfc2733Mode (OOCTXT* pctxt, H245FECMode_rfc2733Mode* pvalue);

EXTERN int asn1PD_H245FECMode_rfc2733Mode (OOCTXT* pctxt, H245FECMode_rfc2733Mode* pvalue);

/**************************************************************/
/*                                                            */
/*  FECMode                                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FECMode_rfc2733Mode       1
#define T_H245FECMode_extElem1          2

typedef struct EXTERN H245FECMode {
   int t;
   union {
      /* t = 1 */
      H245FECMode_rfc2733Mode *rfc2733Mode;
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245FECMode;

EXTERN int asn1PE_H245FECMode (OOCTXT* pctxt, H245FECMode* pvalue);

EXTERN int asn1PD_H245FECMode (OOCTXT* pctxt, H245FECMode* pvalue);

/**************************************************************/
/*                                                            */
/*  ModeElementType                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ModeElementType_nonStandard 1
#define T_H245ModeElementType_videoMode 2
#define T_H245ModeElementType_audioMode 3
#define T_H245ModeElementType_dataMode  4
#define T_H245ModeElementType_encryptionMode 5
#define T_H245ModeElementType_h235Mode  6
#define T_H245ModeElementType_multiplexedStreamMode 7
#define T_H245ModeElementType_redundancyEncodingDTMode 8
#define T_H245ModeElementType_multiplePayloadStreamMode 9
#define T_H245ModeElementType_fecMode   10
#define T_H245ModeElementType_extElem1  11

typedef struct EXTERN H245ModeElementType {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245VideoMode *videoMode;
      /* t = 3 */
      H245AudioMode *audioMode;
      /* t = 4 */
      H245DataMode *dataMode;
      /* t = 5 */
      H245EncryptionMode *encryptionMode;
      /* t = 6 */
      H245H235Mode *h235Mode;
      /* t = 7 */
      H245MultiplexedStreamParameter *multiplexedStreamMode;
      /* t = 8 */
      H245RedundancyEncodingDTMode *redundancyEncodingDTMode;
      /* t = 9 */
      H245MultiplePayloadStreamMode *multiplePayloadStreamMode;
      /* t = 10 */
      H245FECMode *fecMode;
      /* t = 11 */
      ASN1OpenType *extElem1;
   } u;
} H245ModeElementType;

EXTERN int asn1PE_H245ModeElementType (OOCTXT* pctxt, H245ModeElementType* pvalue);

EXTERN int asn1PD_H245ModeElementType (OOCTXT* pctxt, H245ModeElementType* pvalue);

/**************************************************************/
/*                                                            */
/*  H223ModeParameters_adaptationLayerType_al3                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223ModeParameters_adaptationLayerType_al3 {
   ASN1UINT8 controlFieldOctets;
   ASN1UINT sendBufferSize;
} H245H223ModeParameters_adaptationLayerType_al3;

EXTERN int asn1PE_H245H223ModeParameters_adaptationLayerType_al3 (OOCTXT* pctxt, H245H223ModeParameters_adaptationLayerType_al3* pvalue);

EXTERN int asn1PD_H245H223ModeParameters_adaptationLayerType_al3 (OOCTXT* pctxt, H245H223ModeParameters_adaptationLayerType_al3* pvalue);

/**************************************************************/
/*                                                            */
/*  H223ModeParameters_adaptationLayerType                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223ModeParameters_adaptationLayerType_nonStandard 1
#define T_H245H223ModeParameters_adaptationLayerType_al1Framed 2
#define T_H245H223ModeParameters_adaptationLayerType_al1NotFramed 3
#define T_H245H223ModeParameters_adaptationLayerType_al2WithoutSequenceNumbers 4
#define T_H245H223ModeParameters_adaptationLayerType_al2WithSequenceNumbers 5
#define T_H245H223ModeParameters_adaptationLayerType_al3 6
#define T_H245H223ModeParameters_adaptationLayerType_al1M 7
#define T_H245H223ModeParameters_adaptationLayerType_al2M 8
#define T_H245H223ModeParameters_adaptationLayerType_al3M 9
#define T_H245H223ModeParameters_adaptationLayerType_extElem1 10

typedef struct EXTERN H245H223ModeParameters_adaptationLayerType {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      H245H223ModeParameters_adaptationLayerType_al3 *al3;
      /* t = 7 */
      H245H223AL1MParameters *al1M;
      /* t = 8 */
      H245H223AL2MParameters *al2M;
      /* t = 9 */
      H245H223AL3MParameters *al3M;
      /* t = 10 */
      ASN1OpenType *extElem1;
   } u;
} H245H223ModeParameters_adaptationLayerType;

EXTERN int asn1PE_H245H223ModeParameters_adaptationLayerType (OOCTXT* pctxt, H245H223ModeParameters_adaptationLayerType* pvalue);

EXTERN int asn1PD_H245H223ModeParameters_adaptationLayerType (OOCTXT* pctxt, H245H223ModeParameters_adaptationLayerType* pvalue);

/**************************************************************/
/*                                                            */
/*  H223ModeParameters                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223ModeParameters {
   H245H223ModeParameters_adaptationLayerType adaptationLayerType;
   ASN1BOOL segmentableFlag;
   DList extElem1;
} H245H223ModeParameters;

EXTERN int asn1PE_H245H223ModeParameters (OOCTXT* pctxt, H245H223ModeParameters* pvalue);

EXTERN int asn1PD_H245H223ModeParameters (OOCTXT* pctxt, H245H223ModeParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  V76ModeParameters                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245V76ModeParameters_suspendResumewAddress 1
#define T_H245V76ModeParameters_suspendResumewoAddress 2
#define T_H245V76ModeParameters_extElem1 3

typedef struct EXTERN H245V76ModeParameters {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245V76ModeParameters;

EXTERN int asn1PE_H245V76ModeParameters (OOCTXT* pctxt, H245V76ModeParameters* pvalue);

EXTERN int asn1PD_H245V76ModeParameters (OOCTXT* pctxt, H245V76ModeParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingMode_secondaryEncoding                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RedundancyEncodingMode_secondaryEncoding_nonStandard 1
#define T_H245RedundancyEncodingMode_secondaryEncoding_audioData 2
#define T_H245RedundancyEncodingMode_secondaryEncoding_extElem1 3

typedef struct EXTERN H245RedundancyEncodingMode_secondaryEncoding {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      H245AudioMode *audioData;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245RedundancyEncodingMode_secondaryEncoding;

EXTERN int asn1PE_H245RedundancyEncodingMode_secondaryEncoding (OOCTXT* pctxt, H245RedundancyEncodingMode_secondaryEncoding* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingMode_secondaryEncoding (OOCTXT* pctxt, H245RedundancyEncodingMode_secondaryEncoding* pvalue);

/**************************************************************/
/*                                                            */
/*  RedundancyEncodingMode                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RedundancyEncodingMode {
   struct {
      unsigned secondaryEncodingPresent : 1;
   } m;
   H245RedundancyEncodingMethod redundancyEncodingMethod;
   H245RedundancyEncodingMode_secondaryEncoding secondaryEncoding;
   DList extElem1;
} H245RedundancyEncodingMode;

EXTERN int asn1PE_H245RedundancyEncodingMode (OOCTXT* pctxt, H245RedundancyEncodingMode* pvalue);

EXTERN int asn1PD_H245RedundancyEncodingMode (OOCTXT* pctxt, H245RedundancyEncodingMode* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250ModeParameters                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H2250ModeParameters {
   struct {
      unsigned redundancyEncodingModePresent : 1;
   } m;
   H245RedundancyEncodingMode redundancyEncodingMode;
   DList extElem1;
} H245H2250ModeParameters;

EXTERN int asn1PE_H245H2250ModeParameters (OOCTXT* pctxt, H245H2250ModeParameters* pvalue);

EXTERN int asn1PD_H245H2250ModeParameters (OOCTXT* pctxt, H245H2250ModeParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexedStreamModeParameters                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexedStreamModeParameters {
   H245LogicalChannelNumber logicalChannelNumber;
   DList extElem1;
} H245MultiplexedStreamModeParameters;

EXTERN int asn1PE_H245MultiplexedStreamModeParameters (OOCTXT* pctxt, H245MultiplexedStreamModeParameters* pvalue);

EXTERN int asn1PD_H245MultiplexedStreamModeParameters (OOCTXT* pctxt, H245MultiplexedStreamModeParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  ModeElement                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ModeElement {
   struct {
      unsigned h223ModeParametersPresent : 1;
      unsigned v76ModeParametersPresent : 1;
      unsigned h2250ModeParametersPresent : 1;
      unsigned genericModeParametersPresent : 1;
      unsigned multiplexedStreamModeParametersPresent : 1;
   } m;
   H245ModeElementType type;
   H245H223ModeParameters h223ModeParameters;
   H245V76ModeParameters v76ModeParameters;
   H245H2250ModeParameters h2250ModeParameters;
   H245GenericCapability genericModeParameters;
   H245MultiplexedStreamModeParameters multiplexedStreamModeParameters;
   DList extElem1;
} H245ModeElement;

EXTERN int asn1PE_H245ModeElement (OOCTXT* pctxt, H245ModeElement* pvalue);

EXTERN int asn1PD_H245ModeElement (OOCTXT* pctxt, H245ModeElement* pvalue);

/**************************************************************/
/*                                                            */
/*  ModeDescription                                           */
/*                                                            */
/**************************************************************/

/* List of H245ModeElement */
typedef DList H245ModeDescription;

EXTERN int asn1PE_H245ModeDescription (OOCTXT* pctxt, H245ModeDescription value);

EXTERN int asn1PD_H245ModeDescription (OOCTXT* pctxt, H245ModeDescription* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMode_requestedModes                                */
/*                                                            */
/**************************************************************/

/* List of H245ModeDescription */
typedef DList H245RequestMode_requestedModes;

EXTERN int asn1PE_H245RequestMode_requestedModes (OOCTXT* pctxt, H245RequestMode_requestedModes value);

EXTERN int asn1PD_H245RequestMode_requestedModes (OOCTXT* pctxt, H245RequestMode_requestedModes* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMode                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMode {
   H245SequenceNumber sequenceNumber;
   H245RequestMode_requestedModes requestedModes;
   DList extElem1;
} H245RequestMode;

EXTERN int asn1PE_H245RequestMode (OOCTXT* pctxt, H245RequestMode* pvalue);

EXTERN int asn1PD_H245RequestMode (OOCTXT* pctxt, H245RequestMode* pvalue);

/**************************************************************/
/*                                                            */
/*  RoundTripDelayRequest                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RoundTripDelayRequest {
   H245SequenceNumber sequenceNumber;
   DList extElem1;
} H245RoundTripDelayRequest;

EXTERN int asn1PE_H245RoundTripDelayRequest (OOCTXT* pctxt, H245RoundTripDelayRequest* pvalue);

EXTERN int asn1PD_H245RoundTripDelayRequest (OOCTXT* pctxt, H245RoundTripDelayRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopRequest_type                               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MaintenanceLoopRequest_type_systemLoop 1
#define T_H245MaintenanceLoopRequest_type_mediaLoop 2
#define T_H245MaintenanceLoopRequest_type_logicalChannelLoop 3
#define T_H245MaintenanceLoopRequest_type_extElem1 4

typedef struct EXTERN H245MaintenanceLoopRequest_type {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245LogicalChannelNumber mediaLoop;
      /* t = 3 */
      H245LogicalChannelNumber logicalChannelLoop;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245MaintenanceLoopRequest_type;

EXTERN int asn1PE_H245MaintenanceLoopRequest_type (OOCTXT* pctxt, H245MaintenanceLoopRequest_type* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopRequest_type (OOCTXT* pctxt, H245MaintenanceLoopRequest_type* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopRequest                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MaintenanceLoopRequest {
   H245MaintenanceLoopRequest_type type;
   DList extElem1;
} H245MaintenanceLoopRequest;

EXTERN int asn1PE_H245MaintenanceLoopRequest (OOCTXT* pctxt, H245MaintenanceLoopRequest* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopRequest (OOCTXT* pctxt, H245MaintenanceLoopRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeRequest                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CommunicationModeRequest {
   DList extElem1;
} H245CommunicationModeRequest;

EXTERN int asn1PE_H245CommunicationModeRequest (OOCTXT* pctxt, H245CommunicationModeRequest* pvalue);

EXTERN int asn1PD_H245CommunicationModeRequest (OOCTXT* pctxt, H245CommunicationModeRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  Criteria                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245Criteria {
   ASN1OBJID field;
   ASN1DynOctStr value;
   DList extElem1;
} H245Criteria;

EXTERN int asn1PE_H245Criteria (OOCTXT* pctxt, H245Criteria* pvalue);

EXTERN int asn1PD_H245Criteria (OOCTXT* pctxt, H245Criteria* pvalue);

/**************************************************************/
/*                                                            */
/*  CertSelectionCriteria                                     */
/*                                                            */
/**************************************************************/

/* List of H245Criteria */
typedef DList H245CertSelectionCriteria;

EXTERN int asn1PE_H245CertSelectionCriteria (OOCTXT* pctxt, H245CertSelectionCriteria value);

EXTERN int asn1PD_H245CertSelectionCriteria (OOCTXT* pctxt, H245CertSelectionCriteria* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceRequest_requestTerminalCertificate              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceRequest_requestTerminalCertificate {
   struct {
      unsigned terminalLabelPresent : 1;
      unsigned certSelectionCriteriaPresent : 1;
      unsigned sRandomPresent : 1;
   } m;
   H245TerminalLabel terminalLabel;
   H245CertSelectionCriteria certSelectionCriteria;
   ASN1UINT sRandom;
   DList extElem1;
} H245ConferenceRequest_requestTerminalCertificate;

EXTERN int asn1PE_H245ConferenceRequest_requestTerminalCertificate (OOCTXT* pctxt, H245ConferenceRequest_requestTerminalCertificate* pvalue);

EXTERN int asn1PD_H245ConferenceRequest_requestTerminalCertificate (OOCTXT* pctxt, H245ConferenceRequest_requestTerminalCertificate* pvalue);

/**************************************************************/
/*                                                            */
/*  RemoteMCRequest                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RemoteMCRequest_masterActivate 1
#define T_H245RemoteMCRequest_slaveActivate 2
#define T_H245RemoteMCRequest_deActivate 3
#define T_H245RemoteMCRequest_extElem1  4

typedef struct EXTERN H245RemoteMCRequest {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245RemoteMCRequest;

EXTERN int asn1PE_H245RemoteMCRequest (OOCTXT* pctxt, H245RemoteMCRequest* pvalue);

EXTERN int asn1PD_H245RemoteMCRequest (OOCTXT* pctxt, H245RemoteMCRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceRequest                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceRequest_terminalListRequest 1
#define T_H245ConferenceRequest_makeMeChair 2
#define T_H245ConferenceRequest_cancelMakeMeChair 3
#define T_H245ConferenceRequest_dropTerminal 4
#define T_H245ConferenceRequest_requestTerminalID 5
#define T_H245ConferenceRequest_enterH243Password 6
#define T_H245ConferenceRequest_enterH243TerminalID 7
#define T_H245ConferenceRequest_enterH243ConferenceID 8
#define T_H245ConferenceRequest_enterExtensionAddress 9
#define T_H245ConferenceRequest_requestChairTokenOwner 10
#define T_H245ConferenceRequest_requestTerminalCertificate 11
#define T_H245ConferenceRequest_broadcastMyLogicalChannel 12
#define T_H245ConferenceRequest_makeTerminalBroadcaster 13
#define T_H245ConferenceRequest_sendThisSource 14
#define T_H245ConferenceRequest_requestAllTerminalIDs 15
#define T_H245ConferenceRequest_remoteMCRequest 16
#define T_H245ConferenceRequest_extElem1 17

typedef struct EXTERN H245ConferenceRequest {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      H245TerminalLabel *dropTerminal;
      /* t = 5 */
      H245TerminalLabel *requestTerminalID;
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      H245ConferenceRequest_requestTerminalCertificate *requestTerminalCertificate;
      /* t = 12 */
      H245LogicalChannelNumber broadcastMyLogicalChannel;
      /* t = 13 */
      H245TerminalLabel *makeTerminalBroadcaster;
      /* t = 14 */
      H245TerminalLabel *sendThisSource;
      /* t = 15 */
      /* t = 16 */
      H245RemoteMCRequest *remoteMCRequest;
      /* t = 17 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceRequest;

EXTERN int asn1PE_H245ConferenceRequest (OOCTXT* pctxt, H245ConferenceRequest* pvalue);

EXTERN int asn1PD_H245ConferenceRequest (OOCTXT* pctxt, H245ConferenceRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkRequest_callInformation                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkRequest_callInformation {
   ASN1USINT maxNumberOfAdditionalConnections;
   DList extElem1;
} H245MultilinkRequest_callInformation;

EXTERN int asn1PE_H245MultilinkRequest_callInformation (OOCTXT* pctxt, H245MultilinkRequest_callInformation* pvalue);

EXTERN int asn1PD_H245MultilinkRequest_callInformation (OOCTXT* pctxt, H245MultilinkRequest_callInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  DialingInformationNetworkType                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DialingInformationNetworkType_nonStandard 1
#define T_H245DialingInformationNetworkType_n_isdn 2
#define T_H245DialingInformationNetworkType_gstn 3
#define T_H245DialingInformationNetworkType_mobile 4
#define T_H245DialingInformationNetworkType_extElem1 5

typedef struct EXTERN H245DialingInformationNetworkType {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245DialingInformationNetworkType;

EXTERN int asn1PE_H245DialingInformationNetworkType (OOCTXT* pctxt, H245DialingInformationNetworkType* pvalue);

EXTERN int asn1PD_H245DialingInformationNetworkType (OOCTXT* pctxt, H245DialingInformationNetworkType* pvalue);

/**************************************************************/
/*                                                            */
/*  DialingInformationNumber_networkType                      */
/*                                                            */
/**************************************************************/

/* List of H245DialingInformationNetworkType */
typedef DList H245DialingInformationNumber_networkType;

EXTERN int asn1PE_H245DialingInformationNumber_networkType (OOCTXT* pctxt, H245DialingInformationNumber_networkType value);

EXTERN int asn1PD_H245DialingInformationNumber_networkType (OOCTXT* pctxt, H245DialingInformationNumber_networkType* pvalue);

/**************************************************************/
/*                                                            */
/*  DialingInformationNumber                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245DialingInformationNumber {
   struct {
      unsigned subAddressPresent : 1;
   } m;
   ASN1NumericString networkAddress;
   ASN1IA5String subAddress;
   H245DialingInformationNumber_networkType networkType;
   DList extElem1;
} H245DialingInformationNumber;

EXTERN int asn1PE_H245DialingInformationNumber (OOCTXT* pctxt, H245DialingInformationNumber* pvalue);

EXTERN int asn1PD_H245DialingInformationNumber (OOCTXT* pctxt, H245DialingInformationNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  DialingInformation_differential                           */
/*                                                            */
/**************************************************************/

/* List of H245DialingInformationNumber */
typedef DList H245DialingInformation_differential;

EXTERN int asn1PE_H245DialingInformation_differential (OOCTXT* pctxt, H245DialingInformation_differential value);

EXTERN int asn1PD_H245DialingInformation_differential (OOCTXT* pctxt, H245DialingInformation_differential* pvalue);

/**************************************************************/
/*                                                            */
/*  DialingInformation                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245DialingInformation_nonStandard 1
#define T_H245DialingInformation_differential 2
#define T_H245DialingInformation_infoNotAvailable 3
#define T_H245DialingInformation_extElem1 4

typedef struct EXTERN H245DialingInformation {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245DialingInformation_differential *differential;
      /* t = 3 */
      ASN1USINT infoNotAvailable;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245DialingInformation;

EXTERN int asn1PE_H245DialingInformation (OOCTXT* pctxt, H245DialingInformation* pvalue);

EXTERN int asn1PD_H245DialingInformation (OOCTXT* pctxt, H245DialingInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkRequest_addConnection                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkRequest_addConnection {
   H245SequenceNumber sequenceNumber;
   H245DialingInformation dialingInformation;
   DList extElem1;
} H245MultilinkRequest_addConnection;

EXTERN int asn1PE_H245MultilinkRequest_addConnection (OOCTXT* pctxt, H245MultilinkRequest_addConnection* pvalue);

EXTERN int asn1PD_H245MultilinkRequest_addConnection (OOCTXT* pctxt, H245MultilinkRequest_addConnection* pvalue);

/**************************************************************/
/*                                                            */
/*  ConnectionIdentifier                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConnectionIdentifier {
   ASN1UINT channelTag;
   ASN1UINT sequenceNumber;
   DList extElem1;
} H245ConnectionIdentifier;

EXTERN int asn1PE_H245ConnectionIdentifier (OOCTXT* pctxt, H245ConnectionIdentifier* pvalue);

EXTERN int asn1PD_H245ConnectionIdentifier (OOCTXT* pctxt, H245ConnectionIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkRequest_removeConnection                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkRequest_removeConnection {
   H245ConnectionIdentifier connectionIdentifier;
   DList extElem1;
} H245MultilinkRequest_removeConnection;

EXTERN int asn1PE_H245MultilinkRequest_removeConnection (OOCTXT* pctxt, H245MultilinkRequest_removeConnection* pvalue);

EXTERN int asn1PD_H245MultilinkRequest_removeConnection (OOCTXT* pctxt, H245MultilinkRequest_removeConnection* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkRequest_maximumHeaderInterval_requestType        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultilinkRequest_maximumHeaderInterval_requestType_currentIntervalInformation 1
#define T_H245MultilinkRequest_maximumHeaderInterval_requestType_requestedInterval 2
#define T_H245MultilinkRequest_maximumHeaderInterval_requestType_extElem1 3

typedef struct EXTERN H245MultilinkRequest_maximumHeaderInterval_requestType {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      ASN1USINT requestedInterval;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245MultilinkRequest_maximumHeaderInterval_requestType;

EXTERN int asn1PE_H245MultilinkRequest_maximumHeaderInterval_requestType (OOCTXT* pctxt, H245MultilinkRequest_maximumHeaderInterval_requestType* pvalue);

EXTERN int asn1PD_H245MultilinkRequest_maximumHeaderInterval_requestType (OOCTXT* pctxt, H245MultilinkRequest_maximumHeaderInterval_requestType* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkRequest_maximumHeaderInterval                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkRequest_maximumHeaderInterval {
   H245MultilinkRequest_maximumHeaderInterval_requestType requestType;
   DList extElem1;
} H245MultilinkRequest_maximumHeaderInterval;

EXTERN int asn1PE_H245MultilinkRequest_maximumHeaderInterval (OOCTXT* pctxt, H245MultilinkRequest_maximumHeaderInterval* pvalue);

EXTERN int asn1PD_H245MultilinkRequest_maximumHeaderInterval (OOCTXT* pctxt, H245MultilinkRequest_maximumHeaderInterval* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkRequest                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultilinkRequest_nonStandard 1
#define T_H245MultilinkRequest_callInformation 2
#define T_H245MultilinkRequest_addConnection 3
#define T_H245MultilinkRequest_removeConnection 4
#define T_H245MultilinkRequest_maximumHeaderInterval 5
#define T_H245MultilinkRequest_extElem1 6

typedef struct EXTERN H245MultilinkRequest {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245MultilinkRequest_callInformation *callInformation;
      /* t = 3 */
      H245MultilinkRequest_addConnection *addConnection;
      /* t = 4 */
      H245MultilinkRequest_removeConnection *removeConnection;
      /* t = 5 */
      H245MultilinkRequest_maximumHeaderInterval *maximumHeaderInterval;
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H245MultilinkRequest;

EXTERN int asn1PE_H245MultilinkRequest (OOCTXT* pctxt, H245MultilinkRequest* pvalue);

EXTERN int asn1PD_H245MultilinkRequest (OOCTXT* pctxt, H245MultilinkRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  LogicalChannelRateRequest                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245LogicalChannelRateRequest {
   H245SequenceNumber sequenceNumber;
   H245LogicalChannelNumber logicalChannelNumber;
   H245MaximumBitRate maximumBitRate;
   DList extElem1;
} H245LogicalChannelRateRequest;

EXTERN int asn1PE_H245LogicalChannelRateRequest (OOCTXT* pctxt, H245LogicalChannelRateRequest* pvalue);

EXTERN int asn1PD_H245LogicalChannelRateRequest (OOCTXT* pctxt, H245LogicalChannelRateRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMessage                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RequestMessage_nonStandard 1
#define T_H245RequestMessage_masterSlaveDetermination 2
#define T_H245RequestMessage_terminalCapabilitySet 3
#define T_H245RequestMessage_openLogicalChannel 4
#define T_H245RequestMessage_closeLogicalChannel 5
#define T_H245RequestMessage_requestChannelClose 6
#define T_H245RequestMessage_multiplexEntrySend 7
#define T_H245RequestMessage_requestMultiplexEntry 8
#define T_H245RequestMessage_requestMode 9
#define T_H245RequestMessage_roundTripDelayRequest 10
#define T_H245RequestMessage_maintenanceLoopRequest 11
#define T_H245RequestMessage_communicationModeRequest 12
#define T_H245RequestMessage_conferenceRequest 13
#define T_H245RequestMessage_multilinkRequest 14
#define T_H245RequestMessage_logicalChannelRateRequest 15
#define T_H245RequestMessage_extElem1   16

typedef struct EXTERN H245RequestMessage {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245MasterSlaveDetermination *masterSlaveDetermination;
      /* t = 3 */
      H245TerminalCapabilitySet *terminalCapabilitySet;
      /* t = 4 */
      H245OpenLogicalChannel *openLogicalChannel;
      /* t = 5 */
      H245CloseLogicalChannel *closeLogicalChannel;
      /* t = 6 */
      H245RequestChannelClose *requestChannelClose;
      /* t = 7 */
      H245MultiplexEntrySend *multiplexEntrySend;
      /* t = 8 */
      H245RequestMultiplexEntry *requestMultiplexEntry;
      /* t = 9 */
      H245RequestMode *requestMode;
      /* t = 10 */
      H245RoundTripDelayRequest *roundTripDelayRequest;
      /* t = 11 */
      H245MaintenanceLoopRequest *maintenanceLoopRequest;
      /* t = 12 */
      H245CommunicationModeRequest *communicationModeRequest;
      /* t = 13 */
      H245ConferenceRequest *conferenceRequest;
      /* t = 14 */
      H245MultilinkRequest *multilinkRequest;
      /* t = 15 */
      H245LogicalChannelRateRequest *logicalChannelRateRequest;
      /* t = 16 */
      ASN1OpenType *extElem1;
   } u;
} H245RequestMessage;

EXTERN int asn1PE_H245RequestMessage (OOCTXT* pctxt, H245RequestMessage* pvalue);

EXTERN int asn1PD_H245RequestMessage (OOCTXT* pctxt, H245RequestMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  MasterSlaveDeterminationAck_decision                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MasterSlaveDeterminationAck_decision_master 1
#define T_H245MasterSlaveDeterminationAck_decision_slave 2

typedef struct EXTERN H245MasterSlaveDeterminationAck_decision {
   int t;
} H245MasterSlaveDeterminationAck_decision;

EXTERN int asn1PE_H245MasterSlaveDeterminationAck_decision (OOCTXT* pctxt, H245MasterSlaveDeterminationAck_decision* pvalue);

EXTERN int asn1PD_H245MasterSlaveDeterminationAck_decision (OOCTXT* pctxt, H245MasterSlaveDeterminationAck_decision* pvalue);

/**************************************************************/
/*                                                            */
/*  MasterSlaveDeterminationAck                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MasterSlaveDeterminationAck {
   H245MasterSlaveDeterminationAck_decision decision;
   DList extElem1;
} H245MasterSlaveDeterminationAck;

EXTERN int asn1PE_H245MasterSlaveDeterminationAck (OOCTXT* pctxt, H245MasterSlaveDeterminationAck* pvalue);

EXTERN int asn1PD_H245MasterSlaveDeterminationAck (OOCTXT* pctxt, H245MasterSlaveDeterminationAck* pvalue);

/**************************************************************/
/*                                                            */
/*  MasterSlaveDeterminationReject_cause                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MasterSlaveDeterminationReject_cause_identicalNumbers 1
#define T_H245MasterSlaveDeterminationReject_cause_extElem1 2

typedef struct EXTERN H245MasterSlaveDeterminationReject_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245MasterSlaveDeterminationReject_cause;

EXTERN int asn1PE_H245MasterSlaveDeterminationReject_cause (OOCTXT* pctxt, H245MasterSlaveDeterminationReject_cause* pvalue);

EXTERN int asn1PD_H245MasterSlaveDeterminationReject_cause (OOCTXT* pctxt, H245MasterSlaveDeterminationReject_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  MasterSlaveDeterminationReject                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MasterSlaveDeterminationReject {
   H245MasterSlaveDeterminationReject_cause cause;
   DList extElem1;
} H245MasterSlaveDeterminationReject;

EXTERN int asn1PE_H245MasterSlaveDeterminationReject (OOCTXT* pctxt, H245MasterSlaveDeterminationReject* pvalue);

EXTERN int asn1PD_H245MasterSlaveDeterminationReject (OOCTXT* pctxt, H245MasterSlaveDeterminationReject* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySetAck                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalCapabilitySetAck {
   H245SequenceNumber sequenceNumber;
   DList extElem1;
} H245TerminalCapabilitySetAck;

EXTERN int asn1PE_H245TerminalCapabilitySetAck (OOCTXT* pctxt, H245TerminalCapabilitySetAck* pvalue);

EXTERN int asn1PD_H245TerminalCapabilitySetAck (OOCTXT* pctxt, H245TerminalCapabilitySetAck* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySetReject_cause_tableEntryCapacityExce  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded_highestEntryNumberProcessed 1
#define T_H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded_noneProcessed 2

typedef struct EXTERN H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded {
   int t;
   union {
      /* t = 1 */
      H245CapabilityTableEntryNumber highestEntryNumberProcessed;
      /* t = 2 */
   } u;
} H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded;

EXTERN int asn1PE_H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded (OOCTXT* pctxt, H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded* pvalue);

EXTERN int asn1PD_H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded (OOCTXT* pctxt, H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySetReject_cause                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245TerminalCapabilitySetReject_cause_unspecified 1
#define T_H245TerminalCapabilitySetReject_cause_undefinedTableEntryUsed 2
#define T_H245TerminalCapabilitySetReject_cause_descriptorCapacityExceeded 3
#define T_H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded 4
#define T_H245TerminalCapabilitySetReject_cause_extElem1 5

typedef struct EXTERN H245TerminalCapabilitySetReject_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      H245TerminalCapabilitySetReject_cause_tableEntryCapacityExceeded *tableEntryCapacityExceeded;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245TerminalCapabilitySetReject_cause;

EXTERN int asn1PE_H245TerminalCapabilitySetReject_cause (OOCTXT* pctxt, H245TerminalCapabilitySetReject_cause* pvalue);

EXTERN int asn1PD_H245TerminalCapabilitySetReject_cause (OOCTXT* pctxt, H245TerminalCapabilitySetReject_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySetReject                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalCapabilitySetReject {
   H245SequenceNumber sequenceNumber;
   H245TerminalCapabilitySetReject_cause cause;
   DList extElem1;
} H245TerminalCapabilitySetReject;

EXTERN int asn1PE_H245TerminalCapabilitySetReject (OOCTXT* pctxt, H245TerminalCapabilitySetReject* pvalue);

EXTERN int asn1PD_H245TerminalCapabilitySetReject (OOCTXT* pctxt, H245TerminalCapabilitySetReject* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelAck_reverseLogicalChannelParameters_mu  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters_h222LogicalChannelParameters 1
#define T_H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters_h2250LogicalChannelParameters 2
#define T_H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters_extElem1 3

typedef struct EXTERN H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters {
   int t;
   union {
      /* t = 1 */
      H245H222LogicalChannelParameters *h222LogicalChannelParameters;
      /* t = 2 */
      H245H2250LogicalChannelParameters *h2250LogicalChannelParameters;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters;

EXTERN int asn1PE_H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters (OOCTXT* pctxt, H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters (OOCTXT* pctxt, H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelAck_reverseLogicalChannelParameters     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannelAck_reverseLogicalChannelParameters {
   struct {
      unsigned portNumberPresent : 1;
      unsigned multiplexParametersPresent : 1;
      unsigned replacementForPresent : 1;
   } m;
   H245LogicalChannelNumber reverseLogicalChannelNumber;
   ASN1USINT portNumber;
   H245OpenLogicalChannelAck_reverseLogicalChannelParameters_multiplexParameters multiplexParameters;
   H245LogicalChannelNumber replacementFor;
   DList extElem1;
} H245OpenLogicalChannelAck_reverseLogicalChannelParameters;

EXTERN int asn1PE_H245OpenLogicalChannelAck_reverseLogicalChannelParameters (OOCTXT* pctxt, H245OpenLogicalChannelAck_reverseLogicalChannelParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelAck_reverseLogicalChannelParameters (OOCTXT* pctxt, H245OpenLogicalChannelAck_reverseLogicalChannelParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250LogicalChannelAckParameters                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H2250LogicalChannelAckParameters {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned sessionIDPresent : 1;
      unsigned mediaChannelPresent : 1;
      unsigned mediaControlChannelPresent : 1;
      unsigned dynamicRTPPayloadTypePresent : 1;
      unsigned flowControlToZeroPresent : 1;
      unsigned portNumberPresent : 1;
   } m;
   H245_SeqOfH245NonStandardParameter nonStandard;
   ASN1UINT8 sessionID;
   H245TransportAddress mediaChannel;
   H245TransportAddress mediaControlChannel;
   ASN1UINT8 dynamicRTPPayloadType;
   ASN1BOOL flowControlToZero;
   ASN1USINT portNumber;
   DList extElem1;
} H245H2250LogicalChannelAckParameters;

EXTERN int asn1PE_H245H2250LogicalChannelAckParameters (OOCTXT* pctxt, H245H2250LogicalChannelAckParameters* pvalue);

EXTERN int asn1PD_H245H2250LogicalChannelAckParameters (OOCTXT* pctxt, H245H2250LogicalChannelAckParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelAck_forwardMultiplexAckParameters       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245OpenLogicalChannelAck_forwardMultiplexAckParameters_h2250LogicalChannelAckParameters 1
#define T_H245OpenLogicalChannelAck_forwardMultiplexAckParameters_extElem1 2

typedef struct EXTERN H245OpenLogicalChannelAck_forwardMultiplexAckParameters {
   int t;
   union {
      /* t = 1 */
      H245H2250LogicalChannelAckParameters *h2250LogicalChannelAckParameters;
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245OpenLogicalChannelAck_forwardMultiplexAckParameters;

EXTERN int asn1PE_H245OpenLogicalChannelAck_forwardMultiplexAckParameters (OOCTXT* pctxt, H245OpenLogicalChannelAck_forwardMultiplexAckParameters* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelAck_forwardMultiplexAckParameters (OOCTXT* pctxt, H245OpenLogicalChannelAck_forwardMultiplexAckParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelAck                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannelAck {
   struct {
      unsigned reverseLogicalChannelParametersPresent : 1;
      unsigned separateStackPresent : 1;
      unsigned forwardMultiplexAckParametersPresent : 1;
      unsigned encryptionSyncPresent : 1;
   } m;
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   H245OpenLogicalChannelAck_reverseLogicalChannelParameters reverseLogicalChannelParameters;
   H245NetworkAccessParameters separateStack;
   H245OpenLogicalChannelAck_forwardMultiplexAckParameters forwardMultiplexAckParameters;
   H245EncryptionSync encryptionSync;
   DList extElem1;
} H245OpenLogicalChannelAck;

EXTERN int asn1PE_H245OpenLogicalChannelAck (OOCTXT* pctxt, H245OpenLogicalChannelAck* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelAck (OOCTXT* pctxt, H245OpenLogicalChannelAck* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelReject_cause                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245OpenLogicalChannelReject_cause_unspecified 1
#define T_H245OpenLogicalChannelReject_cause_unsuitableReverseParameters 2
#define T_H245OpenLogicalChannelReject_cause_dataTypeNotSupported 3
#define T_H245OpenLogicalChannelReject_cause_dataTypeNotAvailable 4
#define T_H245OpenLogicalChannelReject_cause_unknownDataType 5
#define T_H245OpenLogicalChannelReject_cause_dataTypeALCombinationNotSupported 6
#define T_H245OpenLogicalChannelReject_cause_multicastChannelNotAllowed 7
#define T_H245OpenLogicalChannelReject_cause_insufficientBandwidth 8
#define T_H245OpenLogicalChannelReject_cause_separateStackEstablishmentFailed 9
#define T_H245OpenLogicalChannelReject_cause_invalidSessionID 10
#define T_H245OpenLogicalChannelReject_cause_masterSlaveConflict 11
#define T_H245OpenLogicalChannelReject_cause_waitForCommunicationMode 12
#define T_H245OpenLogicalChannelReject_cause_invalidDependentChannel 13
#define T_H245OpenLogicalChannelReject_cause_replacementForRejected 14
#define T_H245OpenLogicalChannelReject_cause_extElem1 15

typedef struct EXTERN H245OpenLogicalChannelReject_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      /* t = 12 */
      /* t = 13 */
      /* t = 14 */
      /* t = 15 */
      ASN1OpenType *extElem1;
   } u;
} H245OpenLogicalChannelReject_cause;

EXTERN int asn1PE_H245OpenLogicalChannelReject_cause (OOCTXT* pctxt, H245OpenLogicalChannelReject_cause* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelReject_cause (OOCTXT* pctxt, H245OpenLogicalChannelReject_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelReject                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannelReject {
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   H245OpenLogicalChannelReject_cause cause;
   DList extElem1;
} H245OpenLogicalChannelReject;

EXTERN int asn1PE_H245OpenLogicalChannelReject (OOCTXT* pctxt, H245OpenLogicalChannelReject* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelReject (OOCTXT* pctxt, H245OpenLogicalChannelReject* pvalue);

/**************************************************************/
/*                                                            */
/*  CloseLogicalChannelAck                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CloseLogicalChannelAck {
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   DList extElem1;
} H245CloseLogicalChannelAck;

EXTERN int asn1PE_H245CloseLogicalChannelAck (OOCTXT* pctxt, H245CloseLogicalChannelAck* pvalue);

EXTERN int asn1PD_H245CloseLogicalChannelAck (OOCTXT* pctxt, H245CloseLogicalChannelAck* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestChannelCloseAck                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestChannelCloseAck {
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   DList extElem1;
} H245RequestChannelCloseAck;

EXTERN int asn1PE_H245RequestChannelCloseAck (OOCTXT* pctxt, H245RequestChannelCloseAck* pvalue);

EXTERN int asn1PD_H245RequestChannelCloseAck (OOCTXT* pctxt, H245RequestChannelCloseAck* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestChannelCloseReject_cause                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RequestChannelCloseReject_cause_unspecified 1
#define T_H245RequestChannelCloseReject_cause_extElem1 2

typedef struct EXTERN H245RequestChannelCloseReject_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245RequestChannelCloseReject_cause;

EXTERN int asn1PE_H245RequestChannelCloseReject_cause (OOCTXT* pctxt, H245RequestChannelCloseReject_cause* pvalue);

EXTERN int asn1PD_H245RequestChannelCloseReject_cause (OOCTXT* pctxt, H245RequestChannelCloseReject_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestChannelCloseReject                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestChannelCloseReject {
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   H245RequestChannelCloseReject_cause cause;
   DList extElem1;
} H245RequestChannelCloseReject;

EXTERN int asn1PE_H245RequestChannelCloseReject (OOCTXT* pctxt, H245RequestChannelCloseReject* pvalue);

EXTERN int asn1PD_H245RequestChannelCloseReject (OOCTXT* pctxt, H245RequestChannelCloseReject* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySendAck_multiplexTableEntryNumber           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntrySendAck_multiplexTableEntryNumber {
   ASN1UINT n;
   H245MultiplexTableEntryNumber elem[15];
} H245MultiplexEntrySendAck_multiplexTableEntryNumber;

EXTERN int asn1PE_H245MultiplexEntrySendAck_multiplexTableEntryNumber (OOCTXT* pctxt, H245MultiplexEntrySendAck_multiplexTableEntryNumber* pvalue);

EXTERN int asn1PD_H245MultiplexEntrySendAck_multiplexTableEntryNumber (OOCTXT* pctxt, H245MultiplexEntrySendAck_multiplexTableEntryNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySendAck                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntrySendAck {
   H245SequenceNumber sequenceNumber;
   H245MultiplexEntrySendAck_multiplexTableEntryNumber multiplexTableEntryNumber;
   DList extElem1;
} H245MultiplexEntrySendAck;

EXTERN int asn1PE_H245MultiplexEntrySendAck (OOCTXT* pctxt, H245MultiplexEntrySendAck* pvalue);

EXTERN int asn1PD_H245MultiplexEntrySendAck (OOCTXT* pctxt, H245MultiplexEntrySendAck* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntryRejectionDescriptions_cause                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultiplexEntryRejectionDescriptions_cause_unspecifiedCause 1
#define T_H245MultiplexEntryRejectionDescriptions_cause_descriptorTooComplex 2
#define T_H245MultiplexEntryRejectionDescriptions_cause_extElem1 3

typedef struct EXTERN H245MultiplexEntryRejectionDescriptions_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245MultiplexEntryRejectionDescriptions_cause;

EXTERN int asn1PE_H245MultiplexEntryRejectionDescriptions_cause (OOCTXT* pctxt, H245MultiplexEntryRejectionDescriptions_cause* pvalue);

EXTERN int asn1PD_H245MultiplexEntryRejectionDescriptions_cause (OOCTXT* pctxt, H245MultiplexEntryRejectionDescriptions_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntryRejectionDescriptions                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntryRejectionDescriptions {
   H245MultiplexTableEntryNumber multiplexTableEntryNumber;
   H245MultiplexEntryRejectionDescriptions_cause cause;
   DList extElem1;
} H245MultiplexEntryRejectionDescriptions;

EXTERN int asn1PE_H245MultiplexEntryRejectionDescriptions (OOCTXT* pctxt, H245MultiplexEntryRejectionDescriptions* pvalue);

EXTERN int asn1PD_H245MultiplexEntryRejectionDescriptions (OOCTXT* pctxt, H245MultiplexEntryRejectionDescriptions* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySendReject_rejectionDescriptions            */
/*                                                            */
/**************************************************************/

/* List of H245MultiplexEntryRejectionDescriptions */
typedef DList H245MultiplexEntrySendReject_rejectionDescriptions;

EXTERN int asn1PE_H245MultiplexEntrySendReject_rejectionDescriptions (OOCTXT* pctxt, H245MultiplexEntrySendReject_rejectionDescriptions value);

EXTERN int asn1PD_H245MultiplexEntrySendReject_rejectionDescriptions (OOCTXT* pctxt, H245MultiplexEntrySendReject_rejectionDescriptions* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySendReject                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntrySendReject {
   H245SequenceNumber sequenceNumber;
   H245MultiplexEntrySendReject_rejectionDescriptions rejectionDescriptions;
   DList extElem1;
} H245MultiplexEntrySendReject;

EXTERN int asn1PE_H245MultiplexEntrySendReject (OOCTXT* pctxt, H245MultiplexEntrySendReject* pvalue);

EXTERN int asn1PD_H245MultiplexEntrySendReject (OOCTXT* pctxt, H245MultiplexEntrySendReject* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryAck_entryNumbers                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryAck_entryNumbers {
   ASN1UINT n;
   H245MultiplexTableEntryNumber elem[15];
} H245RequestMultiplexEntryAck_entryNumbers;

EXTERN int asn1PE_H245RequestMultiplexEntryAck_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntryAck_entryNumbers* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryAck_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntryAck_entryNumbers* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryAck                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryAck {
   H245RequestMultiplexEntryAck_entryNumbers entryNumbers;
   DList extElem1;
} H245RequestMultiplexEntryAck;

EXTERN int asn1PE_H245RequestMultiplexEntryAck (OOCTXT* pctxt, H245RequestMultiplexEntryAck* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryAck (OOCTXT* pctxt, H245RequestMultiplexEntryAck* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryReject_entryNumbers                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryReject_entryNumbers {
   ASN1UINT n;
   H245MultiplexTableEntryNumber elem[15];
} H245RequestMultiplexEntryReject_entryNumbers;

EXTERN int asn1PE_H245RequestMultiplexEntryReject_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntryReject_entryNumbers* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryReject_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntryReject_entryNumbers* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryRejectionDescriptions_cause          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RequestMultiplexEntryRejectionDescriptions_cause_unspecifiedCause 1
#define T_H245RequestMultiplexEntryRejectionDescriptions_cause_extElem1 2

typedef struct EXTERN H245RequestMultiplexEntryRejectionDescriptions_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245RequestMultiplexEntryRejectionDescriptions_cause;

EXTERN int asn1PE_H245RequestMultiplexEntryRejectionDescriptions_cause (OOCTXT* pctxt, H245RequestMultiplexEntryRejectionDescriptions_cause* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryRejectionDescriptions_cause (OOCTXT* pctxt, H245RequestMultiplexEntryRejectionDescriptions_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryRejectionDescriptions                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryRejectionDescriptions {
   H245MultiplexTableEntryNumber multiplexTableEntryNumber;
   H245RequestMultiplexEntryRejectionDescriptions_cause cause;
   DList extElem1;
} H245RequestMultiplexEntryRejectionDescriptions;

EXTERN int asn1PE_H245RequestMultiplexEntryRejectionDescriptions (OOCTXT* pctxt, H245RequestMultiplexEntryRejectionDescriptions* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryRejectionDescriptions (OOCTXT* pctxt, H245RequestMultiplexEntryRejectionDescriptions* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryReject_rejectionDescriptions         */
/*                                                            */
/**************************************************************/

/* List of H245RequestMultiplexEntryRejectionDescriptions */
typedef DList H245RequestMultiplexEntryReject_rejectionDescriptions;

EXTERN int asn1PE_H245RequestMultiplexEntryReject_rejectionDescriptions (OOCTXT* pctxt, H245RequestMultiplexEntryReject_rejectionDescriptions value);

EXTERN int asn1PD_H245RequestMultiplexEntryReject_rejectionDescriptions (OOCTXT* pctxt, H245RequestMultiplexEntryReject_rejectionDescriptions* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryReject                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryReject {
   H245RequestMultiplexEntryReject_entryNumbers entryNumbers;
   H245RequestMultiplexEntryReject_rejectionDescriptions rejectionDescriptions;
   DList extElem1;
} H245RequestMultiplexEntryReject;

EXTERN int asn1PE_H245RequestMultiplexEntryReject (OOCTXT* pctxt, H245RequestMultiplexEntryReject* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryReject (OOCTXT* pctxt, H245RequestMultiplexEntryReject* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestModeAck_response                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RequestModeAck_response_willTransmitMostPreferredMode 1
#define T_H245RequestModeAck_response_willTransmitLessPreferredMode 2
#define T_H245RequestModeAck_response_extElem1 3

typedef struct EXTERN H245RequestModeAck_response {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245RequestModeAck_response;

EXTERN int asn1PE_H245RequestModeAck_response (OOCTXT* pctxt, H245RequestModeAck_response* pvalue);

EXTERN int asn1PD_H245RequestModeAck_response (OOCTXT* pctxt, H245RequestModeAck_response* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestModeAck                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestModeAck {
   H245SequenceNumber sequenceNumber;
   H245RequestModeAck_response response;
   DList extElem1;
} H245RequestModeAck;

EXTERN int asn1PE_H245RequestModeAck (OOCTXT* pctxt, H245RequestModeAck* pvalue);

EXTERN int asn1PD_H245RequestModeAck (OOCTXT* pctxt, H245RequestModeAck* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestModeReject_cause                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RequestModeReject_cause_modeUnavailable 1
#define T_H245RequestModeReject_cause_multipointConstraint 2
#define T_H245RequestModeReject_cause_requestDenied 3
#define T_H245RequestModeReject_cause_extElem1 4

typedef struct EXTERN H245RequestModeReject_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245RequestModeReject_cause;

EXTERN int asn1PE_H245RequestModeReject_cause (OOCTXT* pctxt, H245RequestModeReject_cause* pvalue);

EXTERN int asn1PD_H245RequestModeReject_cause (OOCTXT* pctxt, H245RequestModeReject_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestModeReject                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestModeReject {
   H245SequenceNumber sequenceNumber;
   H245RequestModeReject_cause cause;
   DList extElem1;
} H245RequestModeReject;

EXTERN int asn1PE_H245RequestModeReject (OOCTXT* pctxt, H245RequestModeReject* pvalue);

EXTERN int asn1PD_H245RequestModeReject (OOCTXT* pctxt, H245RequestModeReject* pvalue);

/**************************************************************/
/*                                                            */
/*  RoundTripDelayResponse                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RoundTripDelayResponse {
   H245SequenceNumber sequenceNumber;
   DList extElem1;
} H245RoundTripDelayResponse;

EXTERN int asn1PE_H245RoundTripDelayResponse (OOCTXT* pctxt, H245RoundTripDelayResponse* pvalue);

EXTERN int asn1PD_H245RoundTripDelayResponse (OOCTXT* pctxt, H245RoundTripDelayResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopAck_type                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MaintenanceLoopAck_type_systemLoop 1
#define T_H245MaintenanceLoopAck_type_mediaLoop 2
#define T_H245MaintenanceLoopAck_type_logicalChannelLoop 3
#define T_H245MaintenanceLoopAck_type_extElem1 4

typedef struct EXTERN H245MaintenanceLoopAck_type {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245LogicalChannelNumber mediaLoop;
      /* t = 3 */
      H245LogicalChannelNumber logicalChannelLoop;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245MaintenanceLoopAck_type;

EXTERN int asn1PE_H245MaintenanceLoopAck_type (OOCTXT* pctxt, H245MaintenanceLoopAck_type* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopAck_type (OOCTXT* pctxt, H245MaintenanceLoopAck_type* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopAck                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MaintenanceLoopAck {
   H245MaintenanceLoopAck_type type;
   DList extElem1;
} H245MaintenanceLoopAck;

EXTERN int asn1PE_H245MaintenanceLoopAck (OOCTXT* pctxt, H245MaintenanceLoopAck* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopAck (OOCTXT* pctxt, H245MaintenanceLoopAck* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopReject_type                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MaintenanceLoopReject_type_systemLoop 1
#define T_H245MaintenanceLoopReject_type_mediaLoop 2
#define T_H245MaintenanceLoopReject_type_logicalChannelLoop 3
#define T_H245MaintenanceLoopReject_type_extElem1 4

typedef struct EXTERN H245MaintenanceLoopReject_type {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245LogicalChannelNumber mediaLoop;
      /* t = 3 */
      H245LogicalChannelNumber logicalChannelLoop;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245MaintenanceLoopReject_type;

EXTERN int asn1PE_H245MaintenanceLoopReject_type (OOCTXT* pctxt, H245MaintenanceLoopReject_type* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopReject_type (OOCTXT* pctxt, H245MaintenanceLoopReject_type* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopReject_cause                               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MaintenanceLoopReject_cause_canNotPerformLoop 1
#define T_H245MaintenanceLoopReject_cause_extElem1 2

typedef struct EXTERN H245MaintenanceLoopReject_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245MaintenanceLoopReject_cause;

EXTERN int asn1PE_H245MaintenanceLoopReject_cause (OOCTXT* pctxt, H245MaintenanceLoopReject_cause* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopReject_cause (OOCTXT* pctxt, H245MaintenanceLoopReject_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopReject                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MaintenanceLoopReject {
   H245MaintenanceLoopReject_type type;
   H245MaintenanceLoopReject_cause cause;
   DList extElem1;
} H245MaintenanceLoopReject;

EXTERN int asn1PE_H245MaintenanceLoopReject (OOCTXT* pctxt, H245MaintenanceLoopReject* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopReject (OOCTXT* pctxt, H245MaintenanceLoopReject* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeTableEntry_dataType                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CommunicationModeTableEntry_dataType_videoData 1
#define T_H245CommunicationModeTableEntry_dataType_audioData 2
#define T_H245CommunicationModeTableEntry_dataType_data 3
#define T_H245CommunicationModeTableEntry_dataType_extElem1 4

typedef struct EXTERN H245CommunicationModeTableEntry_dataType {
   int t;
   union {
      /* t = 1 */
      H245VideoCapability *videoData;
      /* t = 2 */
      H245AudioCapability *audioData;
      /* t = 3 */
      H245DataApplicationCapability *data;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245CommunicationModeTableEntry_dataType;

EXTERN int asn1PE_H245CommunicationModeTableEntry_dataType (OOCTXT* pctxt, H245CommunicationModeTableEntry_dataType* pvalue);

EXTERN int asn1PD_H245CommunicationModeTableEntry_dataType (OOCTXT* pctxt, H245CommunicationModeTableEntry_dataType* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeTableEntry                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CommunicationModeTableEntry {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned associatedSessionIDPresent : 1;
      unsigned terminalLabelPresent : 1;
      unsigned mediaChannelPresent : 1;
      unsigned mediaGuaranteedDeliveryPresent : 1;
      unsigned mediaControlChannelPresent : 1;
      unsigned mediaControlGuaranteedDeliveryPresent : 1;
      unsigned redundancyEncodingPresent : 1;
      unsigned sessionDependencyPresent : 1;
      unsigned destinationPresent : 1;
   } m;
   H245_SeqOfH245NonStandardParameter nonStandard;
   ASN1UINT8 sessionID;
   ASN1UINT8 associatedSessionID;
   H245TerminalLabel terminalLabel;
   ASN1BMPString sessionDescription;
   H245CommunicationModeTableEntry_dataType dataType;
   H245TransportAddress mediaChannel;
   ASN1BOOL mediaGuaranteedDelivery;
   H245TransportAddress mediaControlChannel;
   ASN1BOOL mediaControlGuaranteedDelivery;
   H245RedundancyEncoding redundancyEncoding;
   ASN1UINT8 sessionDependency;
   H245TerminalLabel destination;
   DList extElem1;
} H245CommunicationModeTableEntry;

EXTERN int asn1PE_H245CommunicationModeTableEntry (OOCTXT* pctxt, H245CommunicationModeTableEntry* pvalue);

EXTERN int asn1PD_H245CommunicationModeTableEntry (OOCTXT* pctxt, H245CommunicationModeTableEntry* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeResponse_communicationModeTable          */
/*                                                            */
/**************************************************************/

/* List of H245CommunicationModeTableEntry */
typedef DList H245CommunicationModeResponse_communicationModeTable;

EXTERN int asn1PE_H245CommunicationModeResponse_communicationModeTable (OOCTXT* pctxt, H245CommunicationModeResponse_communicationModeTable value);

EXTERN int asn1PD_H245CommunicationModeResponse_communicationModeTable (OOCTXT* pctxt, H245CommunicationModeResponse_communicationModeTable* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeResponse                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CommunicationModeResponse_communicationModeTable 1
#define T_H245CommunicationModeResponse_extElem1 2

typedef struct EXTERN H245CommunicationModeResponse {
   int t;
   union {
      /* t = 1 */
      H245CommunicationModeResponse_communicationModeTable *communicationModeTable;
      /* t = 2 */
      ASN1OpenType *extElem1;
   } u;
} H245CommunicationModeResponse;

EXTERN int asn1PE_H245CommunicationModeResponse (OOCTXT* pctxt, H245CommunicationModeResponse* pvalue);

EXTERN int asn1PD_H245CommunicationModeResponse (OOCTXT* pctxt, H245CommunicationModeResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_mCTerminalIDResponse                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_mCTerminalIDResponse {
   H245TerminalLabel terminalLabel;
   H245TerminalID terminalID;
   DList extElem1;
} H245ConferenceResponse_mCTerminalIDResponse;

EXTERN int asn1PE_H245ConferenceResponse_mCTerminalIDResponse (OOCTXT* pctxt, H245ConferenceResponse_mCTerminalIDResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_mCTerminalIDResponse (OOCTXT* pctxt, H245ConferenceResponse_mCTerminalIDResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_terminalIDResponse                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_terminalIDResponse {
   H245TerminalLabel terminalLabel;
   H245TerminalID terminalID;
   DList extElem1;
} H245ConferenceResponse_terminalIDResponse;

EXTERN int asn1PE_H245ConferenceResponse_terminalIDResponse (OOCTXT* pctxt, H245ConferenceResponse_terminalIDResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_terminalIDResponse (OOCTXT* pctxt, H245ConferenceResponse_terminalIDResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_conferenceIDResponse                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_conferenceIDResponse {
   H245TerminalLabel terminalLabel;
   H245ConferenceID conferenceID;
   DList extElem1;
} H245ConferenceResponse_conferenceIDResponse;

EXTERN int asn1PE_H245ConferenceResponse_conferenceIDResponse (OOCTXT* pctxt, H245ConferenceResponse_conferenceIDResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_conferenceIDResponse (OOCTXT* pctxt, H245ConferenceResponse_conferenceIDResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_passwordResponse                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_passwordResponse {
   H245TerminalLabel terminalLabel;
   H245Password password;
   DList extElem1;
} H245ConferenceResponse_passwordResponse;

EXTERN int asn1PE_H245ConferenceResponse_passwordResponse (OOCTXT* pctxt, H245ConferenceResponse_passwordResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_passwordResponse (OOCTXT* pctxt, H245ConferenceResponse_passwordResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_terminalListResponse                   */
/*                                                            */
/**************************************************************/

/* List of H245TerminalLabel */
typedef DList H245ConferenceResponse_terminalListResponse;

EXTERN int asn1PE_H245ConferenceResponse_terminalListResponse (OOCTXT* pctxt, H245ConferenceResponse_terminalListResponse value);

EXTERN int asn1PD_H245ConferenceResponse_terminalListResponse (OOCTXT* pctxt, H245ConferenceResponse_terminalListResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_makeMeChairResponse                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceResponse_makeMeChairResponse_grantedChairToken 1
#define T_H245ConferenceResponse_makeMeChairResponse_deniedChairToken 2
#define T_H245ConferenceResponse_makeMeChairResponse_extElem1 3

typedef struct EXTERN H245ConferenceResponse_makeMeChairResponse {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceResponse_makeMeChairResponse;

EXTERN int asn1PE_H245ConferenceResponse_makeMeChairResponse (OOCTXT* pctxt, H245ConferenceResponse_makeMeChairResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_makeMeChairResponse (OOCTXT* pctxt, H245ConferenceResponse_makeMeChairResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_extensionAddressResponse               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_extensionAddressResponse {
   H245TerminalID extensionAddress;
   DList extElem1;
} H245ConferenceResponse_extensionAddressResponse;

EXTERN int asn1PE_H245ConferenceResponse_extensionAddressResponse (OOCTXT* pctxt, H245ConferenceResponse_extensionAddressResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_extensionAddressResponse (OOCTXT* pctxt, H245ConferenceResponse_extensionAddressResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_chairTokenOwnerResponse                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_chairTokenOwnerResponse {
   H245TerminalLabel terminalLabel;
   H245TerminalID terminalID;
   DList extElem1;
} H245ConferenceResponse_chairTokenOwnerResponse;

EXTERN int asn1PE_H245ConferenceResponse_chairTokenOwnerResponse (OOCTXT* pctxt, H245ConferenceResponse_chairTokenOwnerResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_chairTokenOwnerResponse (OOCTXT* pctxt, H245ConferenceResponse_chairTokenOwnerResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_terminalCertificateResponse            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245ConferenceResponse_terminalCertificateResponse {
   struct {
      unsigned terminalLabelPresent : 1;
      unsigned certificateResponsePresent : 1;
   } m;
   H245TerminalLabel terminalLabel;
   ASN1DynOctStr certificateResponse;
   DList extElem1;
} H245ConferenceResponse_terminalCertificateResponse;

EXTERN int asn1PE_H245ConferenceResponse_terminalCertificateResponse (OOCTXT* pctxt, H245ConferenceResponse_terminalCertificateResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_terminalCertificateResponse (OOCTXT* pctxt, H245ConferenceResponse_terminalCertificateResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_broadcastMyLogicalChannelResponse      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceResponse_broadcastMyLogicalChannelResponse_grantedBroadcastMyLogicalChannel 1
#define T_H245ConferenceResponse_broadcastMyLogicalChannelResponse_deniedBroadcastMyLogicalChannel 2
#define T_H245ConferenceResponse_broadcastMyLogicalChannelResponse_extElem1 3

typedef struct EXTERN H245ConferenceResponse_broadcastMyLogicalChannelResponse {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceResponse_broadcastMyLogicalChannelResponse;

EXTERN int asn1PE_H245ConferenceResponse_broadcastMyLogicalChannelResponse (OOCTXT* pctxt, H245ConferenceResponse_broadcastMyLogicalChannelResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_broadcastMyLogicalChannelResponse (OOCTXT* pctxt, H245ConferenceResponse_broadcastMyLogicalChannelResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_makeTerminalBroadcasterResponse        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceResponse_makeTerminalBroadcasterResponse_grantedMakeTerminalBroadcaster 1
#define T_H245ConferenceResponse_makeTerminalBroadcasterResponse_deniedMakeTerminalBroadcaster 2
#define T_H245ConferenceResponse_makeTerminalBroadcasterResponse_extElem1 3

typedef struct EXTERN H245ConferenceResponse_makeTerminalBroadcasterResponse {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceResponse_makeTerminalBroadcasterResponse;

EXTERN int asn1PE_H245ConferenceResponse_makeTerminalBroadcasterResponse (OOCTXT* pctxt, H245ConferenceResponse_makeTerminalBroadcasterResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_makeTerminalBroadcasterResponse (OOCTXT* pctxt, H245ConferenceResponse_makeTerminalBroadcasterResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse_sendThisSourceResponse                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceResponse_sendThisSourceResponse_grantedSendThisSource 1
#define T_H245ConferenceResponse_sendThisSourceResponse_deniedSendThisSource 2
#define T_H245ConferenceResponse_sendThisSourceResponse_extElem1 3

typedef struct EXTERN H245ConferenceResponse_sendThisSourceResponse {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceResponse_sendThisSourceResponse;

EXTERN int asn1PE_H245ConferenceResponse_sendThisSourceResponse (OOCTXT* pctxt, H245ConferenceResponse_sendThisSourceResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse_sendThisSourceResponse (OOCTXT* pctxt, H245ConferenceResponse_sendThisSourceResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalInformation                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalInformation {
   H245TerminalLabel terminalLabel;
   H245TerminalID terminalID;
   DList extElem1;
} H245TerminalInformation;

EXTERN int asn1PE_H245TerminalInformation (OOCTXT* pctxt, H245TerminalInformation* pvalue);

EXTERN int asn1PD_H245TerminalInformation (OOCTXT* pctxt, H245TerminalInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245TerminalInformation                             */
/*                                                            */
/**************************************************************/

/* List of H245TerminalInformation */
typedef DList H245_SeqOfH245TerminalInformation;

EXTERN int asn1PE_H245_SeqOfH245TerminalInformation (OOCTXT* pctxt, H245_SeqOfH245TerminalInformation value);

EXTERN int asn1PD_H245_SeqOfH245TerminalInformation (OOCTXT* pctxt, H245_SeqOfH245TerminalInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestAllTerminalIDsResponse                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestAllTerminalIDsResponse {
   H245_SeqOfH245TerminalInformation terminalInformation;
   DList extElem1;
} H245RequestAllTerminalIDsResponse;

EXTERN int asn1PE_H245RequestAllTerminalIDsResponse (OOCTXT* pctxt, H245RequestAllTerminalIDsResponse* pvalue);

EXTERN int asn1PD_H245RequestAllTerminalIDsResponse (OOCTXT* pctxt, H245RequestAllTerminalIDsResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  RemoteMCResponse_reject                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RemoteMCResponse_reject_unspecified 1
#define T_H245RemoteMCResponse_reject_functionNotSupported 2
#define T_H245RemoteMCResponse_reject_extElem1 3

typedef struct EXTERN H245RemoteMCResponse_reject {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245RemoteMCResponse_reject;

EXTERN int asn1PE_H245RemoteMCResponse_reject (OOCTXT* pctxt, H245RemoteMCResponse_reject* pvalue);

EXTERN int asn1PD_H245RemoteMCResponse_reject (OOCTXT* pctxt, H245RemoteMCResponse_reject* pvalue);

/**************************************************************/
/*                                                            */
/*  RemoteMCResponse                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245RemoteMCResponse_accept   1
#define T_H245RemoteMCResponse_reject   2
#define T_H245RemoteMCResponse_extElem1 3

typedef struct EXTERN H245RemoteMCResponse {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245RemoteMCResponse_reject *reject;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245RemoteMCResponse;

EXTERN int asn1PE_H245RemoteMCResponse (OOCTXT* pctxt, H245RemoteMCResponse* pvalue);

EXTERN int asn1PD_H245RemoteMCResponse (OOCTXT* pctxt, H245RemoteMCResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceResponse                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceResponse_mCTerminalIDResponse 1
#define T_H245ConferenceResponse_terminalIDResponse 2
#define T_H245ConferenceResponse_conferenceIDResponse 3
#define T_H245ConferenceResponse_passwordResponse 4
#define T_H245ConferenceResponse_terminalListResponse 5
#define T_H245ConferenceResponse_videoCommandReject 6
#define T_H245ConferenceResponse_terminalDropReject 7
#define T_H245ConferenceResponse_makeMeChairResponse 8
#define T_H245ConferenceResponse_extensionAddressResponse 9
#define T_H245ConferenceResponse_chairTokenOwnerResponse 10
#define T_H245ConferenceResponse_terminalCertificateResponse 11
#define T_H245ConferenceResponse_broadcastMyLogicalChannelResponse 12
#define T_H245ConferenceResponse_makeTerminalBroadcasterResponse 13
#define T_H245ConferenceResponse_sendThisSourceResponse 14
#define T_H245ConferenceResponse_requestAllTerminalIDsResponse 15
#define T_H245ConferenceResponse_remoteMCResponse 16
#define T_H245ConferenceResponse_extElem1 17

typedef struct EXTERN H245ConferenceResponse {
   int t;
   union {
      /* t = 1 */
      H245ConferenceResponse_mCTerminalIDResponse *mCTerminalIDResponse;
      /* t = 2 */
      H245ConferenceResponse_terminalIDResponse *terminalIDResponse;
      /* t = 3 */
      H245ConferenceResponse_conferenceIDResponse *conferenceIDResponse;
      /* t = 4 */
      H245ConferenceResponse_passwordResponse *passwordResponse;
      /* t = 5 */
      H245ConferenceResponse_terminalListResponse *terminalListResponse;
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      H245ConferenceResponse_makeMeChairResponse *makeMeChairResponse;
      /* t = 9 */
      H245ConferenceResponse_extensionAddressResponse *extensionAddressResponse;
      /* t = 10 */
      H245ConferenceResponse_chairTokenOwnerResponse *chairTokenOwnerResponse;
      /* t = 11 */
      H245ConferenceResponse_terminalCertificateResponse *terminalCertificateResponse;
      /* t = 12 */
      H245ConferenceResponse_broadcastMyLogicalChannelResponse *broadcastMyLogicalChannelResponse;
      /* t = 13 */
      H245ConferenceResponse_makeTerminalBroadcasterResponse *makeTerminalBroadcasterResponse;
      /* t = 14 */
      H245ConferenceResponse_sendThisSourceResponse *sendThisSourceResponse;
      /* t = 15 */
      H245RequestAllTerminalIDsResponse *requestAllTerminalIDsResponse;
      /* t = 16 */
      H245RemoteMCResponse *remoteMCResponse;
      /* t = 17 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceResponse;

EXTERN int asn1PE_H245ConferenceResponse (OOCTXT* pctxt, H245ConferenceResponse* pvalue);

EXTERN int asn1PD_H245ConferenceResponse (OOCTXT* pctxt, H245ConferenceResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse_callInformation                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkResponse_callInformation {
   H245DialingInformation dialingInformation;
   ASN1UINT callAssociationNumber;
   DList extElem1;
} H245MultilinkResponse_callInformation;

EXTERN int asn1PE_H245MultilinkResponse_callInformation (OOCTXT* pctxt, H245MultilinkResponse_callInformation* pvalue);

EXTERN int asn1PD_H245MultilinkResponse_callInformation (OOCTXT* pctxt, H245MultilinkResponse_callInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse_addConnection_responseCode_rejected     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultilinkResponse_addConnection_responseCode_rejected_connectionsNotAvailable 1
#define T_H245MultilinkResponse_addConnection_responseCode_rejected_userRejected 2
#define T_H245MultilinkResponse_addConnection_responseCode_rejected_extElem1 3

typedef struct EXTERN H245MultilinkResponse_addConnection_responseCode_rejected {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245MultilinkResponse_addConnection_responseCode_rejected;

EXTERN int asn1PE_H245MultilinkResponse_addConnection_responseCode_rejected (OOCTXT* pctxt, H245MultilinkResponse_addConnection_responseCode_rejected* pvalue);

EXTERN int asn1PD_H245MultilinkResponse_addConnection_responseCode_rejected (OOCTXT* pctxt, H245MultilinkResponse_addConnection_responseCode_rejected* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse_addConnection_responseCode              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultilinkResponse_addConnection_responseCode_accepted 1
#define T_H245MultilinkResponse_addConnection_responseCode_rejected 2
#define T_H245MultilinkResponse_addConnection_responseCode_extElem1 3

typedef struct EXTERN H245MultilinkResponse_addConnection_responseCode {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H245MultilinkResponse_addConnection_responseCode_rejected *rejected;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245MultilinkResponse_addConnection_responseCode;

EXTERN int asn1PE_H245MultilinkResponse_addConnection_responseCode (OOCTXT* pctxt, H245MultilinkResponse_addConnection_responseCode* pvalue);

EXTERN int asn1PD_H245MultilinkResponse_addConnection_responseCode (OOCTXT* pctxt, H245MultilinkResponse_addConnection_responseCode* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse_addConnection                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkResponse_addConnection {
   H245SequenceNumber sequenceNumber;
   H245MultilinkResponse_addConnection_responseCode responseCode;
   DList extElem1;
} H245MultilinkResponse_addConnection;

EXTERN int asn1PE_H245MultilinkResponse_addConnection (OOCTXT* pctxt, H245MultilinkResponse_addConnection* pvalue);

EXTERN int asn1PD_H245MultilinkResponse_addConnection (OOCTXT* pctxt, H245MultilinkResponse_addConnection* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse_removeConnection                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkResponse_removeConnection {
   H245ConnectionIdentifier connectionIdentifier;
   DList extElem1;
} H245MultilinkResponse_removeConnection;

EXTERN int asn1PE_H245MultilinkResponse_removeConnection (OOCTXT* pctxt, H245MultilinkResponse_removeConnection* pvalue);

EXTERN int asn1PD_H245MultilinkResponse_removeConnection (OOCTXT* pctxt, H245MultilinkResponse_removeConnection* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse_maximumHeaderInterval                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkResponse_maximumHeaderInterval {
   ASN1USINT currentInterval;
   DList extElem1;
} H245MultilinkResponse_maximumHeaderInterval;

EXTERN int asn1PE_H245MultilinkResponse_maximumHeaderInterval (OOCTXT* pctxt, H245MultilinkResponse_maximumHeaderInterval* pvalue);

EXTERN int asn1PD_H245MultilinkResponse_maximumHeaderInterval (OOCTXT* pctxt, H245MultilinkResponse_maximumHeaderInterval* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkResponse                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultilinkResponse_nonStandard 1
#define T_H245MultilinkResponse_callInformation 2
#define T_H245MultilinkResponse_addConnection 3
#define T_H245MultilinkResponse_removeConnection 4
#define T_H245MultilinkResponse_maximumHeaderInterval 5
#define T_H245MultilinkResponse_extElem1 6

typedef struct EXTERN H245MultilinkResponse {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245MultilinkResponse_callInformation *callInformation;
      /* t = 3 */
      H245MultilinkResponse_addConnection *addConnection;
      /* t = 4 */
      H245MultilinkResponse_removeConnection *removeConnection;
      /* t = 5 */
      H245MultilinkResponse_maximumHeaderInterval *maximumHeaderInterval;
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H245MultilinkResponse;

EXTERN int asn1PE_H245MultilinkResponse (OOCTXT* pctxt, H245MultilinkResponse* pvalue);

EXTERN int asn1PD_H245MultilinkResponse (OOCTXT* pctxt, H245MultilinkResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  LogicalChannelRateAcknowledge                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245LogicalChannelRateAcknowledge {
   H245SequenceNumber sequenceNumber;
   H245LogicalChannelNumber logicalChannelNumber;
   H245MaximumBitRate maximumBitRate;
   DList extElem1;
} H245LogicalChannelRateAcknowledge;

EXTERN int asn1PE_H245LogicalChannelRateAcknowledge (OOCTXT* pctxt, H245LogicalChannelRateAcknowledge* pvalue);

EXTERN int asn1PD_H245LogicalChannelRateAcknowledge (OOCTXT* pctxt, H245LogicalChannelRateAcknowledge* pvalue);

/**************************************************************/
/*                                                            */
/*  LogicalChannelRateRejectReason                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245LogicalChannelRateRejectReason_undefinedReason 1
#define T_H245LogicalChannelRateRejectReason_insufficientResources 2
#define T_H245LogicalChannelRateRejectReason_extElem1 3

typedef struct EXTERN H245LogicalChannelRateRejectReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245LogicalChannelRateRejectReason;

EXTERN int asn1PE_H245LogicalChannelRateRejectReason (OOCTXT* pctxt, H245LogicalChannelRateRejectReason* pvalue);

EXTERN int asn1PD_H245LogicalChannelRateRejectReason (OOCTXT* pctxt, H245LogicalChannelRateRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  LogicalChannelRateReject                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245LogicalChannelRateReject {
   struct {
      unsigned currentMaximumBitRatePresent : 1;
   } m;
   H245SequenceNumber sequenceNumber;
   H245LogicalChannelNumber logicalChannelNumber;
   H245LogicalChannelRateRejectReason rejectReason;
   H245MaximumBitRate currentMaximumBitRate;
   DList extElem1;
} H245LogicalChannelRateReject;

EXTERN int asn1PE_H245LogicalChannelRateReject (OOCTXT* pctxt, H245LogicalChannelRateReject* pvalue);

EXTERN int asn1PD_H245LogicalChannelRateReject (OOCTXT* pctxt, H245LogicalChannelRateReject* pvalue);

/**************************************************************/
/*                                                            */
/*  ResponseMessage                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ResponseMessage_nonStandard 1
#define T_H245ResponseMessage_masterSlaveDeterminationAck 2
#define T_H245ResponseMessage_masterSlaveDeterminationReject 3
#define T_H245ResponseMessage_terminalCapabilitySetAck 4
#define T_H245ResponseMessage_terminalCapabilitySetReject 5
#define T_H245ResponseMessage_openLogicalChannelAck 6
#define T_H245ResponseMessage_openLogicalChannelReject 7
#define T_H245ResponseMessage_closeLogicalChannelAck 8
#define T_H245ResponseMessage_requestChannelCloseAck 9
#define T_H245ResponseMessage_requestChannelCloseReject 10
#define T_H245ResponseMessage_multiplexEntrySendAck 11
#define T_H245ResponseMessage_multiplexEntrySendReject 12
#define T_H245ResponseMessage_requestMultiplexEntryAck 13
#define T_H245ResponseMessage_requestMultiplexEntryReject 14
#define T_H245ResponseMessage_requestModeAck 15
#define T_H245ResponseMessage_requestModeReject 16
#define T_H245ResponseMessage_roundTripDelayResponse 17
#define T_H245ResponseMessage_maintenanceLoopAck 18
#define T_H245ResponseMessage_maintenanceLoopReject 19
#define T_H245ResponseMessage_communicationModeResponse 20
#define T_H245ResponseMessage_conferenceResponse 21
#define T_H245ResponseMessage_multilinkResponse 22
#define T_H245ResponseMessage_logicalChannelRateAcknowledge 23
#define T_H245ResponseMessage_logicalChannelRateReject 24
#define T_H245ResponseMessage_extElem1  25

typedef struct EXTERN H245ResponseMessage {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245MasterSlaveDeterminationAck *masterSlaveDeterminationAck;
      /* t = 3 */
      H245MasterSlaveDeterminationReject *masterSlaveDeterminationReject;
      /* t = 4 */
      H245TerminalCapabilitySetAck *terminalCapabilitySetAck;
      /* t = 5 */
      H245TerminalCapabilitySetReject *terminalCapabilitySetReject;
      /* t = 6 */
      H245OpenLogicalChannelAck *openLogicalChannelAck;
      /* t = 7 */
      H245OpenLogicalChannelReject *openLogicalChannelReject;
      /* t = 8 */
      H245CloseLogicalChannelAck *closeLogicalChannelAck;
      /* t = 9 */
      H245RequestChannelCloseAck *requestChannelCloseAck;
      /* t = 10 */
      H245RequestChannelCloseReject *requestChannelCloseReject;
      /* t = 11 */
      H245MultiplexEntrySendAck *multiplexEntrySendAck;
      /* t = 12 */
      H245MultiplexEntrySendReject *multiplexEntrySendReject;
      /* t = 13 */
      H245RequestMultiplexEntryAck *requestMultiplexEntryAck;
      /* t = 14 */
      H245RequestMultiplexEntryReject *requestMultiplexEntryReject;
      /* t = 15 */
      H245RequestModeAck *requestModeAck;
      /* t = 16 */
      H245RequestModeReject *requestModeReject;
      /* t = 17 */
      H245RoundTripDelayResponse *roundTripDelayResponse;
      /* t = 18 */
      H245MaintenanceLoopAck *maintenanceLoopAck;
      /* t = 19 */
      H245MaintenanceLoopReject *maintenanceLoopReject;
      /* t = 20 */
      H245CommunicationModeResponse *communicationModeResponse;
      /* t = 21 */
      H245ConferenceResponse *conferenceResponse;
      /* t = 22 */
      H245MultilinkResponse *multilinkResponse;
      /* t = 23 */
      H245LogicalChannelRateAcknowledge *logicalChannelRateAcknowledge;
      /* t = 24 */
      H245LogicalChannelRateReject *logicalChannelRateReject;
      /* t = 25 */
      ASN1OpenType *extElem1;
   } u;
} H245ResponseMessage;

EXTERN int asn1PE_H245ResponseMessage (OOCTXT* pctxt, H245ResponseMessage* pvalue);

EXTERN int asn1PD_H245ResponseMessage (OOCTXT* pctxt, H245ResponseMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  MaintenanceLoopOffCommand                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MaintenanceLoopOffCommand {
   DList extElem1;
} H245MaintenanceLoopOffCommand;

EXTERN int asn1PE_H245MaintenanceLoopOffCommand (OOCTXT* pctxt, H245MaintenanceLoopOffCommand* pvalue);

EXTERN int asn1PD_H245MaintenanceLoopOffCommand (OOCTXT* pctxt, H245MaintenanceLoopOffCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  SendTerminalCapabilitySet_specificRequest_capabilityTabl  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers {
   ASN1UINT n;
   H245CapabilityTableEntryNumber *elem;
} H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers;

EXTERN int asn1PE_H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers (OOCTXT* pctxt, H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers* pvalue);

EXTERN int asn1PD_H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers (OOCTXT* pctxt, H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers* pvalue);

/**************************************************************/
/*                                                            */
/*  SendTerminalCapabilitySet_specificRequest_capabilityDesc  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers {
   ASN1UINT n;
   H245CapabilityDescriptorNumber elem[256];
} H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers;

EXTERN int asn1PE_H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers (OOCTXT* pctxt, H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers* pvalue);

EXTERN int asn1PD_H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers (OOCTXT* pctxt, H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers* pvalue);

/**************************************************************/
/*                                                            */
/*  SendTerminalCapabilitySet_specificRequest                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245SendTerminalCapabilitySet_specificRequest {
   struct {
      unsigned capabilityTableEntryNumbersPresent : 1;
      unsigned capabilityDescriptorNumbersPresent : 1;
   } m;
   ASN1BOOL multiplexCapability;
   H245SendTerminalCapabilitySet_specificRequest_capabilityTableEntryNumbers capabilityTableEntryNumbers;
   H245SendTerminalCapabilitySet_specificRequest_capabilityDescriptorNumbers capabilityDescriptorNumbers;
   DList extElem1;
} H245SendTerminalCapabilitySet_specificRequest;

EXTERN int asn1PE_H245SendTerminalCapabilitySet_specificRequest (OOCTXT* pctxt, H245SendTerminalCapabilitySet_specificRequest* pvalue);

EXTERN int asn1PD_H245SendTerminalCapabilitySet_specificRequest (OOCTXT* pctxt, H245SendTerminalCapabilitySet_specificRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  SendTerminalCapabilitySet                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245SendTerminalCapabilitySet_specificRequest 1
#define T_H245SendTerminalCapabilitySet_genericRequest 2
#define T_H245SendTerminalCapabilitySet_extElem1 3

typedef struct EXTERN H245SendTerminalCapabilitySet {
   int t;
   union {
      /* t = 1 */
      H245SendTerminalCapabilitySet_specificRequest *specificRequest;
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245SendTerminalCapabilitySet;

EXTERN int asn1PE_H245SendTerminalCapabilitySet (OOCTXT* pctxt, H245SendTerminalCapabilitySet* pvalue);

EXTERN int asn1PD_H245SendTerminalCapabilitySet (OOCTXT* pctxt, H245SendTerminalCapabilitySet* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionCommand_encryptionAlgorithmID                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EncryptionCommand_encryptionAlgorithmID {
   H245SequenceNumber h233AlgorithmIdentifier;
   H245NonStandardParameter associatedAlgorithm;
} H245EncryptionCommand_encryptionAlgorithmID;

EXTERN int asn1PE_H245EncryptionCommand_encryptionAlgorithmID (OOCTXT* pctxt, H245EncryptionCommand_encryptionAlgorithmID* pvalue);

EXTERN int asn1PD_H245EncryptionCommand_encryptionAlgorithmID (OOCTXT* pctxt, H245EncryptionCommand_encryptionAlgorithmID* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionCommand                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245EncryptionCommand_encryptionSE 1
#define T_H245EncryptionCommand_encryptionIVRequest 2
#define T_H245EncryptionCommand_encryptionAlgorithmID 3
#define T_H245EncryptionCommand_extElem1 4

typedef struct EXTERN H245EncryptionCommand {
   int t;
   union {
      /* t = 1 */
      ASN1DynOctStr *encryptionSE;
      /* t = 2 */
      /* t = 3 */
      H245EncryptionCommand_encryptionAlgorithmID *encryptionAlgorithmID;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245EncryptionCommand;

EXTERN int asn1PE_H245EncryptionCommand (OOCTXT* pctxt, H245EncryptionCommand* pvalue);

EXTERN int asn1PD_H245EncryptionCommand (OOCTXT* pctxt, H245EncryptionCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  FlowControlCommand_scope                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FlowControlCommand_scope_logicalChannelNumber 1
#define T_H245FlowControlCommand_scope_resourceID 2
#define T_H245FlowControlCommand_scope_wholeMultiplex 3

typedef struct EXTERN H245FlowControlCommand_scope {
   int t;
   union {
      /* t = 1 */
      H245LogicalChannelNumber logicalChannelNumber;
      /* t = 2 */
      ASN1USINT resourceID;
      /* t = 3 */
   } u;
} H245FlowControlCommand_scope;

EXTERN int asn1PE_H245FlowControlCommand_scope (OOCTXT* pctxt, H245FlowControlCommand_scope* pvalue);

EXTERN int asn1PD_H245FlowControlCommand_scope (OOCTXT* pctxt, H245FlowControlCommand_scope* pvalue);

/**************************************************************/
/*                                                            */
/*  FlowControlCommand_restriction                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FlowControlCommand_restriction_maximumBitRate 1
#define T_H245FlowControlCommand_restriction_noRestriction 2

typedef struct EXTERN H245FlowControlCommand_restriction {
   int t;
   union {
      /* t = 1 */
      ASN1UINT maximumBitRate;
      /* t = 2 */
   } u;
} H245FlowControlCommand_restriction;

EXTERN int asn1PE_H245FlowControlCommand_restriction (OOCTXT* pctxt, H245FlowControlCommand_restriction* pvalue);

EXTERN int asn1PD_H245FlowControlCommand_restriction (OOCTXT* pctxt, H245FlowControlCommand_restriction* pvalue);

/**************************************************************/
/*                                                            */
/*  FlowControlCommand                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FlowControlCommand {
   H245FlowControlCommand_scope scope;
   H245FlowControlCommand_restriction restriction;
   DList extElem1;
} H245FlowControlCommand;

EXTERN int asn1PE_H245FlowControlCommand (OOCTXT* pctxt, H245FlowControlCommand* pvalue);

EXTERN int asn1PD_H245FlowControlCommand (OOCTXT* pctxt, H245FlowControlCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  EndSessionCommand_gstnOptions                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245EndSessionCommand_gstnOptions_telephonyMode 1
#define T_H245EndSessionCommand_gstnOptions_v8bis 2
#define T_H245EndSessionCommand_gstnOptions_v34DSVD 3
#define T_H245EndSessionCommand_gstnOptions_v34DuplexFAX 4
#define T_H245EndSessionCommand_gstnOptions_v34H324 5
#define T_H245EndSessionCommand_gstnOptions_extElem1 6

typedef struct EXTERN H245EndSessionCommand_gstnOptions {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H245EndSessionCommand_gstnOptions;

EXTERN int asn1PE_H245EndSessionCommand_gstnOptions (OOCTXT* pctxt, H245EndSessionCommand_gstnOptions* pvalue);

EXTERN int asn1PD_H245EndSessionCommand_gstnOptions (OOCTXT* pctxt, H245EndSessionCommand_gstnOptions* pvalue);

/**************************************************************/
/*                                                            */
/*  EndSessionCommand_isdnOptions                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245EndSessionCommand_isdnOptions_telephonyMode 1
#define T_H245EndSessionCommand_isdnOptions_v140 2
#define T_H245EndSessionCommand_isdnOptions_terminalOnHold 3
#define T_H245EndSessionCommand_isdnOptions_extElem1 4

typedef struct EXTERN H245EndSessionCommand_isdnOptions {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245EndSessionCommand_isdnOptions;

EXTERN int asn1PE_H245EndSessionCommand_isdnOptions (OOCTXT* pctxt, H245EndSessionCommand_isdnOptions* pvalue);

EXTERN int asn1PD_H245EndSessionCommand_isdnOptions (OOCTXT* pctxt, H245EndSessionCommand_isdnOptions* pvalue);

/**************************************************************/
/*                                                            */
/*  EndSessionCommand                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245EndSessionCommand_nonStandard 1
#define T_H245EndSessionCommand_disconnect 2
#define T_H245EndSessionCommand_gstnOptions 3
#define T_H245EndSessionCommand_isdnOptions 4
#define T_H245EndSessionCommand_extElem1 5

typedef struct EXTERN H245EndSessionCommand {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      H245EndSessionCommand_gstnOptions *gstnOptions;
      /* t = 4 */
      H245EndSessionCommand_isdnOptions *isdnOptions;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245EndSessionCommand;

EXTERN int asn1PE_H245EndSessionCommand (OOCTXT* pctxt, H245EndSessionCommand* pvalue);

EXTERN int asn1PD_H245EndSessionCommand (OOCTXT* pctxt, H245EndSessionCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type_videoFastUpdateGOB              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousCommand_type_videoFastUpdateGOB {
   ASN1UINT8 firstGOB;
   ASN1UINT8 numberOfGOBs;
} H245MiscellaneousCommand_type_videoFastUpdateGOB;

EXTERN int asn1PE_H245MiscellaneousCommand_type_videoFastUpdateGOB (OOCTXT* pctxt, H245MiscellaneousCommand_type_videoFastUpdateGOB* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type_videoFastUpdateGOB (OOCTXT* pctxt, H245MiscellaneousCommand_type_videoFastUpdateGOB* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type_videoFastUpdateMB               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousCommand_type_videoFastUpdateMB {
   struct {
      unsigned firstGOBPresent : 1;
      unsigned firstMBPresent : 1;
   } m;
   ASN1UINT8 firstGOB;
   ASN1USINT firstMB;
   ASN1USINT numberOfMBs;
   DList extElem1;
} H245MiscellaneousCommand_type_videoFastUpdateMB;

EXTERN int asn1PE_H245MiscellaneousCommand_type_videoFastUpdateMB (OOCTXT* pctxt, H245MiscellaneousCommand_type_videoFastUpdateMB* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type_videoFastUpdateMB (OOCTXT* pctxt, H245MiscellaneousCommand_type_videoFastUpdateMB* pvalue);

/**************************************************************/
/*                                                            */
/*  KeyProtectionMethod                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245KeyProtectionMethod {
   ASN1BOOL secureChannel;
   ASN1BOOL sharedSecret;
   ASN1BOOL certProtectedKey;
   DList extElem1;
} H245KeyProtectionMethod;

EXTERN int asn1PE_H245KeyProtectionMethod (OOCTXT* pctxt, H245KeyProtectionMethod* pvalue);

EXTERN int asn1PD_H245KeyProtectionMethod (OOCTXT* pctxt, H245KeyProtectionMethod* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptionUpdateRequest                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245EncryptionUpdateRequest {
   struct {
      unsigned keyProtectionMethodPresent : 1;
   } m;
   H245KeyProtectionMethod keyProtectionMethod;
   DList extElem1;
} H245EncryptionUpdateRequest;

EXTERN int asn1PE_H245EncryptionUpdateRequest (OOCTXT* pctxt, H245EncryptionUpdateRequest* pvalue);

EXTERN int asn1PD_H245EncryptionUpdateRequest (OOCTXT* pctxt, H245EncryptionUpdateRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type_progressiveRefinementStart_rep  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount_doOneProgression 1
#define T_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount_doContinuousProgressions 2
#define T_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount_doOneIndependentProgression 3
#define T_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount_doContinuousIndependentProgressions 4
#define T_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount_extElem1 5

typedef struct EXTERN H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount;

EXTERN int asn1PE_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount (OOCTXT* pctxt, H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount (OOCTXT* pctxt, H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type_progressiveRefinementStart      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousCommand_type_progressiveRefinementStart {
   H245MiscellaneousCommand_type_progressiveRefinementStart_repeatCount repeatCount;
   DList extElem1;
} H245MiscellaneousCommand_type_progressiveRefinementStart;

EXTERN int asn1PE_H245MiscellaneousCommand_type_progressiveRefinementStart (OOCTXT* pctxt, H245MiscellaneousCommand_type_progressiveRefinementStart* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type_progressiveRefinementStart (OOCTXT* pctxt, H245MiscellaneousCommand_type_progressiveRefinementStart* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type_videoBadMBs                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousCommand_type_videoBadMBs {
   ASN1USINT firstMB;
   ASN1USINT numberOfMBs;
   ASN1USINT temporalReference;
   DList extElem1;
} H245MiscellaneousCommand_type_videoBadMBs;

EXTERN int asn1PE_H245MiscellaneousCommand_type_videoBadMBs (OOCTXT* pctxt, H245MiscellaneousCommand_type_videoBadMBs* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type_videoBadMBs (OOCTXT* pctxt, H245MiscellaneousCommand_type_videoBadMBs* pvalue);

/**************************************************************/
/*                                                            */
/*  PictureReference                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245PictureReference_pictureNumber 1
#define T_H245PictureReference_longTermPictureIndex 2
#define T_H245PictureReference_extElem1 3

typedef struct EXTERN H245PictureReference {
   int t;
   union {
      /* t = 1 */
      ASN1USINT pictureNumber;
      /* t = 2 */
      ASN1UINT8 longTermPictureIndex;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245PictureReference;

EXTERN int asn1PE_H245PictureReference (OOCTXT* pctxt, H245PictureReference* pvalue);

EXTERN int asn1PD_H245PictureReference (OOCTXT* pctxt, H245PictureReference* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH245PictureReference                                */
/*                                                            */
/**************************************************************/

/* List of H245PictureReference */
typedef DList H245_SeqOfH245PictureReference;

EXTERN int asn1PE_H245_SeqOfH245PictureReference (OOCTXT* pctxt, H245_SeqOfH245PictureReference value);

EXTERN int asn1PD_H245_SeqOfH245PictureReference (OOCTXT* pctxt, H245_SeqOfH245PictureReference* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type_lostPartialPicture              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousCommand_type_lostPartialPicture {
   H245PictureReference pictureReference;
   ASN1USINT firstMB;
   ASN1USINT numberOfMBs;
   DList extElem1;
} H245MiscellaneousCommand_type_lostPartialPicture;

EXTERN int asn1PE_H245MiscellaneousCommand_type_lostPartialPicture (OOCTXT* pctxt, H245MiscellaneousCommand_type_lostPartialPicture* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type_lostPartialPicture (OOCTXT* pctxt, H245MiscellaneousCommand_type_lostPartialPicture* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand_type                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MiscellaneousCommand_type_equaliseDelay 1
#define T_H245MiscellaneousCommand_type_zeroDelay 2
#define T_H245MiscellaneousCommand_type_multipointModeCommand 3
#define T_H245MiscellaneousCommand_type_cancelMultipointModeCommand 4
#define T_H245MiscellaneousCommand_type_videoFreezePicture 5
#define T_H245MiscellaneousCommand_type_videoFastUpdatePicture 6
#define T_H245MiscellaneousCommand_type_videoFastUpdateGOB 7
#define T_H245MiscellaneousCommand_type_videoTemporalSpatialTradeOff 8
#define T_H245MiscellaneousCommand_type_videoSendSyncEveryGOB 9
#define T_H245MiscellaneousCommand_type_videoSendSyncEveryGOBCancel 10
#define T_H245MiscellaneousCommand_type_videoFastUpdateMB 11
#define T_H245MiscellaneousCommand_type_maxH223MUXPDUsize 12
#define T_H245MiscellaneousCommand_type_encryptionUpdate 13
#define T_H245MiscellaneousCommand_type_encryptionUpdateRequest 14
#define T_H245MiscellaneousCommand_type_switchReceiveMediaOff 15
#define T_H245MiscellaneousCommand_type_switchReceiveMediaOn 16
#define T_H245MiscellaneousCommand_type_progressiveRefinementStart 17
#define T_H245MiscellaneousCommand_type_progressiveRefinementAbortOne 18
#define T_H245MiscellaneousCommand_type_progressiveRefinementAbortContinuous 19
#define T_H245MiscellaneousCommand_type_videoBadMBs 20
#define T_H245MiscellaneousCommand_type_lostPicture 21
#define T_H245MiscellaneousCommand_type_lostPartialPicture 22
#define T_H245MiscellaneousCommand_type_recoveryReferencePicture 23
#define T_H245MiscellaneousCommand_type_extElem1 24

typedef struct EXTERN H245MiscellaneousCommand_type {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      H245MiscellaneousCommand_type_videoFastUpdateGOB *videoFastUpdateGOB;
      /* t = 8 */
      ASN1UINT8 videoTemporalSpatialTradeOff;
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      H245MiscellaneousCommand_type_videoFastUpdateMB *videoFastUpdateMB;
      /* t = 12 */
      ASN1USINT maxH223MUXPDUsize;
      /* t = 13 */
      H245EncryptionSync *encryptionUpdate;
      /* t = 14 */
      H245EncryptionUpdateRequest *encryptionUpdateRequest;
      /* t = 15 */
      /* t = 16 */
      /* t = 17 */
      H245MiscellaneousCommand_type_progressiveRefinementStart *progressiveRefinementStart;
      /* t = 18 */
      /* t = 19 */
      /* t = 20 */
      H245MiscellaneousCommand_type_videoBadMBs *videoBadMBs;
      /* t = 21 */
      H245_SeqOfH245PictureReference *lostPicture;
      /* t = 22 */
      H245MiscellaneousCommand_type_lostPartialPicture *lostPartialPicture;
      /* t = 23 */
      H245_SeqOfH245PictureReference *recoveryReferencePicture;
      /* t = 24 */
      ASN1OpenType *extElem1;
   } u;
} H245MiscellaneousCommand_type;

EXTERN int asn1PE_H245MiscellaneousCommand_type (OOCTXT* pctxt, H245MiscellaneousCommand_type* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand_type (OOCTXT* pctxt, H245MiscellaneousCommand_type* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousCommand                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousCommand {
   H245LogicalChannelNumber logicalChannelNumber;
   H245MiscellaneousCommand_type type;
   DList extElem1;
} H245MiscellaneousCommand;

EXTERN int asn1PE_H245MiscellaneousCommand (OOCTXT* pctxt, H245MiscellaneousCommand* pvalue);

EXTERN int asn1PD_H245MiscellaneousCommand (OOCTXT* pctxt, H245MiscellaneousCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeCommand_communicationModeTable           */
/*                                                            */
/**************************************************************/

/* List of H245CommunicationModeTableEntry */
typedef DList H245CommunicationModeCommand_communicationModeTable;

EXTERN int asn1PE_H245CommunicationModeCommand_communicationModeTable (OOCTXT* pctxt, H245CommunicationModeCommand_communicationModeTable value);

EXTERN int asn1PD_H245CommunicationModeCommand_communicationModeTable (OOCTXT* pctxt, H245CommunicationModeCommand_communicationModeTable* pvalue);

/**************************************************************/
/*                                                            */
/*  CommunicationModeCommand                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245CommunicationModeCommand {
   H245CommunicationModeCommand_communicationModeTable communicationModeTable;
   DList extElem1;
} H245CommunicationModeCommand;

EXTERN int asn1PE_H245CommunicationModeCommand (OOCTXT* pctxt, H245CommunicationModeCommand* pvalue);

EXTERN int asn1PD_H245CommunicationModeCommand (OOCTXT* pctxt, H245CommunicationModeCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  SubstituteConferenceIDCommand                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245SubstituteConferenceIDCommand {
   H245SubstituteConferenceIDCommand_conferenceIdentifier conferenceIdentifier;
   DList extElem1;
} H245SubstituteConferenceIDCommand;

EXTERN int asn1PE_H245SubstituteConferenceIDCommand (OOCTXT* pctxt, H245SubstituteConferenceIDCommand* pvalue);

EXTERN int asn1PD_H245SubstituteConferenceIDCommand (OOCTXT* pctxt, H245SubstituteConferenceIDCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceCommand                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceCommand_broadcastMyLogicalChannel 1
#define T_H245ConferenceCommand_cancelBroadcastMyLogicalChannel 2
#define T_H245ConferenceCommand_makeTerminalBroadcaster 3
#define T_H245ConferenceCommand_cancelMakeTerminalBroadcaster 4
#define T_H245ConferenceCommand_sendThisSource 5
#define T_H245ConferenceCommand_cancelSendThisSource 6
#define T_H245ConferenceCommand_dropConference 7
#define T_H245ConferenceCommand_substituteConferenceIDCommand 8
#define T_H245ConferenceCommand_extElem1 9

typedef struct EXTERN H245ConferenceCommand {
   int t;
   union {
      /* t = 1 */
      H245LogicalChannelNumber broadcastMyLogicalChannel;
      /* t = 2 */
      H245LogicalChannelNumber cancelBroadcastMyLogicalChannel;
      /* t = 3 */
      H245TerminalLabel *makeTerminalBroadcaster;
      /* t = 4 */
      /* t = 5 */
      H245TerminalLabel *sendThisSource;
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      H245SubstituteConferenceIDCommand *substituteConferenceIDCommand;
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceCommand;

EXTERN int asn1PE_H245ConferenceCommand (OOCTXT* pctxt, H245ConferenceCommand* pvalue);

EXTERN int asn1PD_H245ConferenceCommand (OOCTXT* pctxt, H245ConferenceCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  H223MultiplexReconfiguration_h223ModeChange               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223MultiplexReconfiguration_h223ModeChange_toLevel0 1
#define T_H245H223MultiplexReconfiguration_h223ModeChange_toLevel1 2
#define T_H245H223MultiplexReconfiguration_h223ModeChange_toLevel2 3
#define T_H245H223MultiplexReconfiguration_h223ModeChange_toLevel2withOptionalHeader 4
#define T_H245H223MultiplexReconfiguration_h223ModeChange_extElem1 5

typedef struct EXTERN H245H223MultiplexReconfiguration_h223ModeChange {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245H223MultiplexReconfiguration_h223ModeChange;

EXTERN int asn1PE_H245H223MultiplexReconfiguration_h223ModeChange (OOCTXT* pctxt, H245H223MultiplexReconfiguration_h223ModeChange* pvalue);

EXTERN int asn1PD_H245H223MultiplexReconfiguration_h223ModeChange (OOCTXT* pctxt, H245H223MultiplexReconfiguration_h223ModeChange* pvalue);

/**************************************************************/
/*                                                            */
/*  H223MultiplexReconfiguration_h223AnnexADoubleFlag         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223MultiplexReconfiguration_h223AnnexADoubleFlag_start 1
#define T_H245H223MultiplexReconfiguration_h223AnnexADoubleFlag_stop 2
#define T_H245H223MultiplexReconfiguration_h223AnnexADoubleFlag_extElem1 3

typedef struct EXTERN H245H223MultiplexReconfiguration_h223AnnexADoubleFlag {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223MultiplexReconfiguration_h223AnnexADoubleFlag;

EXTERN int asn1PE_H245H223MultiplexReconfiguration_h223AnnexADoubleFlag (OOCTXT* pctxt, H245H223MultiplexReconfiguration_h223AnnexADoubleFlag* pvalue);

EXTERN int asn1PD_H245H223MultiplexReconfiguration_h223AnnexADoubleFlag (OOCTXT* pctxt, H245H223MultiplexReconfiguration_h223AnnexADoubleFlag* pvalue);

/**************************************************************/
/*                                                            */
/*  H223MultiplexReconfiguration                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245H223MultiplexReconfiguration_h223ModeChange 1
#define T_H245H223MultiplexReconfiguration_h223AnnexADoubleFlag 2
#define T_H245H223MultiplexReconfiguration_extElem1 3

typedef struct EXTERN H245H223MultiplexReconfiguration {
   int t;
   union {
      /* t = 1 */
      H245H223MultiplexReconfiguration_h223ModeChange *h223ModeChange;
      /* t = 2 */
      H245H223MultiplexReconfiguration_h223AnnexADoubleFlag *h223AnnexADoubleFlag;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245H223MultiplexReconfiguration;

EXTERN int asn1PE_H245H223MultiplexReconfiguration (OOCTXT* pctxt, H245H223MultiplexReconfiguration* pvalue);

EXTERN int asn1PD_H245H223MultiplexReconfiguration (OOCTXT* pctxt, H245H223MultiplexReconfiguration* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_aal_aal1_clockRecovery                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCCommand_aal_aal1_clockRecovery_nullClockRecovery 1
#define T_H245NewATMVCCommand_aal_aal1_clockRecovery_srtsClockRecovery 2
#define T_H245NewATMVCCommand_aal_aal1_clockRecovery_adaptiveClockRecovery 3
#define T_H245NewATMVCCommand_aal_aal1_clockRecovery_extElem1 4

typedef struct EXTERN H245NewATMVCCommand_aal_aal1_clockRecovery {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCCommand_aal_aal1_clockRecovery;

EXTERN int asn1PE_H245NewATMVCCommand_aal_aal1_clockRecovery (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal1_clockRecovery* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_aal_aal1_clockRecovery (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal1_clockRecovery* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_aal_aal1_errorCorrection                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCCommand_aal_aal1_errorCorrection_nullErrorCorrection 1
#define T_H245NewATMVCCommand_aal_aal1_errorCorrection_longInterleaver 2
#define T_H245NewATMVCCommand_aal_aal1_errorCorrection_shortInterleaver 3
#define T_H245NewATMVCCommand_aal_aal1_errorCorrection_errorCorrectionOnly 4
#define T_H245NewATMVCCommand_aal_aal1_errorCorrection_extElem1 5

typedef struct EXTERN H245NewATMVCCommand_aal_aal1_errorCorrection {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCCommand_aal_aal1_errorCorrection;

EXTERN int asn1PE_H245NewATMVCCommand_aal_aal1_errorCorrection (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal1_errorCorrection* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_aal_aal1_errorCorrection (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal1_errorCorrection* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_aal_aal1                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCCommand_aal_aal1 {
   H245NewATMVCCommand_aal_aal1_clockRecovery clockRecovery;
   H245NewATMVCCommand_aal_aal1_errorCorrection errorCorrection;
   ASN1BOOL structuredDataTransfer;
   ASN1BOOL partiallyFilledCells;
   DList extElem1;
} H245NewATMVCCommand_aal_aal1;

EXTERN int asn1PE_H245NewATMVCCommand_aal_aal1 (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal1* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_aal_aal1 (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal1* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_aal_aal5                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCCommand_aal_aal5 {
   ASN1USINT forwardMaximumSDUSize;
   ASN1USINT backwardMaximumSDUSize;
   DList extElem1;
} H245NewATMVCCommand_aal_aal5;

EXTERN int asn1PE_H245NewATMVCCommand_aal_aal5 (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal5* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_aal_aal5 (OOCTXT* pctxt, H245NewATMVCCommand_aal_aal5* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_aal                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCCommand_aal_aal1  1
#define T_H245NewATMVCCommand_aal_aal5  2
#define T_H245NewATMVCCommand_aal_extElem1 3

typedef struct EXTERN H245NewATMVCCommand_aal {
   int t;
   union {
      /* t = 1 */
      H245NewATMVCCommand_aal_aal1 *aal1;
      /* t = 2 */
      H245NewATMVCCommand_aal_aal5 *aal5;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCCommand_aal;

EXTERN int asn1PE_H245NewATMVCCommand_aal (OOCTXT* pctxt, H245NewATMVCCommand_aal* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_aal (OOCTXT* pctxt, H245NewATMVCCommand_aal* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_multiplex                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCCommand_multiplex_noMultiplex 1
#define T_H245NewATMVCCommand_multiplex_transportStream 2
#define T_H245NewATMVCCommand_multiplex_programStream 3
#define T_H245NewATMVCCommand_multiplex_extElem1 4

typedef struct EXTERN H245NewATMVCCommand_multiplex {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCCommand_multiplex;

EXTERN int asn1PE_H245NewATMVCCommand_multiplex (OOCTXT* pctxt, H245NewATMVCCommand_multiplex* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_multiplex (OOCTXT* pctxt, H245NewATMVCCommand_multiplex* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_reverseParameters_multiplex               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCCommand_reverseParameters_multiplex_noMultiplex 1
#define T_H245NewATMVCCommand_reverseParameters_multiplex_transportStream 2
#define T_H245NewATMVCCommand_reverseParameters_multiplex_programStream 3
#define T_H245NewATMVCCommand_reverseParameters_multiplex_extElem1 4

typedef struct EXTERN H245NewATMVCCommand_reverseParameters_multiplex {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCCommand_reverseParameters_multiplex;

EXTERN int asn1PE_H245NewATMVCCommand_reverseParameters_multiplex (OOCTXT* pctxt, H245NewATMVCCommand_reverseParameters_multiplex* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_reverseParameters_multiplex (OOCTXT* pctxt, H245NewATMVCCommand_reverseParameters_multiplex* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand_reverseParameters                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCCommand_reverseParameters {
   ASN1USINT bitRate;
   ASN1BOOL bitRateLockedToPCRClock;
   ASN1BOOL bitRateLockedToNetworkClock;
   H245NewATMVCCommand_reverseParameters_multiplex multiplex;
   DList extElem1;
} H245NewATMVCCommand_reverseParameters;

EXTERN int asn1PE_H245NewATMVCCommand_reverseParameters (OOCTXT* pctxt, H245NewATMVCCommand_reverseParameters* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand_reverseParameters (OOCTXT* pctxt, H245NewATMVCCommand_reverseParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCCommand                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCCommand {
   ASN1USINT resourceID;
   ASN1USINT bitRate;
   ASN1BOOL bitRateLockedToPCRClock;
   ASN1BOOL bitRateLockedToNetworkClock;
   H245NewATMVCCommand_aal aal;
   H245NewATMVCCommand_multiplex multiplex;
   H245NewATMVCCommand_reverseParameters reverseParameters;
   DList extElem1;
} H245NewATMVCCommand;

EXTERN int asn1PE_H245NewATMVCCommand (OOCTXT* pctxt, H245NewATMVCCommand* pvalue);

EXTERN int asn1PD_H245NewATMVCCommand (OOCTXT* pctxt, H245NewATMVCCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  MobileMultilinkReconfigurationCommand_status              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MobileMultilinkReconfigurationCommand_status_synchronized_ 1
#define T_H245MobileMultilinkReconfigurationCommand_status_reconfiguration 2
#define T_H245MobileMultilinkReconfigurationCommand_status_extElem1 3

typedef struct EXTERN H245MobileMultilinkReconfigurationCommand_status {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245MobileMultilinkReconfigurationCommand_status;

EXTERN int asn1PE_H245MobileMultilinkReconfigurationCommand_status (OOCTXT* pctxt, H245MobileMultilinkReconfigurationCommand_status* pvalue);

EXTERN int asn1PD_H245MobileMultilinkReconfigurationCommand_status (OOCTXT* pctxt, H245MobileMultilinkReconfigurationCommand_status* pvalue);

/**************************************************************/
/*                                                            */
/*  MobileMultilinkReconfigurationCommand                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MobileMultilinkReconfigurationCommand {
   ASN1UINT8 sampleSize;
   ASN1UINT8 samplesPerFrame;
   H245MobileMultilinkReconfigurationCommand_status status;
   DList extElem1;
} H245MobileMultilinkReconfigurationCommand;

EXTERN int asn1PE_H245MobileMultilinkReconfigurationCommand (OOCTXT* pctxt, H245MobileMultilinkReconfigurationCommand* pvalue);

EXTERN int asn1PD_H245MobileMultilinkReconfigurationCommand (OOCTXT* pctxt, H245MobileMultilinkReconfigurationCommand* pvalue);

/**************************************************************/
/*                                                            */
/*  CommandMessage                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245CommandMessage_nonStandard 1
#define T_H245CommandMessage_maintenanceLoopOffCommand 2
#define T_H245CommandMessage_sendTerminalCapabilitySet 3
#define T_H245CommandMessage_encryptionCommand 4
#define T_H245CommandMessage_flowControlCommand 5
#define T_H245CommandMessage_endSessionCommand 6
#define T_H245CommandMessage_miscellaneousCommand 7
#define T_H245CommandMessage_communicationModeCommand 8
#define T_H245CommandMessage_conferenceCommand 9
#define T_H245CommandMessage_h223MultiplexReconfiguration 10
#define T_H245CommandMessage_newATMVCCommand 11
#define T_H245CommandMessage_mobileMultilinkReconfigurationCommand 12
#define T_H245CommandMessage_extElem1   13

typedef struct EXTERN H245CommandMessage {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245MaintenanceLoopOffCommand *maintenanceLoopOffCommand;
      /* t = 3 */
      H245SendTerminalCapabilitySet *sendTerminalCapabilitySet;
      /* t = 4 */
      H245EncryptionCommand *encryptionCommand;
      /* t = 5 */
      H245FlowControlCommand *flowControlCommand;
      /* t = 6 */
      H245EndSessionCommand *endSessionCommand;
      /* t = 7 */
      H245MiscellaneousCommand *miscellaneousCommand;
      /* t = 8 */
      H245CommunicationModeCommand *communicationModeCommand;
      /* t = 9 */
      H245ConferenceCommand *conferenceCommand;
      /* t = 10 */
      H245H223MultiplexReconfiguration *h223MultiplexReconfiguration;
      /* t = 11 */
      H245NewATMVCCommand *newATMVCCommand;
      /* t = 12 */
      H245MobileMultilinkReconfigurationCommand *mobileMultilinkReconfigurationCommand;
      /* t = 13 */
      ASN1OpenType *extElem1;
   } u;
} H245CommandMessage;

EXTERN int asn1PE_H245CommandMessage (OOCTXT* pctxt, H245CommandMessage* pvalue);

EXTERN int asn1PD_H245CommandMessage (OOCTXT* pctxt, H245CommandMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  FunctionNotUnderstood                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FunctionNotUnderstood_request 1
#define T_H245FunctionNotUnderstood_response 2
#define T_H245FunctionNotUnderstood_command 3

typedef struct EXTERN H245FunctionNotUnderstood {
   int t;
   union {
      /* t = 1 */
      H245RequestMessage *request;
      /* t = 2 */
      H245ResponseMessage *response;
      /* t = 3 */
      H245CommandMessage *command;
   } u;
} H245FunctionNotUnderstood;

EXTERN int asn1PE_H245FunctionNotUnderstood (OOCTXT* pctxt, H245FunctionNotUnderstood* pvalue);

EXTERN int asn1PD_H245FunctionNotUnderstood (OOCTXT* pctxt, H245FunctionNotUnderstood* pvalue);

/**************************************************************/
/*                                                            */
/*  MasterSlaveDeterminationRelease                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MasterSlaveDeterminationRelease {
   DList extElem1;
} H245MasterSlaveDeterminationRelease;

EXTERN int asn1PE_H245MasterSlaveDeterminationRelease (OOCTXT* pctxt, H245MasterSlaveDeterminationRelease* pvalue);

EXTERN int asn1PD_H245MasterSlaveDeterminationRelease (OOCTXT* pctxt, H245MasterSlaveDeterminationRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalCapabilitySetRelease                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalCapabilitySetRelease {
   DList extElem1;
} H245TerminalCapabilitySetRelease;

EXTERN int asn1PE_H245TerminalCapabilitySetRelease (OOCTXT* pctxt, H245TerminalCapabilitySetRelease* pvalue);

EXTERN int asn1PD_H245TerminalCapabilitySetRelease (OOCTXT* pctxt, H245TerminalCapabilitySetRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  OpenLogicalChannelConfirm                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245OpenLogicalChannelConfirm {
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   DList extElem1;
} H245OpenLogicalChannelConfirm;

EXTERN int asn1PE_H245OpenLogicalChannelConfirm (OOCTXT* pctxt, H245OpenLogicalChannelConfirm* pvalue);

EXTERN int asn1PD_H245OpenLogicalChannelConfirm (OOCTXT* pctxt, H245OpenLogicalChannelConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestChannelCloseRelease                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestChannelCloseRelease {
   H245LogicalChannelNumber forwardLogicalChannelNumber;
   DList extElem1;
} H245RequestChannelCloseRelease;

EXTERN int asn1PE_H245RequestChannelCloseRelease (OOCTXT* pctxt, H245RequestChannelCloseRelease* pvalue);

EXTERN int asn1PD_H245RequestChannelCloseRelease (OOCTXT* pctxt, H245RequestChannelCloseRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySendRelease_multiplexTableEntryNumber       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntrySendRelease_multiplexTableEntryNumber {
   ASN1UINT n;
   H245MultiplexTableEntryNumber elem[15];
} H245MultiplexEntrySendRelease_multiplexTableEntryNumber;

EXTERN int asn1PE_H245MultiplexEntrySendRelease_multiplexTableEntryNumber (OOCTXT* pctxt, H245MultiplexEntrySendRelease_multiplexTableEntryNumber* pvalue);

EXTERN int asn1PD_H245MultiplexEntrySendRelease_multiplexTableEntryNumber (OOCTXT* pctxt, H245MultiplexEntrySendRelease_multiplexTableEntryNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  MultiplexEntrySendRelease                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultiplexEntrySendRelease {
   H245MultiplexEntrySendRelease_multiplexTableEntryNumber multiplexTableEntryNumber;
   DList extElem1;
} H245MultiplexEntrySendRelease;

EXTERN int asn1PE_H245MultiplexEntrySendRelease (OOCTXT* pctxt, H245MultiplexEntrySendRelease* pvalue);

EXTERN int asn1PD_H245MultiplexEntrySendRelease (OOCTXT* pctxt, H245MultiplexEntrySendRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryRelease_entryNumbers                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryRelease_entryNumbers {
   ASN1UINT n;
   H245MultiplexTableEntryNumber elem[15];
} H245RequestMultiplexEntryRelease_entryNumbers;

EXTERN int asn1PE_H245RequestMultiplexEntryRelease_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntryRelease_entryNumbers* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryRelease_entryNumbers (OOCTXT* pctxt, H245RequestMultiplexEntryRelease_entryNumbers* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestMultiplexEntryRelease                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestMultiplexEntryRelease {
   H245RequestMultiplexEntryRelease_entryNumbers entryNumbers;
   DList extElem1;
} H245RequestMultiplexEntryRelease;

EXTERN int asn1PE_H245RequestMultiplexEntryRelease (OOCTXT* pctxt, H245RequestMultiplexEntryRelease* pvalue);

EXTERN int asn1PD_H245RequestMultiplexEntryRelease (OOCTXT* pctxt, H245RequestMultiplexEntryRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestModeRelease                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245RequestModeRelease {
   DList extElem1;
} H245RequestModeRelease;

EXTERN int asn1PE_H245RequestModeRelease (OOCTXT* pctxt, H245RequestModeRelease* pvalue);

EXTERN int asn1PD_H245RequestModeRelease (OOCTXT* pctxt, H245RequestModeRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousIndication_type_videoNotDecodedMBs           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousIndication_type_videoNotDecodedMBs {
   ASN1USINT firstMB;
   ASN1USINT numberOfMBs;
   ASN1UINT8 temporalReference;
   DList extElem1;
} H245MiscellaneousIndication_type_videoNotDecodedMBs;

EXTERN int asn1PE_H245MiscellaneousIndication_type_videoNotDecodedMBs (OOCTXT* pctxt, H245MiscellaneousIndication_type_videoNotDecodedMBs* pvalue);

EXTERN int asn1PD_H245MiscellaneousIndication_type_videoNotDecodedMBs (OOCTXT* pctxt, H245MiscellaneousIndication_type_videoNotDecodedMBs* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousIndication_type                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MiscellaneousIndication_type_logicalChannelActive 1
#define T_H245MiscellaneousIndication_type_logicalChannelInactive 2
#define T_H245MiscellaneousIndication_type_multipointConference 3
#define T_H245MiscellaneousIndication_type_cancelMultipointConference 4
#define T_H245MiscellaneousIndication_type_multipointZeroComm 5
#define T_H245MiscellaneousIndication_type_cancelMultipointZeroComm 6
#define T_H245MiscellaneousIndication_type_multipointSecondaryStatus 7
#define T_H245MiscellaneousIndication_type_cancelMultipointSecondaryStatus 8
#define T_H245MiscellaneousIndication_type_videoIndicateReadyToActivate 9
#define T_H245MiscellaneousIndication_type_videoTemporalSpatialTradeOff 10
#define T_H245MiscellaneousIndication_type_videoNotDecodedMBs 11
#define T_H245MiscellaneousIndication_type_transportCapability 12
#define T_H245MiscellaneousIndication_type_extElem1 13

typedef struct EXTERN H245MiscellaneousIndication_type {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      ASN1UINT8 videoTemporalSpatialTradeOff;
      /* t = 11 */
      H245MiscellaneousIndication_type_videoNotDecodedMBs *videoNotDecodedMBs;
      /* t = 12 */
      H245TransportCapability *transportCapability;
      /* t = 13 */
      ASN1OpenType *extElem1;
   } u;
} H245MiscellaneousIndication_type;

EXTERN int asn1PE_H245MiscellaneousIndication_type (OOCTXT* pctxt, H245MiscellaneousIndication_type* pvalue);

EXTERN int asn1PD_H245MiscellaneousIndication_type (OOCTXT* pctxt, H245MiscellaneousIndication_type* pvalue);

/**************************************************************/
/*                                                            */
/*  MiscellaneousIndication                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MiscellaneousIndication {
   H245LogicalChannelNumber logicalChannelNumber;
   H245MiscellaneousIndication_type type;
   DList extElem1;
} H245MiscellaneousIndication;

EXTERN int asn1PE_H245MiscellaneousIndication (OOCTXT* pctxt, H245MiscellaneousIndication* pvalue);

EXTERN int asn1PD_H245MiscellaneousIndication (OOCTXT* pctxt, H245MiscellaneousIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  JitterIndication_scope                                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245JitterIndication_scope_logicalChannelNumber 1
#define T_H245JitterIndication_scope_resourceID 2
#define T_H245JitterIndication_scope_wholeMultiplex 3

typedef struct EXTERN H245JitterIndication_scope {
   int t;
   union {
      /* t = 1 */
      H245LogicalChannelNumber logicalChannelNumber;
      /* t = 2 */
      ASN1USINT resourceID;
      /* t = 3 */
   } u;
} H245JitterIndication_scope;

EXTERN int asn1PE_H245JitterIndication_scope (OOCTXT* pctxt, H245JitterIndication_scope* pvalue);

EXTERN int asn1PD_H245JitterIndication_scope (OOCTXT* pctxt, H245JitterIndication_scope* pvalue);

/**************************************************************/
/*                                                            */
/*  JitterIndication                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245JitterIndication {
   struct {
      unsigned skippedFrameCountPresent : 1;
      unsigned additionalDecoderBufferPresent : 1;
   } m;
   H245JitterIndication_scope scope;
   ASN1UINT8 estimatedReceivedJitterMantissa;
   ASN1UINT8 estimatedReceivedJitterExponent;
   ASN1UINT8 skippedFrameCount;
   ASN1UINT additionalDecoderBuffer;
   DList extElem1;
} H245JitterIndication;

EXTERN int asn1PE_H245JitterIndication (OOCTXT* pctxt, H245JitterIndication* pvalue);

EXTERN int asn1PD_H245JitterIndication (OOCTXT* pctxt, H245JitterIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  H223SkewIndication                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H223SkewIndication {
   H245LogicalChannelNumber logicalChannelNumber1;
   H245LogicalChannelNumber logicalChannelNumber2;
   ASN1USINT skew;
   DList extElem1;
} H245H223SkewIndication;

EXTERN int asn1PE_H245H223SkewIndication (OOCTXT* pctxt, H245H223SkewIndication* pvalue);

EXTERN int asn1PD_H245H223SkewIndication (OOCTXT* pctxt, H245H223SkewIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_aal_aal1_clockRecovery                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCIndication_aal_aal1_clockRecovery_nullClockRecovery 1
#define T_H245NewATMVCIndication_aal_aal1_clockRecovery_srtsClockRecovery 2
#define T_H245NewATMVCIndication_aal_aal1_clockRecovery_adaptiveClockRecovery 3
#define T_H245NewATMVCIndication_aal_aal1_clockRecovery_extElem1 4

typedef struct EXTERN H245NewATMVCIndication_aal_aal1_clockRecovery {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCIndication_aal_aal1_clockRecovery;

EXTERN int asn1PE_H245NewATMVCIndication_aal_aal1_clockRecovery (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal1_clockRecovery* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_aal_aal1_clockRecovery (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal1_clockRecovery* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_aal_aal1_errorCorrection               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCIndication_aal_aal1_errorCorrection_nullErrorCorrection 1
#define T_H245NewATMVCIndication_aal_aal1_errorCorrection_longInterleaver 2
#define T_H245NewATMVCIndication_aal_aal1_errorCorrection_shortInterleaver 3
#define T_H245NewATMVCIndication_aal_aal1_errorCorrection_errorCorrectionOnly 4
#define T_H245NewATMVCIndication_aal_aal1_errorCorrection_extElem1 5

typedef struct EXTERN H245NewATMVCIndication_aal_aal1_errorCorrection {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCIndication_aal_aal1_errorCorrection;

EXTERN int asn1PE_H245NewATMVCIndication_aal_aal1_errorCorrection (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal1_errorCorrection* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_aal_aal1_errorCorrection (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal1_errorCorrection* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_aal_aal1                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCIndication_aal_aal1 {
   H245NewATMVCIndication_aal_aal1_clockRecovery clockRecovery;
   H245NewATMVCIndication_aal_aal1_errorCorrection errorCorrection;
   ASN1BOOL structuredDataTransfer;
   ASN1BOOL partiallyFilledCells;
   DList extElem1;
} H245NewATMVCIndication_aal_aal1;

EXTERN int asn1PE_H245NewATMVCIndication_aal_aal1 (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal1* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_aal_aal1 (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal1* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_aal_aal5                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCIndication_aal_aal5 {
   ASN1USINT forwardMaximumSDUSize;
   ASN1USINT backwardMaximumSDUSize;
   DList extElem1;
} H245NewATMVCIndication_aal_aal5;

EXTERN int asn1PE_H245NewATMVCIndication_aal_aal5 (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal5* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_aal_aal5 (OOCTXT* pctxt, H245NewATMVCIndication_aal_aal5* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_aal                                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCIndication_aal_aal1 1
#define T_H245NewATMVCIndication_aal_aal5 2
#define T_H245NewATMVCIndication_aal_extElem1 3

typedef struct EXTERN H245NewATMVCIndication_aal {
   int t;
   union {
      /* t = 1 */
      H245NewATMVCIndication_aal_aal1 *aal1;
      /* t = 2 */
      H245NewATMVCIndication_aal_aal5 *aal5;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCIndication_aal;

EXTERN int asn1PE_H245NewATMVCIndication_aal (OOCTXT* pctxt, H245NewATMVCIndication_aal* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_aal (OOCTXT* pctxt, H245NewATMVCIndication_aal* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_multiplex                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCIndication_multiplex_noMultiplex 1
#define T_H245NewATMVCIndication_multiplex_transportStream 2
#define T_H245NewATMVCIndication_multiplex_programStream 3
#define T_H245NewATMVCIndication_multiplex_extElem1 4

typedef struct EXTERN H245NewATMVCIndication_multiplex {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCIndication_multiplex;

EXTERN int asn1PE_H245NewATMVCIndication_multiplex (OOCTXT* pctxt, H245NewATMVCIndication_multiplex* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_multiplex (OOCTXT* pctxt, H245NewATMVCIndication_multiplex* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_reverseParameters_multiplex            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245NewATMVCIndication_reverseParameters_multiplex_noMultiplex 1
#define T_H245NewATMVCIndication_reverseParameters_multiplex_transportStream 2
#define T_H245NewATMVCIndication_reverseParameters_multiplex_programStream 3
#define T_H245NewATMVCIndication_reverseParameters_multiplex_extElem1 4

typedef struct EXTERN H245NewATMVCIndication_reverseParameters_multiplex {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245NewATMVCIndication_reverseParameters_multiplex;

EXTERN int asn1PE_H245NewATMVCIndication_reverseParameters_multiplex (OOCTXT* pctxt, H245NewATMVCIndication_reverseParameters_multiplex* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_reverseParameters_multiplex (OOCTXT* pctxt, H245NewATMVCIndication_reverseParameters_multiplex* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication_reverseParameters                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCIndication_reverseParameters {
   ASN1USINT bitRate;
   ASN1BOOL bitRateLockedToPCRClock;
   ASN1BOOL bitRateLockedToNetworkClock;
   H245NewATMVCIndication_reverseParameters_multiplex multiplex;
   DList extElem1;
} H245NewATMVCIndication_reverseParameters;

EXTERN int asn1PE_H245NewATMVCIndication_reverseParameters (OOCTXT* pctxt, H245NewATMVCIndication_reverseParameters* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication_reverseParameters (OOCTXT* pctxt, H245NewATMVCIndication_reverseParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  NewATMVCIndication                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245NewATMVCIndication {
   struct {
      unsigned reverseParametersPresent : 1;
   } m;
   ASN1USINT resourceID;
   ASN1USINT bitRate;
   ASN1BOOL bitRateLockedToPCRClock;
   ASN1BOOL bitRateLockedToNetworkClock;
   H245NewATMVCIndication_aal aal;
   H245NewATMVCIndication_multiplex multiplex;
   H245NewATMVCIndication_reverseParameters reverseParameters;
   DList extElem1;
} H245NewATMVCIndication;

EXTERN int asn1PE_H245NewATMVCIndication (OOCTXT* pctxt, H245NewATMVCIndication* pvalue);

EXTERN int asn1PD_H245NewATMVCIndication (OOCTXT* pctxt, H245NewATMVCIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication_userInputSupportIndication            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245UserInputIndication_userInputSupportIndication_nonStandard 1
#define T_H245UserInputIndication_userInputSupportIndication_basicString 2
#define T_H245UserInputIndication_userInputSupportIndication_iA5String 3
#define T_H245UserInputIndication_userInputSupportIndication_generalString 4
#define T_H245UserInputIndication_userInputSupportIndication_extElem1 5

typedef struct EXTERN H245UserInputIndication_userInputSupportIndication {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245UserInputIndication_userInputSupportIndication;

EXTERN int asn1PE_H245UserInputIndication_userInputSupportIndication (OOCTXT* pctxt, H245UserInputIndication_userInputSupportIndication* pvalue);

EXTERN int asn1PD_H245UserInputIndication_userInputSupportIndication (OOCTXT* pctxt, H245UserInputIndication_userInputSupportIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication_signal_rtp                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UserInputIndication_signal_rtp {
   struct {
      unsigned timestampPresent : 1;
      unsigned expirationTimePresent : 1;
   } m;
   ASN1UINT timestamp;
   ASN1UINT expirationTime;
   H245LogicalChannelNumber logicalChannelNumber;
   DList extElem1;
} H245UserInputIndication_signal_rtp;

EXTERN int asn1PE_H245UserInputIndication_signal_rtp (OOCTXT* pctxt, H245UserInputIndication_signal_rtp* pvalue);

EXTERN int asn1PD_H245UserInputIndication_signal_rtp (OOCTXT* pctxt, H245UserInputIndication_signal_rtp* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication_signal                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UserInputIndication_signal {
   struct {
      unsigned durationPresent : 1;
      unsigned rtpPresent : 1;
      unsigned rtpPayloadIndicationPresent : 1;
   } m;
   ASN1IA5String signalType;
   ASN1USINT duration;
   H245UserInputIndication_signal_rtp rtp;
   DList extElem1;
} H245UserInputIndication_signal;

EXTERN int asn1PE_H245UserInputIndication_signal (OOCTXT* pctxt, H245UserInputIndication_signal* pvalue);

EXTERN int asn1PD_H245UserInputIndication_signal (OOCTXT* pctxt, H245UserInputIndication_signal* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication_signalUpdate_rtp                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UserInputIndication_signalUpdate_rtp {
   H245LogicalChannelNumber logicalChannelNumber;
   DList extElem1;
} H245UserInputIndication_signalUpdate_rtp;

EXTERN int asn1PE_H245UserInputIndication_signalUpdate_rtp (OOCTXT* pctxt, H245UserInputIndication_signalUpdate_rtp* pvalue);

EXTERN int asn1PD_H245UserInputIndication_signalUpdate_rtp (OOCTXT* pctxt, H245UserInputIndication_signalUpdate_rtp* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication_signalUpdate                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UserInputIndication_signalUpdate {
   struct {
      unsigned rtpPresent : 1;
   } m;
   ASN1USINT duration;
   H245UserInputIndication_signalUpdate_rtp rtp;
   DList extElem1;
} H245UserInputIndication_signalUpdate;

EXTERN int asn1PE_H245UserInputIndication_signalUpdate (OOCTXT* pctxt, H245UserInputIndication_signalUpdate* pvalue);

EXTERN int asn1PD_H245UserInputIndication_signalUpdate (OOCTXT* pctxt, H245UserInputIndication_signalUpdate* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication_extendedAlphanumeric                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245UserInputIndication_extendedAlphanumeric {
   struct {
      unsigned rtpPayloadIndicationPresent : 1;
   } m;
   ASN1GeneralString alphanumeric;
   DList extElem1;
} H245UserInputIndication_extendedAlphanumeric;

EXTERN int asn1PE_H245UserInputIndication_extendedAlphanumeric (OOCTXT* pctxt, H245UserInputIndication_extendedAlphanumeric* pvalue);

EXTERN int asn1PD_H245UserInputIndication_extendedAlphanumeric (OOCTXT* pctxt, H245UserInputIndication_extendedAlphanumeric* pvalue);

/**************************************************************/
/*                                                            */
/*  UserInputIndication                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245UserInputIndication_nonStandard 1
#define T_H245UserInputIndication_alphanumeric 2
#define T_H245UserInputIndication_userInputSupportIndication 3
#define T_H245UserInputIndication_signal 4
#define T_H245UserInputIndication_signalUpdate 5
#define T_H245UserInputIndication_extendedAlphanumeric 6
#define T_H245UserInputIndication_extElem1 7

typedef struct EXTERN H245UserInputIndication {
   int t;
   union {
      /* t = 1 */
      H245NonStandardParameter *nonStandard;
      /* t = 2 */
      ASN1GeneralString alphanumeric;
      /* t = 3 */
      H245UserInputIndication_userInputSupportIndication *userInputSupportIndication;
      /* t = 4 */
      H245UserInputIndication_signal *signal;
      /* t = 5 */
      H245UserInputIndication_signalUpdate *signalUpdate;
      /* t = 6 */
      H245UserInputIndication_extendedAlphanumeric *extendedAlphanumeric;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H245UserInputIndication;

EXTERN int asn1PE_H245UserInputIndication (OOCTXT* pctxt, H245UserInputIndication* pvalue);

EXTERN int asn1PD_H245UserInputIndication (OOCTXT* pctxt, H245UserInputIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  H2250MaximumSkewIndication                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245H2250MaximumSkewIndication {
   H245LogicalChannelNumber logicalChannelNumber1;
   H245LogicalChannelNumber logicalChannelNumber2;
   ASN1USINT maximumSkew;
   DList extElem1;
} H245H2250MaximumSkewIndication;

EXTERN int asn1PE_H245H2250MaximumSkewIndication (OOCTXT* pctxt, H245H2250MaximumSkewIndication* pvalue);

EXTERN int asn1PD_H245H2250MaximumSkewIndication (OOCTXT* pctxt, H245H2250MaximumSkewIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  MCLocationIndication                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MCLocationIndication {
   H245TransportAddress signalAddress;
   DList extElem1;
} H245MCLocationIndication;

EXTERN int asn1PE_H245MCLocationIndication (OOCTXT* pctxt, H245MCLocationIndication* pvalue);

EXTERN int asn1PD_H245MCLocationIndication (OOCTXT* pctxt, H245MCLocationIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalYouAreSeeingInSubPictureNumber                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245TerminalYouAreSeeingInSubPictureNumber {
   H245TerminalNumber terminalNumber;
   ASN1UINT8 subPictureNumber;
   DList extElem1;
} H245TerminalYouAreSeeingInSubPictureNumber;

EXTERN int asn1PE_H245TerminalYouAreSeeingInSubPictureNumber (OOCTXT* pctxt, H245TerminalYouAreSeeingInSubPictureNumber* pvalue);

EXTERN int asn1PD_H245TerminalYouAreSeeingInSubPictureNumber (OOCTXT* pctxt, H245TerminalYouAreSeeingInSubPictureNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  VideoIndicateCompose                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VideoIndicateCompose {
   ASN1UINT8 compositionNumber;
   DList extElem1;
} H245VideoIndicateCompose;

EXTERN int asn1PE_H245VideoIndicateCompose (OOCTXT* pctxt, H245VideoIndicateCompose* pvalue);

EXTERN int asn1PD_H245VideoIndicateCompose (OOCTXT* pctxt, H245VideoIndicateCompose* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceIndication                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245ConferenceIndication_sbeNumber 1
#define T_H245ConferenceIndication_terminalNumberAssign 2
#define T_H245ConferenceIndication_terminalJoinedConference 3
#define T_H245ConferenceIndication_terminalLeftConference 4
#define T_H245ConferenceIndication_seenByAtLeastOneOther 5
#define T_H245ConferenceIndication_cancelSeenByAtLeastOneOther 6
#define T_H245ConferenceIndication_seenByAll 7
#define T_H245ConferenceIndication_cancelSeenByAll 8
#define T_H245ConferenceIndication_terminalYouAreSeeing 9
#define T_H245ConferenceIndication_requestForFloor 10
#define T_H245ConferenceIndication_withdrawChairToken 11
#define T_H245ConferenceIndication_floorRequested 12
#define T_H245ConferenceIndication_terminalYouAreSeeingInSubPictureNumber 13
#define T_H245ConferenceIndication_videoIndicateCompose 14
#define T_H245ConferenceIndication_extElem1 15

typedef struct EXTERN H245ConferenceIndication {
   int t;
   union {
      /* t = 1 */
      ASN1UINT8 sbeNumber;
      /* t = 2 */
      H245TerminalLabel *terminalNumberAssign;
      /* t = 3 */
      H245TerminalLabel *terminalJoinedConference;
      /* t = 4 */
      H245TerminalLabel *terminalLeftConference;
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      /* t = 8 */
      /* t = 9 */
      H245TerminalLabel *terminalYouAreSeeing;
      /* t = 10 */
      /* t = 11 */
      /* t = 12 */
      H245TerminalLabel *floorRequested;
      /* t = 13 */
      H245TerminalYouAreSeeingInSubPictureNumber *terminalYouAreSeeingInSubPictureNumber;
      /* t = 14 */
      H245VideoIndicateCompose *videoIndicateCompose;
      /* t = 15 */
      ASN1OpenType *extElem1;
   } u;
} H245ConferenceIndication;

EXTERN int asn1PE_H245ConferenceIndication (OOCTXT* pctxt, H245ConferenceIndication* pvalue);

EXTERN int asn1PD_H245ConferenceIndication (OOCTXT* pctxt, H245ConferenceIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  VendorIdentification                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245VendorIdentification {
   struct {
      unsigned productNumberPresent : 1;
      unsigned versionNumberPresent : 1;
   } m;
   H245NonStandardIdentifier vendor;
   H245VendorIdentification_productNumber productNumber;
   H245VendorIdentification_versionNumber versionNumber;
   DList extElem1;
} H245VendorIdentification;

EXTERN int asn1PE_H245VendorIdentification (OOCTXT* pctxt, H245VendorIdentification* pvalue);

EXTERN int asn1PD_H245VendorIdentification (OOCTXT* pctxt, H245VendorIdentification* pvalue);

/**************************************************************/
/*                                                            */
/*  FunctionNotSupported_cause                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FunctionNotSupported_cause_syntaxError 1
#define T_H245FunctionNotSupported_cause_semanticError 2
#define T_H245FunctionNotSupported_cause_unknownFunction 3
#define T_H245FunctionNotSupported_cause_extElem1 4

typedef struct EXTERN H245FunctionNotSupported_cause {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245FunctionNotSupported_cause;

EXTERN int asn1PE_H245FunctionNotSupported_cause (OOCTXT* pctxt, H245FunctionNotSupported_cause* pvalue);

EXTERN int asn1PD_H245FunctionNotSupported_cause (OOCTXT* pctxt, H245FunctionNotSupported_cause* pvalue);

/**************************************************************/
/*                                                            */
/*  FunctionNotSupported                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FunctionNotSupported {
   struct {
      unsigned returnedFunctionPresent : 1;
   } m;
   H245FunctionNotSupported_cause cause;
   ASN1DynOctStr returnedFunction;
   DList extElem1;
} H245FunctionNotSupported;

EXTERN int asn1PE_H245FunctionNotSupported (OOCTXT* pctxt, H245FunctionNotSupported* pvalue);

EXTERN int asn1PD_H245FunctionNotSupported (OOCTXT* pctxt, H245FunctionNotSupported* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkIndication_crcDesired                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkIndication_crcDesired {
   DList extElem1;
} H245MultilinkIndication_crcDesired;

EXTERN int asn1PE_H245MultilinkIndication_crcDesired (OOCTXT* pctxt, H245MultilinkIndication_crcDesired* pvalue);

EXTERN int asn1PD_H245MultilinkIndication_crcDesired (OOCTXT* pctxt, H245MultilinkIndication_crcDesired* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkIndication_excessiveError                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MultilinkIndication_excessiveError {
   H245ConnectionIdentifier connectionIdentifier;
   DList extElem1;
} H245MultilinkIndication_excessiveError;

EXTERN int asn1PE_H245MultilinkIndication_excessiveError (OOCTXT* pctxt, H245MultilinkIndication_excessiveError* pvalue);

EXTERN int asn1PD_H245MultilinkIndication_excessiveError (OOCTXT* pctxt, H245MultilinkIndication_excessiveError* pvalue);

/**************************************************************/
/*                                                            */
/*  MultilinkIndication                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultilinkIndication_nonStandard 1
#define T_H245MultilinkIndication_crcDesired 2
#define T_H245MultilinkIndication_excessiveError 3
#define T_H245MultilinkIndication_extElem1 4

typedef struct EXTERN H245MultilinkIndication {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245MultilinkIndication_crcDesired *crcDesired;
      /* t = 3 */
      H245MultilinkIndication_excessiveError *excessiveError;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H245MultilinkIndication;

EXTERN int asn1PE_H245MultilinkIndication (OOCTXT* pctxt, H245MultilinkIndication* pvalue);

EXTERN int asn1PD_H245MultilinkIndication (OOCTXT* pctxt, H245MultilinkIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  LogicalChannelRateRelease                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245LogicalChannelRateRelease {
   DList extElem1;
} H245LogicalChannelRateRelease;

EXTERN int asn1PE_H245LogicalChannelRateRelease (OOCTXT* pctxt, H245LogicalChannelRateRelease* pvalue);

EXTERN int asn1PD_H245LogicalChannelRateRelease (OOCTXT* pctxt, H245LogicalChannelRateRelease* pvalue);

/**************************************************************/
/*                                                            */
/*  FlowControlIndication_scope                               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FlowControlIndication_scope_logicalChannelNumber 1
#define T_H245FlowControlIndication_scope_resourceID 2
#define T_H245FlowControlIndication_scope_wholeMultiplex 3

typedef struct EXTERN H245FlowControlIndication_scope {
   int t;
   union {
      /* t = 1 */
      H245LogicalChannelNumber logicalChannelNumber;
      /* t = 2 */
      ASN1USINT resourceID;
      /* t = 3 */
   } u;
} H245FlowControlIndication_scope;

EXTERN int asn1PE_H245FlowControlIndication_scope (OOCTXT* pctxt, H245FlowControlIndication_scope* pvalue);

EXTERN int asn1PD_H245FlowControlIndication_scope (OOCTXT* pctxt, H245FlowControlIndication_scope* pvalue);

/**************************************************************/
/*                                                            */
/*  FlowControlIndication_restriction                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245FlowControlIndication_restriction_maximumBitRate 1
#define T_H245FlowControlIndication_restriction_noRestriction 2

typedef struct EXTERN H245FlowControlIndication_restriction {
   int t;
   union {
      /* t = 1 */
      ASN1UINT maximumBitRate;
      /* t = 2 */
   } u;
} H245FlowControlIndication_restriction;

EXTERN int asn1PE_H245FlowControlIndication_restriction (OOCTXT* pctxt, H245FlowControlIndication_restriction* pvalue);

EXTERN int asn1PD_H245FlowControlIndication_restriction (OOCTXT* pctxt, H245FlowControlIndication_restriction* pvalue);

/**************************************************************/
/*                                                            */
/*  FlowControlIndication                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245FlowControlIndication {
   H245FlowControlIndication_scope scope;
   H245FlowControlIndication_restriction restriction;
   DList extElem1;
} H245FlowControlIndication;

EXTERN int asn1PE_H245FlowControlIndication (OOCTXT* pctxt, H245FlowControlIndication* pvalue);

EXTERN int asn1PD_H245FlowControlIndication (OOCTXT* pctxt, H245FlowControlIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  MobileMultilinkReconfigurationIndication                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H245MobileMultilinkReconfigurationIndication {
   ASN1UINT8 sampleSize;
   ASN1UINT8 samplesPerFrame;
   DList extElem1;
} H245MobileMultilinkReconfigurationIndication;

EXTERN int asn1PE_H245MobileMultilinkReconfigurationIndication (OOCTXT* pctxt, H245MobileMultilinkReconfigurationIndication* pvalue);

EXTERN int asn1PD_H245MobileMultilinkReconfigurationIndication (OOCTXT* pctxt, H245MobileMultilinkReconfigurationIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  IndicationMessage                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245IndicationMessage_nonStandard 1
#define T_H245IndicationMessage_functionNotUnderstood 2
#define T_H245IndicationMessage_masterSlaveDeterminationRelease 3
#define T_H245IndicationMessage_terminalCapabilitySetRelease 4
#define T_H245IndicationMessage_openLogicalChannelConfirm 5
#define T_H245IndicationMessage_requestChannelCloseRelease 6
#define T_H245IndicationMessage_multiplexEntrySendRelease 7
#define T_H245IndicationMessage_requestMultiplexEntryRelease 8
#define T_H245IndicationMessage_requestModeRelease 9
#define T_H245IndicationMessage_miscellaneousIndication 10
#define T_H245IndicationMessage_jitterIndication 11
#define T_H245IndicationMessage_h223SkewIndication 12
#define T_H245IndicationMessage_newATMVCIndication 13
#define T_H245IndicationMessage_userInput 14
#define T_H245IndicationMessage_h2250MaximumSkewIndication 15
#define T_H245IndicationMessage_mcLocationIndication 16
#define T_H245IndicationMessage_conferenceIndication 17
#define T_H245IndicationMessage_vendorIdentification 18
#define T_H245IndicationMessage_functionNotSupported 19
#define T_H245IndicationMessage_multilinkIndication 20
#define T_H245IndicationMessage_logicalChannelRateRelease 21
#define T_H245IndicationMessage_flowControlIndication 22
#define T_H245IndicationMessage_mobileMultilinkReconfigurationIndication 23
#define T_H245IndicationMessage_extElem1 24

typedef struct EXTERN H245IndicationMessage {
   int t;
   union {
      /* t = 1 */
      H245NonStandardMessage *nonStandard;
      /* t = 2 */
      H245FunctionNotUnderstood *functionNotUnderstood;
      /* t = 3 */
      H245MasterSlaveDeterminationRelease *masterSlaveDeterminationRelease;
      /* t = 4 */
      H245TerminalCapabilitySetRelease *terminalCapabilitySetRelease;
      /* t = 5 */
      H245OpenLogicalChannelConfirm *openLogicalChannelConfirm;
      /* t = 6 */
      H245RequestChannelCloseRelease *requestChannelCloseRelease;
      /* t = 7 */
      H245MultiplexEntrySendRelease *multiplexEntrySendRelease;
      /* t = 8 */
      H245RequestMultiplexEntryRelease *requestMultiplexEntryRelease;
      /* t = 9 */
      H245RequestModeRelease *requestModeRelease;
      /* t = 10 */
      H245MiscellaneousIndication *miscellaneousIndication;
      /* t = 11 */
      H245JitterIndication *jitterIndication;
      /* t = 12 */
      H245H223SkewIndication *h223SkewIndication;
      /* t = 13 */
      H245NewATMVCIndication *newATMVCIndication;
      /* t = 14 */
      H245UserInputIndication *userInput;
      /* t = 15 */
      H245H2250MaximumSkewIndication *h2250MaximumSkewIndication;
      /* t = 16 */
      H245MCLocationIndication *mcLocationIndication;
      /* t = 17 */
      H245ConferenceIndication *conferenceIndication;
      /* t = 18 */
      H245VendorIdentification *vendorIdentification;
      /* t = 19 */
      H245FunctionNotSupported *functionNotSupported;
      /* t = 20 */
      H245MultilinkIndication *multilinkIndication;
      /* t = 21 */
      H245LogicalChannelRateRelease *logicalChannelRateRelease;
      /* t = 22 */
      H245FlowControlIndication *flowControlIndication;
      /* t = 23 */
      H245MobileMultilinkReconfigurationIndication *mobileMultilinkReconfigurationIndication;
      /* t = 24 */
      ASN1OpenType *extElem1;
   } u;
} H245IndicationMessage;

EXTERN int asn1PE_H245IndicationMessage (OOCTXT* pctxt, H245IndicationMessage* pvalue);

EXTERN int asn1PD_H245IndicationMessage (OOCTXT* pctxt, H245IndicationMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  MultimediaSystemControlMessage                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H245MultimediaSystemControlMessage_request 1
#define T_H245MultimediaSystemControlMessage_response 2
#define T_H245MultimediaSystemControlMessage_command 3
#define T_H245MultimediaSystemControlMessage_indication 4
#define T_H245MultimediaSystemControlMessage_extElem1 5

typedef struct EXTERN H245MultimediaSystemControlMessage {
   int t;
   union {
      /* t = 1 */
      H245RequestMessage *request;
      /* t = 2 */
      H245ResponseMessage *response;
      /* t = 3 */
      H245CommandMessage *command;
      /* t = 4 */
      H245IndicationMessage *indication;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H245MultimediaSystemControlMessage;

EXTERN int asn1PE_H245MultimediaSystemControlMessage (OOCTXT* pctxt, H245MultimediaSystemControlMessage* pvalue);

EXTERN int asn1PD_H245MultimediaSystemControlMessage (OOCTXT* pctxt, H245MultimediaSystemControlMessage* pvalue);

#ifdef __cplusplus
}
#endif

#endif
