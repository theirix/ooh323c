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

#ifndef H323_MESSAGES_H
#define H323_MESSAGES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include "ooasn1.h"
#include "H235-SECURITY-MESSAGES.h"
#include "MULTIMEDIA-SYSTEM-CONTROL.h"

/**************************************************************/
/*                                                            */
/*  ScreeningIndicator                                        */
/*                                                            */
/**************************************************************/

typedef enum {
   userProvidedNotScreened = 0,
   userProvidedVerifiedAndPassed = 1,
   userProvidedVerifiedAndFailed = 2,
   networkProvided = 3
} H225ScreeningIndicator_Root;

typedef ASN1UINT H225ScreeningIndicator;

EXTERN int asn1PE_H225ScreeningIndicator (OOCTXT* pctxt, H225ScreeningIndicator value);

EXTERN int asn1PD_H225ScreeningIndicator (OOCTXT* pctxt, H225ScreeningIndicator* pvalue);

/**************************************************************/
/*                                                            */
/*  NumberDigits                                              */
/*                                                            */
/**************************************************************/

typedef ASN1IA5String H225NumberDigits;

EXTERN int asn1PE_H225NumberDigits (OOCTXT* pctxt, H225NumberDigits value);

EXTERN int asn1PD_H225NumberDigits (OOCTXT* pctxt, H225NumberDigits* pvalue);

/**************************************************************/
/*                                                            */
/*  TBCD_STRING                                               */
/*                                                            */
/**************************************************************/

typedef ASN1IA5String H225TBCD_STRING;

EXTERN int asn1PE_H225TBCD_STRING (OOCTXT* pctxt, H225TBCD_STRING value);

EXTERN int asn1PD_H225TBCD_STRING (OOCTXT* pctxt, H225TBCD_STRING* pvalue);

/**************************************************************/
/*                                                            */
/*  GloballyUniqueID                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GloballyUniqueID {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H225GloballyUniqueID;

EXTERN int asn1PE_H225GloballyUniqueID (OOCTXT* pctxt, H225GloballyUniqueID* pvalue);

EXTERN int asn1PD_H225GloballyUniqueID (OOCTXT* pctxt, H225GloballyUniqueID* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceIdentifier                                      */
/*                                                            */
/**************************************************************/

typedef H225GloballyUniqueID H225ConferenceIdentifier;

EXTERN int asn1PE_H225ConferenceIdentifier (OOCTXT* pctxt, H225ConferenceIdentifier* pvalue);

EXTERN int asn1PD_H225ConferenceIdentifier (OOCTXT* pctxt, H225ConferenceIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestSeqNum                                             */
/*                                                            */
/**************************************************************/

typedef ASN1USINT H225RequestSeqNum;

EXTERN int asn1PE_H225RequestSeqNum (OOCTXT* pctxt, H225RequestSeqNum value);

EXTERN int asn1PD_H225RequestSeqNum (OOCTXT* pctxt, H225RequestSeqNum* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperIdentifier                                      */
/*                                                            */
/**************************************************************/

typedef ASN1BMPString H225GatekeeperIdentifier;

EXTERN int asn1PE_H225GatekeeperIdentifier (OOCTXT* pctxt, H225GatekeeperIdentifier value);

EXTERN int asn1PD_H225GatekeeperIdentifier (OOCTXT* pctxt, H225GatekeeperIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  BandWidth                                                 */
/*                                                            */
/**************************************************************/

typedef ASN1UINT H225BandWidth;

EXTERN int asn1PE_H225BandWidth (OOCTXT* pctxt, H225BandWidth value);

EXTERN int asn1PD_H225BandWidth (OOCTXT* pctxt, H225BandWidth* pvalue);

/**************************************************************/
/*                                                            */
/*  CallReferenceValue                                        */
/*                                                            */
/**************************************************************/

typedef ASN1USINT H225CallReferenceValue;

EXTERN int asn1PE_H225CallReferenceValue (OOCTXT* pctxt, H225CallReferenceValue value);

EXTERN int asn1PD_H225CallReferenceValue (OOCTXT* pctxt, H225CallReferenceValue* pvalue);

/**************************************************************/
/*                                                            */
/*  EndpointIdentifier                                        */
/*                                                            */
/**************************************************************/

typedef ASN1BMPString H225EndpointIdentifier;

EXTERN int asn1PE_H225EndpointIdentifier (OOCTXT* pctxt, H225EndpointIdentifier value);

EXTERN int asn1PD_H225EndpointIdentifier (OOCTXT* pctxt, H225EndpointIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  ProtocolIdentifier                                        */
/*                                                            */
/**************************************************************/

typedef ASN1OBJID H225ProtocolIdentifier;

EXTERN int asn1PE_H225ProtocolIdentifier (OOCTXT* pctxt, H225ProtocolIdentifier value);

EXTERN int asn1PD_H225ProtocolIdentifier (OOCTXT* pctxt, H225ProtocolIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  TimeToLive                                                */
/*                                                            */
/**************************************************************/

typedef ASN1UINT H225TimeToLive;

EXTERN int asn1PE_H225TimeToLive (OOCTXT* pctxt, H225TimeToLive value);

EXTERN int asn1PD_H225TimeToLive (OOCTXT* pctxt, H225TimeToLive* pvalue);

/**************************************************************/
/*                                                            */
/*  H248PackagesDescriptor                                    */
/*                                                            */
/**************************************************************/

typedef ASN1DynOctStr H225H248PackagesDescriptor;

EXTERN int asn1PE_H225H248PackagesDescriptor (OOCTXT* pctxt, H225H248PackagesDescriptor value);

EXTERN int asn1PD_H225H248PackagesDescriptor (OOCTXT* pctxt, H225H248PackagesDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  H248SignalsDescriptor                                     */
/*                                                            */
/**************************************************************/

typedef ASN1DynOctStr H225H248SignalsDescriptor;

EXTERN int asn1PE_H225H248SignalsDescriptor (OOCTXT* pctxt, H225H248SignalsDescriptor value);

EXTERN int asn1PD_H225H248SignalsDescriptor (OOCTXT* pctxt, H225H248SignalsDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  GenericIdentifier                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225GenericIdentifier_standard 1
#define T_H225GenericIdentifier_oid     2
#define T_H225GenericIdentifier_nonStandard 3
#define T_H225GenericIdentifier_extElem1 4

typedef struct EXTERN H225GenericIdentifier {
   int t;
   union {
      /* t = 1 */
      ASN1INT standard;
      /* t = 2 */
      ASN1OBJID *oid;
      /* t = 3 */
      H225GloballyUniqueID *nonStandard;
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225GenericIdentifier;

EXTERN int asn1PE_H225GenericIdentifier (OOCTXT* pctxt, H225GenericIdentifier* pvalue);

EXTERN int asn1PD_H225GenericIdentifier (OOCTXT* pctxt, H225GenericIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipAddress_ip                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipAddress_ip {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225TransportAddress_ipAddress_ip;

EXTERN int asn1PE_H225TransportAddress_ipAddress_ip (OOCTXT* pctxt, H225TransportAddress_ipAddress_ip* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipAddress_ip (OOCTXT* pctxt, H225TransportAddress_ipAddress_ip* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipAddress                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipAddress {
   H225TransportAddress_ipAddress_ip ip;
   ASN1USINT port;
} H225TransportAddress_ipAddress;

EXTERN int asn1PE_H225TransportAddress_ipAddress (OOCTXT* pctxt, H225TransportAddress_ipAddress* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipAddress (OOCTXT* pctxt, H225TransportAddress_ipAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipSourceRoute_ip                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipSourceRoute_ip {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225TransportAddress_ipSourceRoute_ip;

EXTERN int asn1PE_H225TransportAddress_ipSourceRoute_ip (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute_ip* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipSourceRoute_ip (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute_ip* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipSourceRoute_route_element              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipSourceRoute_route_element {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225TransportAddress_ipSourceRoute_route_element;

EXTERN int asn1PE_H225TransportAddress_ipSourceRoute_route_element (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute_route_element* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipSourceRoute_route_element (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute_route_element* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225TransportAddress_ipSourceRoute_route_element    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225_SeqOfH225TransportAddress_ipSourceRoute_route_element {
   ASN1UINT n;
   H225TransportAddress_ipSourceRoute_route_element *elem;
} H225_SeqOfH225TransportAddress_ipSourceRoute_route_element;

EXTERN int asn1PE_H225_SeqOfH225TransportAddress_ipSourceRoute_route_element (OOCTXT* pctxt, H225_SeqOfH225TransportAddress_ipSourceRoute_route_element* pvalue);

EXTERN int asn1PD_H225_SeqOfH225TransportAddress_ipSourceRoute_route_element (OOCTXT* pctxt, H225_SeqOfH225TransportAddress_ipSourceRoute_route_element* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipSourceRoute_routing                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225TransportAddress_ipSourceRoute_routing_strict 1
#define T_H225TransportAddress_ipSourceRoute_routing_loose 2
#define T_H225TransportAddress_ipSourceRoute_routing_extElem1 3

typedef struct EXTERN H225TransportAddress_ipSourceRoute_routing {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225TransportAddress_ipSourceRoute_routing;

EXTERN int asn1PE_H225TransportAddress_ipSourceRoute_routing (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute_routing* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipSourceRoute_routing (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute_routing* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipSourceRoute                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipSourceRoute {
   H225TransportAddress_ipSourceRoute_ip ip;
   ASN1USINT port;
   H225_SeqOfH225TransportAddress_ipSourceRoute_route_element route;
   H225TransportAddress_ipSourceRoute_routing routing;
   DList extElem1;
} H225TransportAddress_ipSourceRoute;

EXTERN int asn1PE_H225TransportAddress_ipSourceRoute (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipSourceRoute (OOCTXT* pctxt, H225TransportAddress_ipSourceRoute* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipxAddress_node                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipxAddress_node {
   ASN1UINT numocts;
   ASN1OCTET data[6];
} H225TransportAddress_ipxAddress_node;

EXTERN int asn1PE_H225TransportAddress_ipxAddress_node (OOCTXT* pctxt, H225TransportAddress_ipxAddress_node* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipxAddress_node (OOCTXT* pctxt, H225TransportAddress_ipxAddress_node* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipxAddress_netnum                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipxAddress_netnum {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225TransportAddress_ipxAddress_netnum;

EXTERN int asn1PE_H225TransportAddress_ipxAddress_netnum (OOCTXT* pctxt, H225TransportAddress_ipxAddress_netnum* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipxAddress_netnum (OOCTXT* pctxt, H225TransportAddress_ipxAddress_netnum* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipxAddress_port                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipxAddress_port {
   ASN1UINT numocts;
   ASN1OCTET data[2];
} H225TransportAddress_ipxAddress_port;

EXTERN int asn1PE_H225TransportAddress_ipxAddress_port (OOCTXT* pctxt, H225TransportAddress_ipxAddress_port* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipxAddress_port (OOCTXT* pctxt, H225TransportAddress_ipxAddress_port* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ipxAddress                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ipxAddress {
   H225TransportAddress_ipxAddress_node node;
   H225TransportAddress_ipxAddress_netnum netnum;
   H225TransportAddress_ipxAddress_port port;
} H225TransportAddress_ipxAddress;

EXTERN int asn1PE_H225TransportAddress_ipxAddress (OOCTXT* pctxt, H225TransportAddress_ipxAddress* pvalue);

EXTERN int asn1PD_H225TransportAddress_ipxAddress (OOCTXT* pctxt, H225TransportAddress_ipxAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ip6Address_ip                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ip6Address_ip {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H225TransportAddress_ip6Address_ip;

EXTERN int asn1PE_H225TransportAddress_ip6Address_ip (OOCTXT* pctxt, H225TransportAddress_ip6Address_ip* pvalue);

EXTERN int asn1PD_H225TransportAddress_ip6Address_ip (OOCTXT* pctxt, H225TransportAddress_ip6Address_ip* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_ip6Address                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_ip6Address {
   H225TransportAddress_ip6Address_ip ip;
   ASN1USINT port;
   DList extElem1;
} H225TransportAddress_ip6Address;

EXTERN int asn1PE_H225TransportAddress_ip6Address (OOCTXT* pctxt, H225TransportAddress_ip6Address* pvalue);

EXTERN int asn1PD_H225TransportAddress_ip6Address (OOCTXT* pctxt, H225TransportAddress_ip6Address* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_netBios                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_netBios {
   ASN1UINT numocts;
   ASN1OCTET data[16];
} H225TransportAddress_netBios;

EXTERN int asn1PE_H225TransportAddress_netBios (OOCTXT* pctxt, H225TransportAddress_netBios* pvalue);

EXTERN int asn1PD_H225TransportAddress_netBios (OOCTXT* pctxt, H225TransportAddress_netBios* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress_nsap                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportAddress_nsap {
   ASN1UINT numocts;
   ASN1OCTET data[20];
} H225TransportAddress_nsap;

EXTERN int asn1PE_H225TransportAddress_nsap (OOCTXT* pctxt, H225TransportAddress_nsap* pvalue);

EXTERN int asn1PD_H225TransportAddress_nsap (OOCTXT* pctxt, H225TransportAddress_nsap* pvalue);

/**************************************************************/
/*                                                            */
/*  H221NonStandard                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H221NonStandard {
   ASN1UINT8 t35CountryCode;
   ASN1UINT8 t35Extension;
   ASN1USINT manufacturerCode;
   DList extElem1;
} H225H221NonStandard;

EXTERN int asn1PE_H225H221NonStandard (OOCTXT* pctxt, H225H221NonStandard* pvalue);

EXTERN int asn1PD_H225H221NonStandard (OOCTXT* pctxt, H225H221NonStandard* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardIdentifier                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225NonStandardIdentifier_object 1
#define T_H225NonStandardIdentifier_h221NonStandard 2
#define T_H225NonStandardIdentifier_extElem1 3

typedef struct EXTERN H225NonStandardIdentifier {
   int t;
   union {
      /* t = 1 */
      ASN1OBJID *object;
      /* t = 2 */
      H225H221NonStandard *h221NonStandard;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225NonStandardIdentifier;

EXTERN int asn1PE_H225NonStandardIdentifier (OOCTXT* pctxt, H225NonStandardIdentifier* pvalue);

EXTERN int asn1PD_H225NonStandardIdentifier (OOCTXT* pctxt, H225NonStandardIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardParameter                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225NonStandardParameter {
   H225NonStandardIdentifier nonStandardIdentifier;
   ASN1DynOctStr data;
} H225NonStandardParameter;

EXTERN int asn1PE_H225NonStandardParameter (OOCTXT* pctxt, H225NonStandardParameter* pvalue);

EXTERN int asn1PD_H225NonStandardParameter (OOCTXT* pctxt, H225NonStandardParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportAddress                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225TransportAddress_ipAddress 1
#define T_H225TransportAddress_ipSourceRoute 2
#define T_H225TransportAddress_ipxAddress 3
#define T_H225TransportAddress_ip6Address 4
#define T_H225TransportAddress_netBios  5
#define T_H225TransportAddress_nsap     6
#define T_H225TransportAddress_nonStandardAddress 7
#define T_H225TransportAddress_extElem1 8

typedef struct EXTERN H225TransportAddress {
   int t;
   union {
      /* t = 1 */
      H225TransportAddress_ipAddress *ipAddress;
      /* t = 2 */
      H225TransportAddress_ipSourceRoute *ipSourceRoute;
      /* t = 3 */
      H225TransportAddress_ipxAddress *ipxAddress;
      /* t = 4 */
      H225TransportAddress_ip6Address *ip6Address;
      /* t = 5 */
      H225TransportAddress_netBios *netBios;
      /* t = 6 */
      H225TransportAddress_nsap *nsap;
      /* t = 7 */
      H225NonStandardParameter *nonStandardAddress;
      /* t = 8 */
      ASN1OpenType *extElem1;
   } u;
} H225TransportAddress;

EXTERN int asn1PE_H225TransportAddress (OOCTXT* pctxt, H225TransportAddress* pvalue);

EXTERN int asn1PD_H225TransportAddress (OOCTXT* pctxt, H225TransportAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  PublicTypeOfNumber                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225PublicTypeOfNumber_unknown 1
#define T_H225PublicTypeOfNumber_internationalNumber 2
#define T_H225PublicTypeOfNumber_nationalNumber 3
#define T_H225PublicTypeOfNumber_networkSpecificNumber 4
#define T_H225PublicTypeOfNumber_subscriberNumber 5
#define T_H225PublicTypeOfNumber_abbreviatedNumber 6
#define T_H225PublicTypeOfNumber_extElem1 7

typedef struct EXTERN H225PublicTypeOfNumber {
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
} H225PublicTypeOfNumber;

EXTERN int asn1PE_H225PublicTypeOfNumber (OOCTXT* pctxt, H225PublicTypeOfNumber* pvalue);

EXTERN int asn1PD_H225PublicTypeOfNumber (OOCTXT* pctxt, H225PublicTypeOfNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  PublicPartyNumber                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225PublicPartyNumber {
   H225PublicTypeOfNumber publicTypeOfNumber;
   H225NumberDigits publicNumberDigits;
} H225PublicPartyNumber;

EXTERN int asn1PE_H225PublicPartyNumber (OOCTXT* pctxt, H225PublicPartyNumber* pvalue);

EXTERN int asn1PD_H225PublicPartyNumber (OOCTXT* pctxt, H225PublicPartyNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  PrivateTypeOfNumber                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225PrivateTypeOfNumber_unknown 1
#define T_H225PrivateTypeOfNumber_level2RegionalNumber 2
#define T_H225PrivateTypeOfNumber_level1RegionalNumber 3
#define T_H225PrivateTypeOfNumber_pISNSpecificNumber 4
#define T_H225PrivateTypeOfNumber_localNumber 5
#define T_H225PrivateTypeOfNumber_abbreviatedNumber 6
#define T_H225PrivateTypeOfNumber_extElem1 7

typedef struct EXTERN H225PrivateTypeOfNumber {
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
} H225PrivateTypeOfNumber;

EXTERN int asn1PE_H225PrivateTypeOfNumber (OOCTXT* pctxt, H225PrivateTypeOfNumber* pvalue);

EXTERN int asn1PD_H225PrivateTypeOfNumber (OOCTXT* pctxt, H225PrivateTypeOfNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  PrivatePartyNumber                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225PrivatePartyNumber {
   H225PrivateTypeOfNumber privateTypeOfNumber;
   H225NumberDigits privateNumberDigits;
} H225PrivatePartyNumber;

EXTERN int asn1PE_H225PrivatePartyNumber (OOCTXT* pctxt, H225PrivatePartyNumber* pvalue);

EXTERN int asn1PD_H225PrivatePartyNumber (OOCTXT* pctxt, H225PrivatePartyNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  PartyNumber                                               */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225PartyNumber_e164Number    1
#define T_H225PartyNumber_dataPartyNumber 2
#define T_H225PartyNumber_telexPartyNumber 3
#define T_H225PartyNumber_privateNumber 4
#define T_H225PartyNumber_nationalStandardPartyNumber 5
#define T_H225PartyNumber_extElem1      6

typedef struct EXTERN H225PartyNumber {
   int t;
   union {
      /* t = 1 */
      H225PublicPartyNumber *e164Number;
      /* t = 2 */
      H225NumberDigits dataPartyNumber;
      /* t = 3 */
      H225NumberDigits telexPartyNumber;
      /* t = 4 */
      H225PrivatePartyNumber *privateNumber;
      /* t = 5 */
      H225NumberDigits nationalStandardPartyNumber;
      /* t = 6 */
      ASN1OpenType *extElem1;
   } u;
} H225PartyNumber;

EXTERN int asn1PE_H225PartyNumber (OOCTXT* pctxt, H225PartyNumber* pvalue);

EXTERN int asn1PD_H225PartyNumber (OOCTXT* pctxt, H225PartyNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  ANSI_41_UIM_system_id                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ANSI_41_UIM_system_id_sid 1
#define T_H225ANSI_41_UIM_system_id_mid 2
#define T_H225ANSI_41_UIM_system_id_extElem1 3

typedef struct EXTERN H225ANSI_41_UIM_system_id {
   int t;
   union {
      /* t = 1 */
      H225TBCD_STRING sid;
      /* t = 2 */
      H225TBCD_STRING mid;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225ANSI_41_UIM_system_id;

EXTERN int asn1PE_H225ANSI_41_UIM_system_id (OOCTXT* pctxt, H225ANSI_41_UIM_system_id* pvalue);

EXTERN int asn1PD_H225ANSI_41_UIM_system_id (OOCTXT* pctxt, H225ANSI_41_UIM_system_id* pvalue);

/**************************************************************/
/*                                                            */
/*  ANSI_41_UIM_systemMyTypeCode                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ANSI_41_UIM_systemMyTypeCode {
   ASN1UINT numocts;
   ASN1OCTET data[1];
} H225ANSI_41_UIM_systemMyTypeCode;

EXTERN int asn1PE_H225ANSI_41_UIM_systemMyTypeCode (OOCTXT* pctxt, H225ANSI_41_UIM_systemMyTypeCode* pvalue);

EXTERN int asn1PD_H225ANSI_41_UIM_systemMyTypeCode (OOCTXT* pctxt, H225ANSI_41_UIM_systemMyTypeCode* pvalue);

/**************************************************************/
/*                                                            */
/*  ANSI_41_UIM_systemAccessType                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ANSI_41_UIM_systemAccessType {
   ASN1UINT numocts;
   ASN1OCTET data[1];
} H225ANSI_41_UIM_systemAccessType;

EXTERN int asn1PE_H225ANSI_41_UIM_systemAccessType (OOCTXT* pctxt, H225ANSI_41_UIM_systemAccessType* pvalue);

EXTERN int asn1PD_H225ANSI_41_UIM_systemAccessType (OOCTXT* pctxt, H225ANSI_41_UIM_systemAccessType* pvalue);

/**************************************************************/
/*                                                            */
/*  ANSI_41_UIM_qualificationInformationCode                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ANSI_41_UIM_qualificationInformationCode {
   ASN1UINT numocts;
   ASN1OCTET data[1];
} H225ANSI_41_UIM_qualificationInformationCode;

EXTERN int asn1PE_H225ANSI_41_UIM_qualificationInformationCode (OOCTXT* pctxt, H225ANSI_41_UIM_qualificationInformationCode* pvalue);

EXTERN int asn1PD_H225ANSI_41_UIM_qualificationInformationCode (OOCTXT* pctxt, H225ANSI_41_UIM_qualificationInformationCode* pvalue);

/**************************************************************/
/*                                                            */
/*  ANSI_41_UIM                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ANSI_41_UIM {
   struct {
      unsigned imsiPresent : 1;
      unsigned minPresent : 1;
      unsigned mdnPresent : 1;
      unsigned msisdnPresent : 1;
      unsigned esnPresent : 1;
      unsigned mscidPresent : 1;
      unsigned systemMyTypeCodePresent : 1;
      unsigned systemAccessTypePresent : 1;
      unsigned qualificationInformationCodePresent : 1;
      unsigned sesnPresent : 1;
      unsigned socPresent : 1;
   } m;
   H225TBCD_STRING imsi;
   H225TBCD_STRING min;
   H225TBCD_STRING mdn;
   H225TBCD_STRING msisdn;
   H225TBCD_STRING esn;
   H225TBCD_STRING mscid;
   H225ANSI_41_UIM_system_id system_id;
   H225ANSI_41_UIM_systemMyTypeCode systemMyTypeCode;
   H225ANSI_41_UIM_systemAccessType systemAccessType;
   H225ANSI_41_UIM_qualificationInformationCode qualificationInformationCode;
   H225TBCD_STRING sesn;
   H225TBCD_STRING soc;
   DList extElem1;
} H225ANSI_41_UIM;

EXTERN int asn1PE_H225ANSI_41_UIM (OOCTXT* pctxt, H225ANSI_41_UIM* pvalue);

EXTERN int asn1PD_H225ANSI_41_UIM (OOCTXT* pctxt, H225ANSI_41_UIM* pvalue);

/**************************************************************/
/*                                                            */
/*  GSM_UIM_tmsi                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GSM_UIM_tmsi {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225GSM_UIM_tmsi;

EXTERN int asn1PE_H225GSM_UIM_tmsi (OOCTXT* pctxt, H225GSM_UIM_tmsi* pvalue);

EXTERN int asn1PD_H225GSM_UIM_tmsi (OOCTXT* pctxt, H225GSM_UIM_tmsi* pvalue);

/**************************************************************/
/*                                                            */
/*  GSM_UIM                                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GSM_UIM {
   struct {
      unsigned imsiPresent : 1;
      unsigned tmsiPresent : 1;
      unsigned msisdnPresent : 1;
      unsigned imeiPresent : 1;
      unsigned hplmnPresent : 1;
      unsigned vplmnPresent : 1;
   } m;
   H225TBCD_STRING imsi;
   H225GSM_UIM_tmsi tmsi;
   H225TBCD_STRING msisdn;
   H225TBCD_STRING imei;
   H225TBCD_STRING hplmn;
   H225TBCD_STRING vplmn;
   DList extElem1;
} H225GSM_UIM;

EXTERN int asn1PE_H225GSM_UIM (OOCTXT* pctxt, H225GSM_UIM* pvalue);

EXTERN int asn1PD_H225GSM_UIM (OOCTXT* pctxt, H225GSM_UIM* pvalue);

/**************************************************************/
/*                                                            */
/*  MobileUIM                                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225MobileUIM_ansi_41_uim     1
#define T_H225MobileUIM_gsm_uim         2
#define T_H225MobileUIM_extElem1        3

typedef struct EXTERN H225MobileUIM {
   int t;
   union {
      /* t = 1 */
      H225ANSI_41_UIM *ansi_41_uim;
      /* t = 2 */
      H225GSM_UIM *gsm_uim;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225MobileUIM;

EXTERN int asn1PE_H225MobileUIM (OOCTXT* pctxt, H225MobileUIM* pvalue);

EXTERN int asn1PD_H225MobileUIM (OOCTXT* pctxt, H225MobileUIM* pvalue);

/**************************************************************/
/*                                                            */
/*  AliasAddress                                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225AliasAddress_dialedDigits 1
#define T_H225AliasAddress_h323_ID      2
#define T_H225AliasAddress_url_ID       3
#define T_H225AliasAddress_transportID  4
#define T_H225AliasAddress_email_ID     5
#define T_H225AliasAddress_partyNumber  6
#define T_H225AliasAddress_mobileUIM    7
#define T_H225AliasAddress_extElem1     8

typedef struct EXTERN H225AliasAddress {
   int t;
   union {
      /* t = 1 */
      ASN1IA5String dialedDigits;
      /* t = 2 */
      ASN1BMPString h323_ID;
      /* t = 3 */
      ASN1IA5String url_ID;
      /* t = 4 */
      H225TransportAddress *transportID;
      /* t = 5 */
      ASN1IA5String email_ID;
      /* t = 6 */
      H225PartyNumber *partyNumber;
      /* t = 7 */
      H225MobileUIM *mobileUIM;
      /* t = 8 */
      ASN1OpenType *extElem1;
   } u;
} H225AliasAddress;

EXTERN int asn1PE_H225AliasAddress (OOCTXT* pctxt, H225AliasAddress* pvalue);

EXTERN int asn1PD_H225AliasAddress (OOCTXT* pctxt, H225AliasAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  Content_compound                                          */
/*                                                            */
/**************************************************************/

/* List of H225EnumeratedParameter */
typedef DList H225Content_compound;

EXTERN int asn1PE_H225Content_compound (OOCTXT* pctxt, H225Content_compound value);

EXTERN int asn1PD_H225Content_compound (OOCTXT* pctxt, H225Content_compound* pvalue);

/**************************************************************/
/*                                                            */
/*  Content_nested                                            */
/*                                                            */
/**************************************************************/

/* List of H225GenericData */
typedef DList H225Content_nested;

EXTERN int asn1PE_H225Content_nested (OOCTXT* pctxt, H225Content_nested value);

EXTERN int asn1PD_H225Content_nested (OOCTXT* pctxt, H225Content_nested* pvalue);

/**************************************************************/
/*                                                            */
/*  Content                                                   */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225Content_raw               1
#define T_H225Content_text              2
#define T_H225Content_unicode           3
#define T_H225Content_bool_             4
#define T_H225Content_number8           5
#define T_H225Content_number16          6
#define T_H225Content_number32          7
#define T_H225Content_id                8
#define T_H225Content_alias             9
#define T_H225Content_transport         10
#define T_H225Content_compound          11
#define T_H225Content_nested            12
#define T_H225Content_extElem1          13

typedef struct EXTERN H225Content {
   int t;
   union {
      /* t = 1 */
      ASN1DynOctStr *raw;
      /* t = 2 */
      ASN1IA5String text;
      /* t = 3 */
      ASN1BMPString unicode;
      /* t = 4 */
      ASN1BOOL bool_;
      /* t = 5 */
      ASN1UINT8 number8;
      /* t = 6 */
      ASN1USINT number16;
      /* t = 7 */
      ASN1UINT number32;
      /* t = 8 */
      H225GenericIdentifier *id;
      /* t = 9 */
      H225AliasAddress *alias;
      /* t = 10 */
      H225TransportAddress *transport;
      /* t = 11 */
      H225Content_compound *compound;
      /* t = 12 */
      H225Content_nested *nested;
      /* t = 13 */
      ASN1OpenType *extElem1;
   } u;
} H225Content;

EXTERN int asn1PE_H225Content (OOCTXT* pctxt, H225Content* pvalue);

EXTERN int asn1PD_H225Content (OOCTXT* pctxt, H225Content* pvalue);

/**************************************************************/
/*                                                            */
/*  EnumeratedParameter                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225EnumeratedParameter {
   struct {
      unsigned contentPresent : 1;
   } m;
   H225GenericIdentifier id;
   H225Content content;
   DList extElem1;
} H225EnumeratedParameter;

EXTERN int asn1PE_H225EnumeratedParameter (OOCTXT* pctxt, H225EnumeratedParameter* pvalue);

EXTERN int asn1PD_H225EnumeratedParameter (OOCTXT* pctxt, H225EnumeratedParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  GenericData_parameters                                    */
/*                                                            */
/**************************************************************/

/* List of H225EnumeratedParameter */
typedef DList H225GenericData_parameters;

EXTERN int asn1PE_H225GenericData_parameters (OOCTXT* pctxt, H225GenericData_parameters value);

EXTERN int asn1PD_H225GenericData_parameters (OOCTXT* pctxt, H225GenericData_parameters* pvalue);

/**************************************************************/
/*                                                            */
/*  GenericData                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GenericData {
   struct {
      unsigned parametersPresent : 1;
   } m;
   H225GenericIdentifier id;
   H225GenericData_parameters parameters;
   DList extElem1;
} H225GenericData;

EXTERN int asn1PE_H225GenericData (OOCTXT* pctxt, H225GenericData* pvalue);

EXTERN int asn1PD_H225GenericData (OOCTXT* pctxt, H225GenericData* pvalue);

/**************************************************************/
/*                                                            */
/*  FeatureDescriptor                                         */
/*                                                            */
/**************************************************************/

typedef H225GenericData H225FeatureDescriptor;

EXTERN int asn1PE_H225FeatureDescriptor (OOCTXT* pctxt, H225FeatureDescriptor* pvalue);

EXTERN int asn1PD_H225FeatureDescriptor (OOCTXT* pctxt, H225FeatureDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  FastStartToken                                            */
/*                                                            */
/**************************************************************/

typedef H235ClearToken H225FastStartToken;

EXTERN int asn1PE_H225FastStartToken (OOCTXT* pctxt, H225FastStartToken* pvalue);

EXTERN int asn1PD_H225FastStartToken (OOCTXT* pctxt, H225FastStartToken* pvalue);

/**************************************************************/
/*                                                            */
/*  EncodedFastStartToken                                     */
/*                                                            */
/**************************************************************/

typedef ASN1OpenType H225EncodedFastStartToken;

EXTERN int asn1PE_H225EncodedFastStartToken (OOCTXT* pctxt, H225EncodedFastStartToken value);

EXTERN int asn1PD_H225EncodedFastStartToken (OOCTXT* pctxt, H225EncodedFastStartToken* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UserInformation_user_data_user_information           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UserInformation_user_data_user_information {
   ASN1UINT numocts;
   ASN1OCTET data[131];
} H225H323_UserInformation_user_data_user_information;

EXTERN int asn1PE_H225H323_UserInformation_user_data_user_information (OOCTXT* pctxt, H225H323_UserInformation_user_data_user_information* pvalue);

EXTERN int asn1PD_H225H323_UserInformation_user_data_user_information (OOCTXT* pctxt, H225H323_UserInformation_user_data_user_information* pvalue);

/**************************************************************/
/*                                                            */
/*  EndpointType_set                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225EndpointType_set {
   ASN1UINT  numbits;
   ASN1OCTET data[4];
} H225EndpointType_set;

EXTERN int asn1PE_H225EndpointType_set (OOCTXT* pctxt, H225EndpointType_set* pvalue);

EXTERN int asn1PD_H225EndpointType_set (OOCTXT* pctxt, H225EndpointType_set* pvalue);

/**************************************************************/
/*                                                            */
/*  VendorIdentifier_productId                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225VendorIdentifier_productId {
   ASN1UINT numocts;
   ASN1OCTET data[256];
} H225VendorIdentifier_productId;

EXTERN int asn1PE_H225VendorIdentifier_productId (OOCTXT* pctxt, H225VendorIdentifier_productId* pvalue);

EXTERN int asn1PD_H225VendorIdentifier_productId (OOCTXT* pctxt, H225VendorIdentifier_productId* pvalue);

/**************************************************************/
/*                                                            */
/*  VendorIdentifier_versionId                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225VendorIdentifier_versionId {
   ASN1UINT numocts;
   ASN1OCTET data[256];
} H225VendorIdentifier_versionId;

EXTERN int asn1PE_H225VendorIdentifier_versionId (OOCTXT* pctxt, H225VendorIdentifier_versionId* pvalue);

EXTERN int asn1PD_H225VendorIdentifier_versionId (OOCTXT* pctxt, H225VendorIdentifier_versionId* pvalue);

/**************************************************************/
/*                                                            */
/*  CicInfo_cic_element                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CicInfo_cic_element {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225CicInfo_cic_element;

EXTERN int asn1PE_H225CicInfo_cic_element (OOCTXT* pctxt, H225CicInfo_cic_element* pvalue);

EXTERN int asn1PD_H225CicInfo_cic_element (OOCTXT* pctxt, H225CicInfo_cic_element* pvalue);

/**************************************************************/
/*                                                            */
/*  CicInfo_pointCode                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CicInfo_pointCode {
   ASN1UINT numocts;
   ASN1OCTET data[5];
} H225CicInfo_pointCode;

EXTERN int asn1PE_H225CicInfo_pointCode (OOCTXT* pctxt, H225CicInfo_pointCode* pvalue);

EXTERN int asn1PD_H225CicInfo_pointCode (OOCTXT* pctxt, H225CicInfo_pointCode* pvalue);

/**************************************************************/
/*                                                            */
/*  CarrierInfo_carrierIdentificationCode                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CarrierInfo_carrierIdentificationCode {
   ASN1UINT numocts;
   ASN1OCTET data[4];
} H225CarrierInfo_carrierIdentificationCode;

EXTERN int asn1PE_H225CarrierInfo_carrierIdentificationCode (OOCTXT* pctxt, H225CarrierInfo_carrierIdentificationCode* pvalue);

EXTERN int asn1PD_H225CarrierInfo_carrierIdentificationCode (OOCTXT* pctxt, H225CarrierInfo_carrierIdentificationCode* pvalue);

/**************************************************************/
/*                                                            */
/*  CallTerminationCause_releaseCompleteCauseIE               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallTerminationCause_releaseCompleteCauseIE {
   ASN1UINT numocts;
   ASN1OCTET data[32];
} H225CallTerminationCause_releaseCompleteCauseIE;

EXTERN int asn1PE_H225CallTerminationCause_releaseCompleteCauseIE (OOCTXT* pctxt, H225CallTerminationCause_releaseCompleteCauseIE* pvalue);

EXTERN int asn1PD_H225CallTerminationCause_releaseCompleteCauseIE (OOCTXT* pctxt, H225CallTerminationCause_releaseCompleteCauseIE* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225AliasAddress                                    */
/*                                                            */
/**************************************************************/

/* List of H225AliasAddress */
typedef DList H225_SeqOfH225AliasAddress;

EXTERN int asn1PE_H225_SeqOfH225AliasAddress (OOCTXT* pctxt, H225_SeqOfH225AliasAddress value);

EXTERN int asn1PD_H225_SeqOfH225AliasAddress (OOCTXT* pctxt, H225_SeqOfH225AliasAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  VendorIdentifier                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225VendorIdentifier {
   struct {
      unsigned productIdPresent : 1;
      unsigned versionIdPresent : 1;
      unsigned enterpriseNumberPresent : 1;
   } m;
   H225H221NonStandard vendor;
   H225VendorIdentifier_productId productId;
   H225VendorIdentifier_versionId versionId;
   ASN1OBJID enterpriseNumber;
   DList extElem1;
} H225VendorIdentifier;

EXTERN int asn1PE_H225VendorIdentifier (OOCTXT* pctxt, H225VendorIdentifier* pvalue);

EXTERN int asn1PD_H225VendorIdentifier (OOCTXT* pctxt, H225VendorIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperInfo                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GatekeeperInfo {
   struct {
      unsigned nonStandardDataPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   DList extElem1;
} H225GatekeeperInfo;

EXTERN int asn1PE_H225GatekeeperInfo (OOCTXT* pctxt, H225GatekeeperInfo* pvalue);

EXTERN int asn1PD_H225GatekeeperInfo (OOCTXT* pctxt, H225GatekeeperInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  DataRate                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225DataRate {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned channelMultiplierPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225BandWidth channelRate;
   ASN1USINT channelMultiplier;
   DList extElem1;
} H225DataRate;

EXTERN int asn1PE_H225DataRate (OOCTXT* pctxt, H225DataRate* pvalue);

EXTERN int asn1PD_H225DataRate (OOCTXT* pctxt, H225DataRate* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225DataRate                                        */
/*                                                            */
/**************************************************************/

/* List of H225DataRate */
typedef DList H225_SeqOfH225DataRate;

EXTERN int asn1PE_H225_SeqOfH225DataRate (OOCTXT* pctxt, H225_SeqOfH225DataRate value);

EXTERN int asn1PD_H225_SeqOfH225DataRate (OOCTXT* pctxt, H225_SeqOfH225DataRate* pvalue);

/**************************************************************/
/*                                                            */
/*  SupportedPrefix                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225SupportedPrefix {
   struct {
      unsigned nonStandardDataPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225AliasAddress prefix;
   DList extElem1;
} H225SupportedPrefix;

EXTERN int asn1PE_H225SupportedPrefix (OOCTXT* pctxt, H225SupportedPrefix* pvalue);

EXTERN int asn1PD_H225SupportedPrefix (OOCTXT* pctxt, H225SupportedPrefix* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225SupportedPrefix                                 */
/*                                                            */
/**************************************************************/

/* List of H225SupportedPrefix */
typedef DList H225_SeqOfH225SupportedPrefix;

EXTERN int asn1PE_H225_SeqOfH225SupportedPrefix (OOCTXT* pctxt, H225_SeqOfH225SupportedPrefix value);

EXTERN int asn1PD_H225_SeqOfH225SupportedPrefix (OOCTXT* pctxt, H225_SeqOfH225SupportedPrefix* pvalue);

/**************************************************************/
/*                                                            */
/*  H310Caps                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H310Caps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225H310Caps;

EXTERN int asn1PE_H225H310Caps (OOCTXT* pctxt, H225H310Caps* pvalue);

EXTERN int asn1PD_H225H310Caps (OOCTXT* pctxt, H225H310Caps* pvalue);

/**************************************************************/
/*                                                            */
/*  H320Caps                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H320Caps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225H320Caps;

EXTERN int asn1PE_H225H320Caps (OOCTXT* pctxt, H225H320Caps* pvalue);

EXTERN int asn1PD_H225H320Caps (OOCTXT* pctxt, H225H320Caps* pvalue);

/**************************************************************/
/*                                                            */
/*  H321Caps                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H321Caps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225H321Caps;

EXTERN int asn1PE_H225H321Caps (OOCTXT* pctxt, H225H321Caps* pvalue);

EXTERN int asn1PD_H225H321Caps (OOCTXT* pctxt, H225H321Caps* pvalue);

/**************************************************************/
/*                                                            */
/*  H322Caps                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H322Caps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225H322Caps;

EXTERN int asn1PE_H225H322Caps (OOCTXT* pctxt, H225H322Caps* pvalue);

EXTERN int asn1PD_H225H322Caps (OOCTXT* pctxt, H225H322Caps* pvalue);

/**************************************************************/
/*                                                            */
/*  H323Caps                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323Caps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225H323Caps;

EXTERN int asn1PE_H225H323Caps (OOCTXT* pctxt, H225H323Caps* pvalue);

EXTERN int asn1PD_H225H323Caps (OOCTXT* pctxt, H225H323Caps* pvalue);

/**************************************************************/
/*                                                            */
/*  H324Caps                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H324Caps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225H324Caps;

EXTERN int asn1PE_H225H324Caps (OOCTXT* pctxt, H225H324Caps* pvalue);

EXTERN int asn1PD_H225H324Caps (OOCTXT* pctxt, H225H324Caps* pvalue);

/**************************************************************/
/*                                                            */
/*  VoiceCaps                                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225VoiceCaps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225VoiceCaps;

EXTERN int asn1PE_H225VoiceCaps (OOCTXT* pctxt, H225VoiceCaps* pvalue);

EXTERN int asn1PD_H225VoiceCaps (OOCTXT* pctxt, H225VoiceCaps* pvalue);

/**************************************************************/
/*                                                            */
/*  T120OnlyCaps                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225T120OnlyCaps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225T120OnlyCaps;

EXTERN int asn1PE_H225T120OnlyCaps (OOCTXT* pctxt, H225T120OnlyCaps* pvalue);

EXTERN int asn1PD_H225T120OnlyCaps (OOCTXT* pctxt, H225T120OnlyCaps* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardProtocol                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225NonStandardProtocol {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225NonStandardProtocol;

EXTERN int asn1PE_H225NonStandardProtocol (OOCTXT* pctxt, H225NonStandardProtocol* pvalue);

EXTERN int asn1PD_H225NonStandardProtocol (OOCTXT* pctxt, H225NonStandardProtocol* pvalue);

/**************************************************************/
/*                                                            */
/*  T38FaxAnnexbOnlyCaps                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225T38FaxAnnexbOnlyCaps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   H245DataProtocolCapability t38FaxProtocol;
   H245T38FaxProfile t38FaxProfile;
   DList extElem1;
} H225T38FaxAnnexbOnlyCaps;

EXTERN int asn1PE_H225T38FaxAnnexbOnlyCaps (OOCTXT* pctxt, H225T38FaxAnnexbOnlyCaps* pvalue);

EXTERN int asn1PD_H225T38FaxAnnexbOnlyCaps (OOCTXT* pctxt, H225T38FaxAnnexbOnlyCaps* pvalue);

/**************************************************************/
/*                                                            */
/*  SIPCaps                                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225SIPCaps {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned dataRatesSupportedPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225DataRate dataRatesSupported;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225SIPCaps;

EXTERN int asn1PE_H225SIPCaps (OOCTXT* pctxt, H225SIPCaps* pvalue);

EXTERN int asn1PD_H225SIPCaps (OOCTXT* pctxt, H225SIPCaps* pvalue);

/**************************************************************/
/*                                                            */
/*  SupportedProtocols                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225SupportedProtocols_nonStandardData 1
#define T_H225SupportedProtocols_h310   2
#define T_H225SupportedProtocols_h320   3
#define T_H225SupportedProtocols_h321   4
#define T_H225SupportedProtocols_h322   5
#define T_H225SupportedProtocols_h323   6
#define T_H225SupportedProtocols_h324   7
#define T_H225SupportedProtocols_voice  8
#define T_H225SupportedProtocols_t120_only 9
#define T_H225SupportedProtocols_nonStandardProtocol 10
#define T_H225SupportedProtocols_t38FaxAnnexbOnly 11
#define T_H225SupportedProtocols_sip    12
#define T_H225SupportedProtocols_extElem1 13

typedef struct EXTERN H225SupportedProtocols {
   int t;
   union {
      /* t = 1 */
      H225NonStandardParameter *nonStandardData;
      /* t = 2 */
      H225H310Caps *h310;
      /* t = 3 */
      H225H320Caps *h320;
      /* t = 4 */
      H225H321Caps *h321;
      /* t = 5 */
      H225H322Caps *h322;
      /* t = 6 */
      H225H323Caps *h323;
      /* t = 7 */
      H225H324Caps *h324;
      /* t = 8 */
      H225VoiceCaps *voice;
      /* t = 9 */
      H225T120OnlyCaps *t120_only;
      /* t = 10 */
      H225NonStandardProtocol *nonStandardProtocol;
      /* t = 11 */
      H225T38FaxAnnexbOnlyCaps *t38FaxAnnexbOnly;
      /* t = 12 */
      H225SIPCaps *sip;
      /* t = 13 */
      ASN1OpenType *extElem1;
   } u;
} H225SupportedProtocols;

EXTERN int asn1PE_H225SupportedProtocols (OOCTXT* pctxt, H225SupportedProtocols* pvalue);

EXTERN int asn1PD_H225SupportedProtocols (OOCTXT* pctxt, H225SupportedProtocols* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225SupportedProtocols                              */
/*                                                            */
/**************************************************************/

/* List of H225SupportedProtocols */
typedef DList H225_SeqOfH225SupportedProtocols;

EXTERN int asn1PE_H225_SeqOfH225SupportedProtocols (OOCTXT* pctxt, H225_SeqOfH225SupportedProtocols value);

EXTERN int asn1PD_H225_SeqOfH225SupportedProtocols (OOCTXT* pctxt, H225_SeqOfH225SupportedProtocols* pvalue);

/**************************************************************/
/*                                                            */
/*  GatewayInfo                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GatewayInfo {
   struct {
      unsigned protocolPresent : 1;
      unsigned nonStandardDataPresent : 1;
   } m;
   H225_SeqOfH225SupportedProtocols protocol;
   H225NonStandardParameter nonStandardData;
   DList extElem1;
} H225GatewayInfo;

EXTERN int asn1PE_H225GatewayInfo (OOCTXT* pctxt, H225GatewayInfo* pvalue);

EXTERN int asn1PD_H225GatewayInfo (OOCTXT* pctxt, H225GatewayInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  McuInfo                                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225McuInfo {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned protocolPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225SupportedProtocols protocol;
   DList extElem1;
} H225McuInfo;

EXTERN int asn1PE_H225McuInfo (OOCTXT* pctxt, H225McuInfo* pvalue);

EXTERN int asn1PD_H225McuInfo (OOCTXT* pctxt, H225McuInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  TerminalInfo                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TerminalInfo {
   struct {
      unsigned nonStandardDataPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   DList extElem1;
} H225TerminalInfo;

EXTERN int asn1PE_H225TerminalInfo (OOCTXT* pctxt, H225TerminalInfo* pvalue);

EXTERN int asn1PD_H225TerminalInfo (OOCTXT* pctxt, H225TerminalInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  TunnelledProtocolAlternateIdentifier                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TunnelledProtocolAlternateIdentifier {
   struct {
      unsigned protocolVariantPresent : 1;
   } m;
   ASN1IA5String protocolType;
   ASN1IA5String protocolVariant;
   DList extElem1;
} H225TunnelledProtocolAlternateIdentifier;

EXTERN int asn1PE_H225TunnelledProtocolAlternateIdentifier (OOCTXT* pctxt, H225TunnelledProtocolAlternateIdentifier* pvalue);

EXTERN int asn1PD_H225TunnelledProtocolAlternateIdentifier (OOCTXT* pctxt, H225TunnelledProtocolAlternateIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  TunnelledProtocol_id                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225TunnelledProtocol_id_tunnelledProtocolObjectID 1
#define T_H225TunnelledProtocol_id_tunnelledProtocolAlternateID 2
#define T_H225TunnelledProtocol_id_extElem1 3

typedef struct EXTERN H225TunnelledProtocol_id {
   int t;
   union {
      /* t = 1 */
      ASN1OBJID *tunnelledProtocolObjectID;
      /* t = 2 */
      H225TunnelledProtocolAlternateIdentifier *tunnelledProtocolAlternateID;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225TunnelledProtocol_id;

EXTERN int asn1PE_H225TunnelledProtocol_id (OOCTXT* pctxt, H225TunnelledProtocol_id* pvalue);

EXTERN int asn1PD_H225TunnelledProtocol_id (OOCTXT* pctxt, H225TunnelledProtocol_id* pvalue);

/**************************************************************/
/*                                                            */
/*  TunnelledProtocol                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TunnelledProtocol {
   struct {
      unsigned subIdentifierPresent : 1;
   } m;
   H225TunnelledProtocol_id id;
   ASN1IA5String subIdentifier;
   DList extElem1;
} H225TunnelledProtocol;

EXTERN int asn1PE_H225TunnelledProtocol (OOCTXT* pctxt, H225TunnelledProtocol* pvalue);

EXTERN int asn1PD_H225TunnelledProtocol (OOCTXT* pctxt, H225TunnelledProtocol* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225TunnelledProtocol                               */
/*                                                            */
/**************************************************************/

/* List of H225TunnelledProtocol */
typedef DList H225_SeqOfH225TunnelledProtocol;

EXTERN int asn1PE_H225_SeqOfH225TunnelledProtocol (OOCTXT* pctxt, H225_SeqOfH225TunnelledProtocol value);

EXTERN int asn1PD_H225_SeqOfH225TunnelledProtocol (OOCTXT* pctxt, H225_SeqOfH225TunnelledProtocol* pvalue);

/**************************************************************/
/*                                                            */
/*  EndpointType                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225EndpointType {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned vendorPresent : 1;
      unsigned gatekeeperPresent : 1;
      unsigned gatewayPresent : 1;
      unsigned mcuPresent : 1;
      unsigned terminalPresent : 1;
      unsigned setPresent : 1;
      unsigned supportedTunnelledProtocolsPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225VendorIdentifier vendor;
   H225GatekeeperInfo gatekeeper;
   H225GatewayInfo gateway;
   H225McuInfo mcu;
   H225TerminalInfo terminal;
   ASN1BOOL mc;
   ASN1BOOL undefinedNode;
   H225EndpointType_set set;
   H225_SeqOfH225TunnelledProtocol supportedTunnelledProtocols;
   DList extElem1;
} H225EndpointType;

EXTERN int asn1PE_H225EndpointType (OOCTXT* pctxt, H225EndpointType* pvalue);

EXTERN int asn1PD_H225EndpointType (OOCTXT* pctxt, H225EndpointType* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225CallReferenceValue                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225_SeqOfH225CallReferenceValue {
   ASN1UINT n;
   H225CallReferenceValue *elem;
} H225_SeqOfH225CallReferenceValue;

EXTERN int asn1PE_H225_SeqOfH225CallReferenceValue (OOCTXT* pctxt, H225_SeqOfH225CallReferenceValue* pvalue);

EXTERN int asn1PD_H225_SeqOfH225CallReferenceValue (OOCTXT* pctxt, H225_SeqOfH225CallReferenceValue* pvalue);

/**************************************************************/
/*                                                            */
/*  Setup_UUIE_conferenceGoal                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225Setup_UUIE_conferenceGoal_create 1
#define T_H225Setup_UUIE_conferenceGoal_join 2
#define T_H225Setup_UUIE_conferenceGoal_invite 3
#define T_H225Setup_UUIE_conferenceGoal_capability_negotiation 4
#define T_H225Setup_UUIE_conferenceGoal_callIndependentSupplementaryService 5
#define T_H225Setup_UUIE_conferenceGoal_extElem1 6

typedef struct EXTERN H225Setup_UUIE_conferenceGoal {
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
} H225Setup_UUIE_conferenceGoal;

EXTERN int asn1PE_H225Setup_UUIE_conferenceGoal (OOCTXT* pctxt, H225Setup_UUIE_conferenceGoal* pvalue);

EXTERN int asn1PD_H225Setup_UUIE_conferenceGoal (OOCTXT* pctxt, H225Setup_UUIE_conferenceGoal* pvalue);

/**************************************************************/
/*                                                            */
/*  Q954Details                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Q954Details {
   ASN1BOOL conferenceCalling;
   ASN1BOOL threePartyService;
   DList extElem1;
} H225Q954Details;

EXTERN int asn1PE_H225Q954Details (OOCTXT* pctxt, H225Q954Details* pvalue);

EXTERN int asn1PD_H225Q954Details (OOCTXT* pctxt, H225Q954Details* pvalue);

/**************************************************************/
/*                                                            */
/*  QseriesOptions                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225QseriesOptions {
   ASN1BOOL q932Full;
   ASN1BOOL q951Full;
   ASN1BOOL q952Full;
   ASN1BOOL q953Full;
   ASN1BOOL q955Full;
   ASN1BOOL q956Full;
   ASN1BOOL q957Full;
   H225Q954Details q954Info;
   DList extElem1;
} H225QseriesOptions;

EXTERN int asn1PE_H225QseriesOptions (OOCTXT* pctxt, H225QseriesOptions* pvalue);

EXTERN int asn1PD_H225QseriesOptions (OOCTXT* pctxt, H225QseriesOptions* pvalue);

/**************************************************************/
/*                                                            */
/*  CallType                                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225CallType_pointToPoint     1
#define T_H225CallType_oneToN           2
#define T_H225CallType_nToOne           3
#define T_H225CallType_nToN             4
#define T_H225CallType_extElem1         5

typedef struct EXTERN H225CallType {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225CallType;

EXTERN int asn1PE_H225CallType (OOCTXT* pctxt, H225CallType* pvalue);

EXTERN int asn1PD_H225CallType (OOCTXT* pctxt, H225CallType* pvalue);

/**************************************************************/
/*                                                            */
/*  CallIdentifier                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallIdentifier {
   H225GloballyUniqueID guid;
   DList extElem1;
} H225CallIdentifier;

EXTERN int asn1PE_H225CallIdentifier (OOCTXT* pctxt, H225CallIdentifier* pvalue);

EXTERN int asn1PD_H225CallIdentifier (OOCTXT* pctxt, H225CallIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  SecurityServiceMode                                       */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225SecurityServiceMode_nonStandard 1
#define T_H225SecurityServiceMode_none  2
#define T_H225SecurityServiceMode_default_ 3
#define T_H225SecurityServiceMode_extElem1 4

typedef struct EXTERN H225SecurityServiceMode {
   int t;
   union {
      /* t = 1 */
      H225NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225SecurityServiceMode;

EXTERN int asn1PE_H225SecurityServiceMode (OOCTXT* pctxt, H225SecurityServiceMode* pvalue);

EXTERN int asn1PD_H225SecurityServiceMode (OOCTXT* pctxt, H225SecurityServiceMode* pvalue);

/**************************************************************/
/*                                                            */
/*  SecurityCapabilities                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225SecurityCapabilities {
   struct {
      unsigned nonStandardPresent : 1;
   } m;
   H225NonStandardParameter nonStandard;
   H225SecurityServiceMode encryption;
   H225SecurityServiceMode authenticaton;
   H225SecurityServiceMode integrity;
   DList extElem1;
} H225SecurityCapabilities;

EXTERN int asn1PE_H225SecurityCapabilities (OOCTXT* pctxt, H225SecurityCapabilities* pvalue);

EXTERN int asn1PD_H225SecurityCapabilities (OOCTXT* pctxt, H225SecurityCapabilities* pvalue);

/**************************************************************/
/*                                                            */
/*  H245Security                                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225H245Security_nonStandard  1
#define T_H225H245Security_noSecurity   2
#define T_H225H245Security_tls          3
#define T_H225H245Security_ipsec        4
#define T_H225H245Security_extElem1     5

typedef struct EXTERN H225H245Security {
   int t;
   union {
      /* t = 1 */
      H225NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      H225SecurityCapabilities *tls;
      /* t = 4 */
      H225SecurityCapabilities *ipsec;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225H245Security;

EXTERN int asn1PE_H225H245Security (OOCTXT* pctxt, H225H245Security* pvalue);

EXTERN int asn1PD_H225H245Security (OOCTXT* pctxt, H225H245Security* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225H245Security                                    */
/*                                                            */
/**************************************************************/

/* List of H225H245Security */
typedef DList H225_SeqOfH225H245Security;

EXTERN int asn1PE_H225_SeqOfH225H245Security (OOCTXT* pctxt, H225_SeqOfH225H245Security value);

EXTERN int asn1PD_H225_SeqOfH225H245Security (OOCTXT* pctxt, H225_SeqOfH225H245Security* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225ClearToken                                      */
/*                                                            */
/**************************************************************/

/* List of H235ClearToken */
typedef DList H225_SeqOfH225ClearToken;

EXTERN int asn1PE_H225_SeqOfH225ClearToken (OOCTXT* pctxt, H225_SeqOfH225ClearToken value);

EXTERN int asn1PD_H225_SeqOfH225ClearToken (OOCTXT* pctxt, H225_SeqOfH225ClearToken* pvalue);

/**************************************************************/
/*                                                            */
/*  CryptoH323Token_cryptoEPPwdHash                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CryptoH323Token_cryptoEPPwdHash {
   H225AliasAddress alias;
   H235TimeStamp timeStamp;
   H235HASHED token;
} H225CryptoH323Token_cryptoEPPwdHash;

EXTERN int asn1PE_H225CryptoH323Token_cryptoEPPwdHash (OOCTXT* pctxt, H225CryptoH323Token_cryptoEPPwdHash* pvalue);

EXTERN int asn1PD_H225CryptoH323Token_cryptoEPPwdHash (OOCTXT* pctxt, H225CryptoH323Token_cryptoEPPwdHash* pvalue);

/**************************************************************/
/*                                                            */
/*  CryptoH323Token_cryptoGKPwdHash                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CryptoH323Token_cryptoGKPwdHash {
   H225GatekeeperIdentifier gatekeeperId;
   H235TimeStamp timeStamp;
   H235HASHED token;
} H225CryptoH323Token_cryptoGKPwdHash;

EXTERN int asn1PE_H225CryptoH323Token_cryptoGKPwdHash (OOCTXT* pctxt, H225CryptoH323Token_cryptoGKPwdHash* pvalue);

EXTERN int asn1PD_H225CryptoH323Token_cryptoGKPwdHash (OOCTXT* pctxt, H225CryptoH323Token_cryptoGKPwdHash* pvalue);

/**************************************************************/
/*                                                            */
/*  CryptoH323Token_cryptoEPCert                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CryptoH323Token_cryptoEPCert {
   H235EncodedPwdCertToken toBeSigned;
   ASN1OBJID algorithmOID;
   H235Params paramS;
   ASN1DynBitStr signature;
} H225CryptoH323Token_cryptoEPCert;

EXTERN int asn1PE_H225CryptoH323Token_cryptoEPCert (OOCTXT* pctxt, H225CryptoH323Token_cryptoEPCert* pvalue);

EXTERN int asn1PD_H225CryptoH323Token_cryptoEPCert (OOCTXT* pctxt, H225CryptoH323Token_cryptoEPCert* pvalue);

/**************************************************************/
/*                                                            */
/*  CryptoH323Token_cryptoGKCert                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CryptoH323Token_cryptoGKCert {
   H235EncodedPwdCertToken toBeSigned;
   ASN1OBJID algorithmOID;
   H235Params paramS;
   ASN1DynBitStr signature;
} H225CryptoH323Token_cryptoGKCert;

EXTERN int asn1PE_H225CryptoH323Token_cryptoGKCert (OOCTXT* pctxt, H225CryptoH323Token_cryptoGKCert* pvalue);

EXTERN int asn1PD_H225CryptoH323Token_cryptoGKCert (OOCTXT* pctxt, H225CryptoH323Token_cryptoGKCert* pvalue);

/**************************************************************/
/*                                                            */
/*  CryptoH323Token_cryptoFastStart                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CryptoH323Token_cryptoFastStart {
   H225EncodedFastStartToken toBeSigned;
   ASN1OBJID algorithmOID;
   H235Params paramS;
   ASN1DynBitStr signature;
} H225CryptoH323Token_cryptoFastStart;

EXTERN int asn1PE_H225CryptoH323Token_cryptoFastStart (OOCTXT* pctxt, H225CryptoH323Token_cryptoFastStart* pvalue);

EXTERN int asn1PD_H225CryptoH323Token_cryptoFastStart (OOCTXT* pctxt, H225CryptoH323Token_cryptoFastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  CryptoH323Token                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225CryptoH323Token_cryptoEPPwdHash 1
#define T_H225CryptoH323Token_cryptoGKPwdHash 2
#define T_H225CryptoH323Token_cryptoEPPwdEncr 3
#define T_H225CryptoH323Token_cryptoGKPwdEncr 4
#define T_H225CryptoH323Token_cryptoEPCert 5
#define T_H225CryptoH323Token_cryptoGKCert 6
#define T_H225CryptoH323Token_cryptoFastStart 7
#define T_H225CryptoH323Token_nestedcryptoToken 8
#define T_H225CryptoH323Token_extElem1  9

typedef struct EXTERN H225CryptoH323Token {
   int t;
   union {
      /* t = 1 */
      H225CryptoH323Token_cryptoEPPwdHash *cryptoEPPwdHash;
      /* t = 2 */
      H225CryptoH323Token_cryptoGKPwdHash *cryptoGKPwdHash;
      /* t = 3 */
      H235ENCRYPTED *cryptoEPPwdEncr;
      /* t = 4 */
      H235ENCRYPTED *cryptoGKPwdEncr;
      /* t = 5 */
      H225CryptoH323Token_cryptoEPCert *cryptoEPCert;
      /* t = 6 */
      H225CryptoH323Token_cryptoGKCert *cryptoGKCert;
      /* t = 7 */
      H225CryptoH323Token_cryptoFastStart *cryptoFastStart;
      /* t = 8 */
      H235CryptoToken *nestedcryptoToken;
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H225CryptoH323Token;

EXTERN int asn1PE_H225CryptoH323Token (OOCTXT* pctxt, H225CryptoH323Token* pvalue);

EXTERN int asn1PD_H225CryptoH323Token (OOCTXT* pctxt, H225CryptoH323Token* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225CryptoH323Token                                 */
/*                                                            */
/**************************************************************/

/* List of H225CryptoH323Token */
typedef DList H225_SeqOfH225CryptoH323Token;

EXTERN int asn1PE_H225_SeqOfH225CryptoH323Token (OOCTXT* pctxt, H225_SeqOfH225CryptoH323Token value);

EXTERN int asn1PD_H225_SeqOfH225CryptoH323Token (OOCTXT* pctxt, H225_SeqOfH225CryptoH323Token* pvalue);

/**************************************************************/
/*                                                            */
/*  Setup_UUIE_fastStart                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Setup_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Setup_UUIE_fastStart;

EXTERN int asn1PE_H225Setup_UUIE_fastStart (OOCTXT* pctxt, H225Setup_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225Setup_UUIE_fastStart (OOCTXT* pctxt, H225Setup_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  ScnConnectionType                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ScnConnectionType_unknown 1
#define T_H225ScnConnectionType_bChannel 2
#define T_H225ScnConnectionType_hybrid2x64 3
#define T_H225ScnConnectionType_hybrid384 4
#define T_H225ScnConnectionType_hybrid1536 5
#define T_H225ScnConnectionType_hybrid1920 6
#define T_H225ScnConnectionType_multirate 7
#define T_H225ScnConnectionType_extElem1 8

typedef struct EXTERN H225ScnConnectionType {
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
      ASN1OpenType *extElem1;
   } u;
} H225ScnConnectionType;

EXTERN int asn1PE_H225ScnConnectionType (OOCTXT* pctxt, H225ScnConnectionType* pvalue);

EXTERN int asn1PD_H225ScnConnectionType (OOCTXT* pctxt, H225ScnConnectionType* pvalue);

/**************************************************************/
/*                                                            */
/*  ScnConnectionAggregation                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ScnConnectionAggregation_auto_ 1
#define T_H225ScnConnectionAggregation_none 2
#define T_H225ScnConnectionAggregation_h221 3
#define T_H225ScnConnectionAggregation_bonded_mode1 4
#define T_H225ScnConnectionAggregation_bonded_mode2 5
#define T_H225ScnConnectionAggregation_bonded_mode3 6
#define T_H225ScnConnectionAggregation_extElem1 7

typedef struct EXTERN H225ScnConnectionAggregation {
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
} H225ScnConnectionAggregation;

EXTERN int asn1PE_H225ScnConnectionAggregation (OOCTXT* pctxt, H225ScnConnectionAggregation* pvalue);

EXTERN int asn1PD_H225ScnConnectionAggregation (OOCTXT* pctxt, H225ScnConnectionAggregation* pvalue);

/**************************************************************/
/*                                                            */
/*  Setup_UUIE_connectionParameters                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Setup_UUIE_connectionParameters {
   H225ScnConnectionType connectionType;
   ASN1USINT numberOfScnConnections;
   H225ScnConnectionAggregation connectionAggregation;
   DList extElem1;
} H225Setup_UUIE_connectionParameters;

EXTERN int asn1PE_H225Setup_UUIE_connectionParameters (OOCTXT* pctxt, H225Setup_UUIE_connectionParameters* pvalue);

EXTERN int asn1PD_H225Setup_UUIE_connectionParameters (OOCTXT* pctxt, H225Setup_UUIE_connectionParameters* pvalue);

/**************************************************************/
/*                                                            */
/*  Setup_UUIE_language                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Setup_UUIE_language {
   ASN1UINT n;
   ASN1IA5String *elem;
} H225Setup_UUIE_language;

EXTERN int asn1PE_H225Setup_UUIE_language (OOCTXT* pctxt, H225Setup_UUIE_language* pvalue);

EXTERN int asn1PD_H225Setup_UUIE_language (OOCTXT* pctxt, H225Setup_UUIE_language* pvalue);

/**************************************************************/
/*                                                            */
/*  PresentationIndicator                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225PresentationIndicator_presentationAllowed 1
#define T_H225PresentationIndicator_presentationRestricted 2
#define T_H225PresentationIndicator_addressNotAvailable 3
#define T_H225PresentationIndicator_extElem1 4

typedef struct EXTERN H225PresentationIndicator {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225PresentationIndicator;

EXTERN int asn1PE_H225PresentationIndicator (OOCTXT* pctxt, H225PresentationIndicator* pvalue);

EXTERN int asn1PD_H225PresentationIndicator (OOCTXT* pctxt, H225PresentationIndicator* pvalue);

/**************************************************************/
/*                                                            */
/*  CallCreditServiceControl_billingMode                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225CallCreditServiceControl_billingMode_credit 1
#define T_H225CallCreditServiceControl_billingMode_debit 2
#define T_H225CallCreditServiceControl_billingMode_extElem1 3

typedef struct EXTERN H225CallCreditServiceControl_billingMode {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225CallCreditServiceControl_billingMode;

EXTERN int asn1PE_H225CallCreditServiceControl_billingMode (OOCTXT* pctxt, H225CallCreditServiceControl_billingMode* pvalue);

EXTERN int asn1PD_H225CallCreditServiceControl_billingMode (OOCTXT* pctxt, H225CallCreditServiceControl_billingMode* pvalue);

/**************************************************************/
/*                                                            */
/*  CallCreditServiceControl_callStartingPoint                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225CallCreditServiceControl_callStartingPoint_alerting 1
#define T_H225CallCreditServiceControl_callStartingPoint_connect 2
#define T_H225CallCreditServiceControl_callStartingPoint_extElem1 3

typedef struct EXTERN H225CallCreditServiceControl_callStartingPoint {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225CallCreditServiceControl_callStartingPoint;

EXTERN int asn1PE_H225CallCreditServiceControl_callStartingPoint (OOCTXT* pctxt, H225CallCreditServiceControl_callStartingPoint* pvalue);

EXTERN int asn1PD_H225CallCreditServiceControl_callStartingPoint (OOCTXT* pctxt, H225CallCreditServiceControl_callStartingPoint* pvalue);

/**************************************************************/
/*                                                            */
/*  CallCreditServiceControl                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallCreditServiceControl {
   struct {
      unsigned amountStringPresent : 1;
      unsigned billingModePresent : 1;
      unsigned callDurationLimitPresent : 1;
      unsigned enforceCallDurationLimitPresent : 1;
      unsigned callStartingPointPresent : 1;
   } m;
   ASN1BMPString amountString;
   H225CallCreditServiceControl_billingMode billingMode;
   ASN1UINT callDurationLimit;
   ASN1BOOL enforceCallDurationLimit;
   H225CallCreditServiceControl_callStartingPoint callStartingPoint;
   DList extElem1;
} H225CallCreditServiceControl;

EXTERN int asn1PE_H225CallCreditServiceControl (OOCTXT* pctxt, H225CallCreditServiceControl* pvalue);

EXTERN int asn1PD_H225CallCreditServiceControl (OOCTXT* pctxt, H225CallCreditServiceControl* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlDescriptor                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ServiceControlDescriptor_url 1
#define T_H225ServiceControlDescriptor_signal 2
#define T_H225ServiceControlDescriptor_nonStandard 3
#define T_H225ServiceControlDescriptor_callCreditServiceControl 4
#define T_H225ServiceControlDescriptor_extElem1 5

typedef struct EXTERN H225ServiceControlDescriptor {
   int t;
   union {
      /* t = 1 */
      ASN1IA5String url;
      /* t = 2 */
      H225H248SignalsDescriptor *signal;
      /* t = 3 */
      H225NonStandardParameter *nonStandard;
      /* t = 4 */
      H225CallCreditServiceControl *callCreditServiceControl;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225ServiceControlDescriptor;

EXTERN int asn1PE_H225ServiceControlDescriptor (OOCTXT* pctxt, H225ServiceControlDescriptor* pvalue);

EXTERN int asn1PD_H225ServiceControlDescriptor (OOCTXT* pctxt, H225ServiceControlDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlSession_reason                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ServiceControlSession_reason_open 1
#define T_H225ServiceControlSession_reason_refresh 2
#define T_H225ServiceControlSession_reason_close 3
#define T_H225ServiceControlSession_reason_extElem1 4

typedef struct EXTERN H225ServiceControlSession_reason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225ServiceControlSession_reason;

EXTERN int asn1PE_H225ServiceControlSession_reason (OOCTXT* pctxt, H225ServiceControlSession_reason* pvalue);

EXTERN int asn1PD_H225ServiceControlSession_reason (OOCTXT* pctxt, H225ServiceControlSession_reason* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlSession                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ServiceControlSession {
   struct {
      unsigned contentsPresent : 1;
   } m;
   ASN1UINT8 sessionId;
   H225ServiceControlDescriptor contents;
   H225ServiceControlSession_reason reason;
   DList extElem1;
} H225ServiceControlSession;

EXTERN int asn1PE_H225ServiceControlSession (OOCTXT* pctxt, H225ServiceControlSession* pvalue);

EXTERN int asn1PD_H225ServiceControlSession (OOCTXT* pctxt, H225ServiceControlSession* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225ServiceControlSession                           */
/*                                                            */
/**************************************************************/

/* List of H225ServiceControlSession */
typedef DList H225_SeqOfH225ServiceControlSession;

EXTERN int asn1PE_H225_SeqOfH225ServiceControlSession (OOCTXT* pctxt, H225_SeqOfH225ServiceControlSession value);

EXTERN int asn1PD_H225_SeqOfH225ServiceControlSession (OOCTXT* pctxt, H225_SeqOfH225ServiceControlSession* pvalue);

/**************************************************************/
/*                                                            */
/*  CarrierInfo                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CarrierInfo {
   struct {
      unsigned carrierIdentificationCodePresent : 1;
      unsigned carrierNamePresent : 1;
   } m;
   H225CarrierInfo_carrierIdentificationCode carrierIdentificationCode;
   ASN1IA5String carrierName;
   DList extElem1;
} H225CarrierInfo;

EXTERN int asn1PE_H225CarrierInfo (OOCTXT* pctxt, H225CarrierInfo* pvalue);

EXTERN int asn1PD_H225CarrierInfo (OOCTXT* pctxt, H225CarrierInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  CallsAvailable                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallsAvailable {
   struct {
      unsigned groupPresent : 1;
      unsigned carrierPresent : 1;
   } m;
   ASN1UINT calls;
   ASN1IA5String group;
   H225CarrierInfo carrier;
   DList extElem1;
} H225CallsAvailable;

EXTERN int asn1PE_H225CallsAvailable (OOCTXT* pctxt, H225CallsAvailable* pvalue);

EXTERN int asn1PD_H225CallsAvailable (OOCTXT* pctxt, H225CallsAvailable* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225CallsAvailable                                  */
/*                                                            */
/**************************************************************/

/* List of H225CallsAvailable */
typedef DList H225_SeqOfH225CallsAvailable;

EXTERN int asn1PE_H225_SeqOfH225CallsAvailable (OOCTXT* pctxt, H225_SeqOfH225CallsAvailable value);

EXTERN int asn1PD_H225_SeqOfH225CallsAvailable (OOCTXT* pctxt, H225_SeqOfH225CallsAvailable* pvalue);

/**************************************************************/
/*                                                            */
/*  CallCapacityInfo                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallCapacityInfo {
   struct {
      unsigned voiceGwCallsAvailablePresent : 1;
      unsigned h310GwCallsAvailablePresent : 1;
      unsigned h320GwCallsAvailablePresent : 1;
      unsigned h321GwCallsAvailablePresent : 1;
      unsigned h322GwCallsAvailablePresent : 1;
      unsigned h323GwCallsAvailablePresent : 1;
      unsigned h324GwCallsAvailablePresent : 1;
      unsigned t120OnlyGwCallsAvailablePresent : 1;
      unsigned t38FaxAnnexbOnlyGwCallsAvailablePresent : 1;
      unsigned terminalCallsAvailablePresent : 1;
      unsigned mcuCallsAvailablePresent : 1;
      unsigned sipGwCallsAvailablePresent : 1;
   } m;
   H225_SeqOfH225CallsAvailable voiceGwCallsAvailable;
   H225_SeqOfH225CallsAvailable h310GwCallsAvailable;
   H225_SeqOfH225CallsAvailable h320GwCallsAvailable;
   H225_SeqOfH225CallsAvailable h321GwCallsAvailable;
   H225_SeqOfH225CallsAvailable h322GwCallsAvailable;
   H225_SeqOfH225CallsAvailable h323GwCallsAvailable;
   H225_SeqOfH225CallsAvailable h324GwCallsAvailable;
   H225_SeqOfH225CallsAvailable t120OnlyGwCallsAvailable;
   H225_SeqOfH225CallsAvailable t38FaxAnnexbOnlyGwCallsAvailable;
   H225_SeqOfH225CallsAvailable terminalCallsAvailable;
   H225_SeqOfH225CallsAvailable mcuCallsAvailable;
   H225_SeqOfH225CallsAvailable sipGwCallsAvailable;
   DList extElem1;
} H225CallCapacityInfo;

EXTERN int asn1PE_H225CallCapacityInfo (OOCTXT* pctxt, H225CallCapacityInfo* pvalue);

EXTERN int asn1PD_H225CallCapacityInfo (OOCTXT* pctxt, H225CallCapacityInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  CallCapacity                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallCapacity {
   struct {
      unsigned maximumCallCapacityPresent : 1;
      unsigned currentCallCapacityPresent : 1;
   } m;
   H225CallCapacityInfo maximumCallCapacity;
   H225CallCapacityInfo currentCallCapacity;
   DList extElem1;
} H225CallCapacity;

EXTERN int asn1PE_H225CallCapacity (OOCTXT* pctxt, H225CallCapacity* pvalue);

EXTERN int asn1PD_H225CallCapacity (OOCTXT* pctxt, H225CallCapacity* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225CicInfo_cic_element                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225_SeqOfH225CicInfo_cic_element {
   ASN1UINT n;
   H225CicInfo_cic_element *elem;
} H225_SeqOfH225CicInfo_cic_element;

EXTERN int asn1PE_H225_SeqOfH225CicInfo_cic_element (OOCTXT* pctxt, H225_SeqOfH225CicInfo_cic_element* pvalue);

EXTERN int asn1PD_H225_SeqOfH225CicInfo_cic_element (OOCTXT* pctxt, H225_SeqOfH225CicInfo_cic_element* pvalue);

/**************************************************************/
/*                                                            */
/*  CicInfo                                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CicInfo {
   H225_SeqOfH225CicInfo_cic_element cic;
   H225CicInfo_pointCode pointCode;
   DList extElem1;
} H225CicInfo;

EXTERN int asn1PE_H225CicInfo (OOCTXT* pctxt, H225CicInfo* pvalue);

EXTERN int asn1PD_H225CicInfo (OOCTXT* pctxt, H225CicInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  GroupID_member                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GroupID_member {
   ASN1UINT n;
   ASN1USINT *elem;
} H225GroupID_member;

EXTERN int asn1PE_H225GroupID_member (OOCTXT* pctxt, H225GroupID_member* pvalue);

EXTERN int asn1PD_H225GroupID_member (OOCTXT* pctxt, H225GroupID_member* pvalue);

/**************************************************************/
/*                                                            */
/*  GroupID                                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GroupID {
   struct {
      unsigned memberPresent : 1;
   } m;
   H225GroupID_member member;
   ASN1IA5String group;
   DList extElem1;
} H225GroupID;

EXTERN int asn1PE_H225GroupID (OOCTXT* pctxt, H225GroupID* pvalue);

EXTERN int asn1PD_H225GroupID (OOCTXT* pctxt, H225GroupID* pvalue);

/**************************************************************/
/*                                                            */
/*  CircuitIdentifier                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CircuitIdentifier {
   struct {
      unsigned cicPresent : 1;
      unsigned groupPresent : 1;
      unsigned carrierPresent : 1;
   } m;
   H225CicInfo cic;
   H225GroupID group;
   H225CarrierInfo carrier;
   DList extElem1;
} H225CircuitIdentifier;

EXTERN int asn1PE_H225CircuitIdentifier (OOCTXT* pctxt, H225CircuitIdentifier* pvalue);

EXTERN int asn1PD_H225CircuitIdentifier (OOCTXT* pctxt, H225CircuitIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225GenericData                                     */
/*                                                            */
/**************************************************************/

/* List of H225GenericData */
typedef DList H225_SeqOfH225GenericData;

EXTERN int asn1PE_H225_SeqOfH225GenericData (OOCTXT* pctxt, H225_SeqOfH225GenericData value);

EXTERN int asn1PD_H225_SeqOfH225GenericData (OOCTXT* pctxt, H225_SeqOfH225GenericData* pvalue);

/**************************************************************/
/*                                                            */
/*  CircuitInfo                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CircuitInfo {
   struct {
      unsigned sourceCircuitIDPresent : 1;
      unsigned destinationCircuitIDPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225CircuitIdentifier sourceCircuitID;
   H225CircuitIdentifier destinationCircuitID;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225CircuitInfo;

EXTERN int asn1PE_H225CircuitInfo (OOCTXT* pctxt, H225CircuitInfo* pvalue);

EXTERN int asn1PD_H225CircuitInfo (OOCTXT* pctxt, H225CircuitInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225FeatureDescriptor                               */
/*                                                            */
/**************************************************************/

/* List of H225FeatureDescriptor */
typedef DList H225_SeqOfH225FeatureDescriptor;

EXTERN int asn1PE_H225_SeqOfH225FeatureDescriptor (OOCTXT* pctxt, H225_SeqOfH225FeatureDescriptor value);

EXTERN int asn1PD_H225_SeqOfH225FeatureDescriptor (OOCTXT* pctxt, H225_SeqOfH225FeatureDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  Setup_UUIE_parallelH245Control                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Setup_UUIE_parallelH245Control {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Setup_UUIE_parallelH245Control;

EXTERN int asn1PE_H225Setup_UUIE_parallelH245Control (OOCTXT* pctxt, H225Setup_UUIE_parallelH245Control* pvalue);

EXTERN int asn1PD_H225Setup_UUIE_parallelH245Control (OOCTXT* pctxt, H225Setup_UUIE_parallelH245Control* pvalue);

/**************************************************************/
/*                                                            */
/*  ExtendedAliasAddress                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ExtendedAliasAddress {
   struct {
      unsigned presentationIndicatorPresent : 1;
      unsigned screeningIndicatorPresent : 1;
   } m;
   H225AliasAddress address;
   H225PresentationIndicator presentationIndicator;
   H225ScreeningIndicator screeningIndicator;
   DList extElem1;
} H225ExtendedAliasAddress;

EXTERN int asn1PE_H225ExtendedAliasAddress (OOCTXT* pctxt, H225ExtendedAliasAddress* pvalue);

EXTERN int asn1PD_H225ExtendedAliasAddress (OOCTXT* pctxt, H225ExtendedAliasAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225ExtendedAliasAddress                            */
/*                                                            */
/**************************************************************/

/* List of H225ExtendedAliasAddress */
typedef DList H225_SeqOfH225ExtendedAliasAddress;

EXTERN int asn1PE_H225_SeqOfH225ExtendedAliasAddress (OOCTXT* pctxt, H225_SeqOfH225ExtendedAliasAddress value);

EXTERN int asn1PD_H225_SeqOfH225ExtendedAliasAddress (OOCTXT* pctxt, H225_SeqOfH225ExtendedAliasAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  Setup_UUIE                                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Setup_UUIE {
   struct {
      unsigned h245AddressPresent : 1;
      unsigned sourceAddressPresent : 1;
      unsigned destinationAddressPresent : 1;
      unsigned destCallSignalAddressPresent : 1;
      unsigned destExtraCallInfoPresent : 1;
      unsigned destExtraCRVPresent : 1;
      unsigned callServicesPresent : 1;
      unsigned sourceCallSignalAddressPresent : 1;
      unsigned remoteExtensionAddressPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned h245SecurityCapabilityPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned mediaWaitForConnectPresent : 1;
      unsigned canOverlapSendPresent : 1;
      unsigned endpointIdentifierPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned connectionParametersPresent : 1;
      unsigned languagePresent : 1;
      unsigned presentationIndicatorPresent : 1;
      unsigned screeningIndicatorPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned symmetricOperationRequiredPresent : 1;
      unsigned capacityPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned desiredProtocolsPresent : 1;
      unsigned neededFeaturesPresent : 1;
      unsigned desiredFeaturesPresent : 1;
      unsigned supportedFeaturesPresent : 1;
      unsigned parallelH245ControlPresent : 1;
      unsigned additionalSourceAddressesPresent : 1;
      unsigned hopCountPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225TransportAddress h245Address;
   H225_SeqOfH225AliasAddress sourceAddress;
   H225EndpointType sourceInfo;
   H225_SeqOfH225AliasAddress destinationAddress;
   H225TransportAddress destCallSignalAddress;
   H225_SeqOfH225AliasAddress destExtraCallInfo;
   H225_SeqOfH225CallReferenceValue destExtraCRV;
   ASN1BOOL activeMC;
   H225ConferenceIdentifier conferenceID;
   H225Setup_UUIE_conferenceGoal conferenceGoal;
   H225QseriesOptions callServices;
   H225CallType callType;
   H225TransportAddress sourceCallSignalAddress;
   H225AliasAddress remoteExtensionAddress;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225H245Security h245SecurityCapability;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225Setup_UUIE_fastStart fastStart;
   ASN1BOOL mediaWaitForConnect;
   ASN1BOOL canOverlapSend;
   H225EndpointIdentifier endpointIdentifier;
   ASN1BOOL multipleCalls;
   ASN1BOOL maintainConnection;
   H225Setup_UUIE_connectionParameters connectionParameters;
   H225Setup_UUIE_language language;
   H225PresentationIndicator presentationIndicator;
   H225ScreeningIndicator screeningIndicator;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225CallCapacity capacity;
   H225CircuitInfo circuitInfo;
   H225_SeqOfH225SupportedProtocols desiredProtocols;
   H225_SeqOfH225FeatureDescriptor neededFeatures;
   H225_SeqOfH225FeatureDescriptor desiredFeatures;
   H225_SeqOfH225FeatureDescriptor supportedFeatures;
   H225Setup_UUIE_parallelH245Control parallelH245Control;
   H225_SeqOfH225ExtendedAliasAddress additionalSourceAddresses;
   ASN1UINT8 hopCount;
   DList extElem1;
} H225Setup_UUIE;

EXTERN int asn1PE_H225Setup_UUIE (OOCTXT* pctxt, H225Setup_UUIE* pvalue);

EXTERN int asn1PD_H225Setup_UUIE (OOCTXT* pctxt, H225Setup_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  CallProceeding_UUIE_fastStart                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallProceeding_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225CallProceeding_UUIE_fastStart;

EXTERN int asn1PE_H225CallProceeding_UUIE_fastStart (OOCTXT* pctxt, H225CallProceeding_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225CallProceeding_UUIE_fastStart (OOCTXT* pctxt, H225CallProceeding_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  FeatureSet                                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225FeatureSet {
   struct {
      unsigned neededFeaturesPresent : 1;
      unsigned desiredFeaturesPresent : 1;
      unsigned supportedFeaturesPresent : 1;
   } m;
   ASN1BOOL replacementFeatureSet;
   H225_SeqOfH225FeatureDescriptor neededFeatures;
   H225_SeqOfH225FeatureDescriptor desiredFeatures;
   H225_SeqOfH225FeatureDescriptor supportedFeatures;
   DList extElem1;
} H225FeatureSet;

EXTERN int asn1PE_H225FeatureSet (OOCTXT* pctxt, H225FeatureSet* pvalue);

EXTERN int asn1PD_H225FeatureSet (OOCTXT* pctxt, H225FeatureSet* pvalue);

/**************************************************************/
/*                                                            */
/*  CallProceeding_UUIE                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallProceeding_UUIE {
   struct {
      unsigned h245AddressPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned h245SecurityModePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned fastConnectRefusedPresent : 1;
      unsigned featureSetPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225EndpointType destinationInfo;
   H225TransportAddress h245Address;
   H225CallIdentifier callIdentifier;
   H225H245Security h245SecurityMode;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225CallProceeding_UUIE_fastStart fastStart;
   ASN1BOOL multipleCalls;
   ASN1BOOL maintainConnection;
   H225FeatureSet featureSet;
   DList extElem1;
} H225CallProceeding_UUIE;

EXTERN int asn1PE_H225CallProceeding_UUIE (OOCTXT* pctxt, H225CallProceeding_UUIE* pvalue);

EXTERN int asn1PD_H225CallProceeding_UUIE (OOCTXT* pctxt, H225CallProceeding_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  Connect_UUIE_fastStart                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Connect_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Connect_UUIE_fastStart;

EXTERN int asn1PE_H225Connect_UUIE_fastStart (OOCTXT* pctxt, H225Connect_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225Connect_UUIE_fastStart (OOCTXT* pctxt, H225Connect_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  Connect_UUIE_language                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Connect_UUIE_language {
   ASN1UINT n;
   ASN1IA5String *elem;
} H225Connect_UUIE_language;

EXTERN int asn1PE_H225Connect_UUIE_language (OOCTXT* pctxt, H225Connect_UUIE_language* pvalue);

EXTERN int asn1PD_H225Connect_UUIE_language (OOCTXT* pctxt, H225Connect_UUIE_language* pvalue);

/**************************************************************/
/*                                                            */
/*  Connect_UUIE                                              */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Connect_UUIE {
   struct {
      unsigned h245AddressPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned h245SecurityModePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned languagePresent : 1;
      unsigned connectedAddressPresent : 1;
      unsigned presentationIndicatorPresent : 1;
      unsigned screeningIndicatorPresent : 1;
      unsigned fastConnectRefusedPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned capacityPresent : 1;
      unsigned featureSetPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225TransportAddress h245Address;
   H225EndpointType destinationInfo;
   H225ConferenceIdentifier conferenceID;
   H225CallIdentifier callIdentifier;
   H225H245Security h245SecurityMode;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225Connect_UUIE_fastStart fastStart;
   ASN1BOOL multipleCalls;
   ASN1BOOL maintainConnection;
   H225Connect_UUIE_language language;
   H225_SeqOfH225AliasAddress connectedAddress;
   H225PresentationIndicator presentationIndicator;
   H225ScreeningIndicator screeningIndicator;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225CallCapacity capacity;
   H225FeatureSet featureSet;
   DList extElem1;
} H225Connect_UUIE;

EXTERN int asn1PE_H225Connect_UUIE (OOCTXT* pctxt, H225Connect_UUIE* pvalue);

EXTERN int asn1PD_H225Connect_UUIE (OOCTXT* pctxt, H225Connect_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  Alerting_UUIE_fastStart                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Alerting_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Alerting_UUIE_fastStart;

EXTERN int asn1PE_H225Alerting_UUIE_fastStart (OOCTXT* pctxt, H225Alerting_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225Alerting_UUIE_fastStart (OOCTXT* pctxt, H225Alerting_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  Alerting_UUIE                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Alerting_UUIE {
   struct {
      unsigned h245AddressPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned h245SecurityModePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned alertingAddressPresent : 1;
      unsigned presentationIndicatorPresent : 1;
      unsigned screeningIndicatorPresent : 1;
      unsigned fastConnectRefusedPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned capacityPresent : 1;
      unsigned featureSetPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225EndpointType destinationInfo;
   H225TransportAddress h245Address;
   H225CallIdentifier callIdentifier;
   H225H245Security h245SecurityMode;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225Alerting_UUIE_fastStart fastStart;
   ASN1BOOL multipleCalls;
   ASN1BOOL maintainConnection;
   H225_SeqOfH225AliasAddress alertingAddress;
   H225PresentationIndicator presentationIndicator;
   H225ScreeningIndicator screeningIndicator;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225CallCapacity capacity;
   H225FeatureSet featureSet;
   DList extElem1;
} H225Alerting_UUIE;

EXTERN int asn1PE_H225Alerting_UUIE (OOCTXT* pctxt, H225Alerting_UUIE* pvalue);

EXTERN int asn1PD_H225Alerting_UUIE (OOCTXT* pctxt, H225Alerting_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  Information_UUIE_fastStart                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Information_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Information_UUIE_fastStart;

EXTERN int asn1PE_H225Information_UUIE_fastStart (OOCTXT* pctxt, H225Information_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225Information_UUIE_fastStart (OOCTXT* pctxt, H225Information_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  Information_UUIE                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Information_UUIE {
   struct {
      unsigned callIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned fastConnectRefusedPresent : 1;
      unsigned circuitInfoPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225Information_UUIE_fastStart fastStart;
   H225CircuitInfo circuitInfo;
   DList extElem1;
} H225Information_UUIE;

EXTERN int asn1PE_H225Information_UUIE (OOCTXT* pctxt, H225Information_UUIE* pvalue);

EXTERN int asn1PD_H225Information_UUIE (OOCTXT* pctxt, H225Information_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  SecurityErrors                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225SecurityErrors_securityWrongSyncTime 1
#define T_H225SecurityErrors_securityReplay 2
#define T_H225SecurityErrors_securityWrongGeneralID 3
#define T_H225SecurityErrors_securityWrongSendersID 4
#define T_H225SecurityErrors_securityIntegrityFailed 5
#define T_H225SecurityErrors_securityWrongOID 6
#define T_H225SecurityErrors_securityDHmismatch 7
#define T_H225SecurityErrors_securityCertificateExpired 8
#define T_H225SecurityErrors_securityCertificateDateInvalid 9
#define T_H225SecurityErrors_securityCertificateRevoked 10
#define T_H225SecurityErrors_securityCertificateNotReadable 11
#define T_H225SecurityErrors_securityCertificateSignatureInvalid 12
#define T_H225SecurityErrors_securityCertificateMissing 13
#define T_H225SecurityErrors_securityCertificateIncomplete 14
#define T_H225SecurityErrors_securityUnsupportedCertificateAlgOID 15
#define T_H225SecurityErrors_securityUnknownCA 16
#define T_H225SecurityErrors_extElem1   17

typedef struct EXTERN H225SecurityErrors {
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
      /* t = 16 */
      /* t = 17 */
      ASN1OpenType *extElem1;
   } u;
} H225SecurityErrors;

EXTERN int asn1PE_H225SecurityErrors (OOCTXT* pctxt, H225SecurityErrors* pvalue);

EXTERN int asn1PD_H225SecurityErrors (OOCTXT* pctxt, H225SecurityErrors* pvalue);

/**************************************************************/
/*                                                            */
/*  ReleaseCompleteReason                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ReleaseCompleteReason_noBandwidth 1
#define T_H225ReleaseCompleteReason_gatekeeperResources 2
#define T_H225ReleaseCompleteReason_unreachableDestination 3
#define T_H225ReleaseCompleteReason_destinationRejection 4
#define T_H225ReleaseCompleteReason_invalidRevision 5
#define T_H225ReleaseCompleteReason_noPermission 6
#define T_H225ReleaseCompleteReason_unreachableGatekeeper 7
#define T_H225ReleaseCompleteReason_gatewayResources 8
#define T_H225ReleaseCompleteReason_badFormatAddress 9
#define T_H225ReleaseCompleteReason_adaptiveBusy 10
#define T_H225ReleaseCompleteReason_inConf 11
#define T_H225ReleaseCompleteReason_undefinedReason 12
#define T_H225ReleaseCompleteReason_facilityCallDeflection 13
#define T_H225ReleaseCompleteReason_securityDenied 14
#define T_H225ReleaseCompleteReason_calledPartyNotRegistered 15
#define T_H225ReleaseCompleteReason_callerNotRegistered 16
#define T_H225ReleaseCompleteReason_newConnectionNeeded 17
#define T_H225ReleaseCompleteReason_nonStandardReason 18
#define T_H225ReleaseCompleteReason_replaceWithConferenceInvite 19
#define T_H225ReleaseCompleteReason_genericDataReason 20
#define T_H225ReleaseCompleteReason_neededFeatureNotSupported 21
#define T_H225ReleaseCompleteReason_tunnelledSignallingRejected 22
#define T_H225ReleaseCompleteReason_invalidCID 23
#define T_H225ReleaseCompleteReason_securityError 24
#define T_H225ReleaseCompleteReason_hopCountExceeded 25
#define T_H225ReleaseCompleteReason_extElem1 26

typedef struct EXTERN H225ReleaseCompleteReason {
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
      /* t = 16 */
      /* t = 17 */
      /* t = 18 */
      H225NonStandardParameter *nonStandardReason;
      /* t = 19 */
      H225ConferenceIdentifier *replaceWithConferenceInvite;
      /* t = 20 */
      /* t = 21 */
      /* t = 22 */
      /* t = 23 */
      /* t = 24 */
      H225SecurityErrors *securityError;
      /* t = 25 */
      /* t = 26 */
      ASN1OpenType *extElem1;
   } u;
} H225ReleaseCompleteReason;

EXTERN int asn1PE_H225ReleaseCompleteReason (OOCTXT* pctxt, H225ReleaseCompleteReason* pvalue);

EXTERN int asn1PD_H225ReleaseCompleteReason (OOCTXT* pctxt, H225ReleaseCompleteReason* pvalue);

/**************************************************************/
/*                                                            */
/*  ReleaseComplete_UUIE                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ReleaseComplete_UUIE {
   struct {
      unsigned reasonPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned busyAddressPresent : 1;
      unsigned presentationIndicatorPresent : 1;
      unsigned screeningIndicatorPresent : 1;
      unsigned capacityPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned featureSetPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225ReleaseCompleteReason reason;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225_SeqOfH225AliasAddress busyAddress;
   H225PresentationIndicator presentationIndicator;
   H225ScreeningIndicator screeningIndicator;
   H225CallCapacity capacity;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225FeatureSet featureSet;
   DList extElem1;
} H225ReleaseComplete_UUIE;

EXTERN int asn1PE_H225ReleaseComplete_UUIE (OOCTXT* pctxt, H225ReleaseComplete_UUIE* pvalue);

EXTERN int asn1PD_H225ReleaseComplete_UUIE (OOCTXT* pctxt, H225ReleaseComplete_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  FacilityReason                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225FacilityReason_routeCallToGatekeeper 1
#define T_H225FacilityReason_callForwarded 2
#define T_H225FacilityReason_routeCallToMC 3
#define T_H225FacilityReason_undefinedReason 4
#define T_H225FacilityReason_conferenceListChoice 5
#define T_H225FacilityReason_startH245  6
#define T_H225FacilityReason_noH245     7
#define T_H225FacilityReason_newTokens  8
#define T_H225FacilityReason_featureSetUpdate 9
#define T_H225FacilityReason_forwardedElements 10
#define T_H225FacilityReason_transportedInformation 11
#define T_H225FacilityReason_extElem1   12

typedef struct EXTERN H225FacilityReason {
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
} H225FacilityReason;

EXTERN int asn1PE_H225FacilityReason (OOCTXT* pctxt, H225FacilityReason* pvalue);

EXTERN int asn1PD_H225FacilityReason (OOCTXT* pctxt, H225FacilityReason* pvalue);

/**************************************************************/
/*                                                            */
/*  ConferenceList                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ConferenceList {
   struct {
      unsigned conferenceIDPresent : 1;
      unsigned conferenceAliasPresent : 1;
      unsigned nonStandardDataPresent : 1;
   } m;
   H225ConferenceIdentifier conferenceID;
   H225AliasAddress conferenceAlias;
   H225NonStandardParameter nonStandardData;
   DList extElem1;
} H225ConferenceList;

EXTERN int asn1PE_H225ConferenceList (OOCTXT* pctxt, H225ConferenceList* pvalue);

EXTERN int asn1PD_H225ConferenceList (OOCTXT* pctxt, H225ConferenceList* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225ConferenceList                                  */
/*                                                            */
/**************************************************************/

/* List of H225ConferenceList */
typedef DList H225_SeqOfH225ConferenceList;

EXTERN int asn1PE_H225_SeqOfH225ConferenceList (OOCTXT* pctxt, H225_SeqOfH225ConferenceList value);

EXTERN int asn1PD_H225_SeqOfH225ConferenceList (OOCTXT* pctxt, H225_SeqOfH225ConferenceList* pvalue);

/**************************************************************/
/*                                                            */
/*  Facility_UUIE_fastStart                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Facility_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Facility_UUIE_fastStart;

EXTERN int asn1PE_H225Facility_UUIE_fastStart (OOCTXT* pctxt, H225Facility_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225Facility_UUIE_fastStart (OOCTXT* pctxt, H225Facility_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  Facility_UUIE                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Facility_UUIE {
   struct {
      unsigned alternativeAddressPresent : 1;
      unsigned alternativeAliasAddressPresent : 1;
      unsigned conferenceIDPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned destExtraCallInfoPresent : 1;
      unsigned remoteExtensionAddressPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned conferencesPresent : 1;
      unsigned h245AddressPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned fastConnectRefusedPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned destinationInfoPresent : 1;
      unsigned h245SecurityModePresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225TransportAddress alternativeAddress;
   H225_SeqOfH225AliasAddress alternativeAliasAddress;
   H225ConferenceIdentifier conferenceID;
   H225FacilityReason reason;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225AliasAddress destExtraCallInfo;
   H225AliasAddress remoteExtensionAddress;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225_SeqOfH225ConferenceList conferences;
   H225TransportAddress h245Address;
   H225Facility_UUIE_fastStart fastStart;
   ASN1BOOL multipleCalls;
   ASN1BOOL maintainConnection;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225CircuitInfo circuitInfo;
   H225FeatureSet featureSet;
   H225EndpointType destinationInfo;
   H225H245Security h245SecurityMode;
   DList extElem1;
} H225Facility_UUIE;

EXTERN int asn1PE_H225Facility_UUIE (OOCTXT* pctxt, H225Facility_UUIE* pvalue);

EXTERN int asn1PD_H225Facility_UUIE (OOCTXT* pctxt, H225Facility_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  Progress_UUIE_fastStart                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Progress_UUIE_fastStart {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225Progress_UUIE_fastStart;

EXTERN int asn1PE_H225Progress_UUIE_fastStart (OOCTXT* pctxt, H225Progress_UUIE_fastStart* pvalue);

EXTERN int asn1PD_H225Progress_UUIE_fastStart (OOCTXT* pctxt, H225Progress_UUIE_fastStart* pvalue);

/**************************************************************/
/*                                                            */
/*  Progress_UUIE                                             */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Progress_UUIE {
   struct {
      unsigned h245AddressPresent : 1;
      unsigned h245SecurityModePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned fastStartPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned fastConnectRefusedPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225EndpointType destinationInfo;
   H225TransportAddress h245Address;
   H225CallIdentifier callIdentifier;
   H225H245Security h245SecurityMode;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225Progress_UUIE_fastStart fastStart;
   ASN1BOOL multipleCalls;
   ASN1BOOL maintainConnection;
   DList extElem1;
} H225Progress_UUIE;

EXTERN int asn1PE_H225Progress_UUIE (OOCTXT* pctxt, H225Progress_UUIE* pvalue);

EXTERN int asn1PD_H225Progress_UUIE (OOCTXT* pctxt, H225Progress_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  Status_UUIE                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Status_UUIE {
   struct {
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   DList extElem1;
} H225Status_UUIE;

EXTERN int asn1PE_H225Status_UUIE (OOCTXT* pctxt, H225Status_UUIE* pvalue);

EXTERN int asn1PD_H225Status_UUIE (OOCTXT* pctxt, H225Status_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  StatusInquiry_UUIE                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225StatusInquiry_UUIE {
   struct {
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   DList extElem1;
} H225StatusInquiry_UUIE;

EXTERN int asn1PE_H225StatusInquiry_UUIE (OOCTXT* pctxt, H225StatusInquiry_UUIE* pvalue);

EXTERN int asn1PD_H225StatusInquiry_UUIE (OOCTXT* pctxt, H225StatusInquiry_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  SetupAcknowledge_UUIE                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225SetupAcknowledge_UUIE {
   struct {
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   DList extElem1;
} H225SetupAcknowledge_UUIE;

EXTERN int asn1PE_H225SetupAcknowledge_UUIE (OOCTXT* pctxt, H225SetupAcknowledge_UUIE* pvalue);

EXTERN int asn1PD_H225SetupAcknowledge_UUIE (OOCTXT* pctxt, H225SetupAcknowledge_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  Notify_UUIE                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Notify_UUIE {
   struct {
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
   } m;
   H225ProtocolIdentifier protocolIdentifier;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   DList extElem1;
} H225Notify_UUIE;

EXTERN int asn1PE_H225Notify_UUIE (OOCTXT* pctxt, H225Notify_UUIE* pvalue);

EXTERN int asn1PD_H225Notify_UUIE (OOCTXT* pctxt, H225Notify_UUIE* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UU_PDU_h323_message_body                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225H323_UU_PDU_h323_message_body_setup 1
#define T_H225H323_UU_PDU_h323_message_body_callProceeding 2
#define T_H225H323_UU_PDU_h323_message_body_connect 3
#define T_H225H323_UU_PDU_h323_message_body_alerting 4
#define T_H225H323_UU_PDU_h323_message_body_information 5
#define T_H225H323_UU_PDU_h323_message_body_releaseComplete 6
#define T_H225H323_UU_PDU_h323_message_body_facility 7
#define T_H225H323_UU_PDU_h323_message_body_progress 8
#define T_H225H323_UU_PDU_h323_message_body_empty 9
#define T_H225H323_UU_PDU_h323_message_body_status 10
#define T_H225H323_UU_PDU_h323_message_body_statusInquiry 11
#define T_H225H323_UU_PDU_h323_message_body_setupAcknowledge 12
#define T_H225H323_UU_PDU_h323_message_body_notify 13
#define T_H225H323_UU_PDU_h323_message_body_extElem1 14

typedef struct EXTERN H225H323_UU_PDU_h323_message_body {
   int t;
   union {
      /* t = 1 */
      H225Setup_UUIE *setup;
      /* t = 2 */
      H225CallProceeding_UUIE *callProceeding;
      /* t = 3 */
      H225Connect_UUIE *connect;
      /* t = 4 */
      H225Alerting_UUIE *alerting;
      /* t = 5 */
      H225Information_UUIE *information;
      /* t = 6 */
      H225ReleaseComplete_UUIE *releaseComplete;
      /* t = 7 */
      H225Facility_UUIE *facility;
      /* t = 8 */
      H225Progress_UUIE *progress;
      /* t = 9 */
      /* t = 10 */
      H225Status_UUIE *status;
      /* t = 11 */
      H225StatusInquiry_UUIE *statusInquiry;
      /* t = 12 */
      H225SetupAcknowledge_UUIE *setupAcknowledge;
      /* t = 13 */
      H225Notify_UUIE *notify;
      /* t = 14 */
      ASN1OpenType *extElem1;
   } u;
} H225H323_UU_PDU_h323_message_body;

EXTERN int asn1PE_H225H323_UU_PDU_h323_message_body (OOCTXT* pctxt, H225H323_UU_PDU_h323_message_body* pvalue);

EXTERN int asn1PD_H225H323_UU_PDU_h323_message_body (OOCTXT* pctxt, H225H323_UU_PDU_h323_message_body* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UU_PDU_h4501SupplementaryService                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UU_PDU_h4501SupplementaryService {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225H323_UU_PDU_h4501SupplementaryService;

EXTERN int asn1PE_H225H323_UU_PDU_h4501SupplementaryService (OOCTXT* pctxt, H225H323_UU_PDU_h4501SupplementaryService* pvalue);

EXTERN int asn1PD_H225H323_UU_PDU_h4501SupplementaryService (OOCTXT* pctxt, H225H323_UU_PDU_h4501SupplementaryService* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UU_PDU_h245Control                                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UU_PDU_h245Control {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225H323_UU_PDU_h245Control;

EXTERN int asn1PE_H225H323_UU_PDU_h245Control (OOCTXT* pctxt, H225H323_UU_PDU_h245Control* pvalue);

EXTERN int asn1PD_H225H323_UU_PDU_h245Control (OOCTXT* pctxt, H225H323_UU_PDU_h245Control* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225NonStandardParameter                            */
/*                                                            */
/**************************************************************/

/* List of H225NonStandardParameter */
typedef DList H225_SeqOfH225NonStandardParameter;

EXTERN int asn1PE_H225_SeqOfH225NonStandardParameter (OOCTXT* pctxt, H225_SeqOfH225NonStandardParameter value);

EXTERN int asn1PD_H225_SeqOfH225NonStandardParameter (OOCTXT* pctxt, H225_SeqOfH225NonStandardParameter* pvalue);

/**************************************************************/
/*                                                            */
/*  CallLinkage                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallLinkage {
   struct {
      unsigned globalCallIdPresent : 1;
      unsigned threadIdPresent : 1;
   } m;
   H225GloballyUniqueID globalCallId;
   H225GloballyUniqueID threadId;
   DList extElem1;
} H225CallLinkage;

EXTERN int asn1PE_H225CallLinkage (OOCTXT* pctxt, H225CallLinkage* pvalue);

EXTERN int asn1PD_H225CallLinkage (OOCTXT* pctxt, H225CallLinkage* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UU_PDU_tunnelledSignallingMessage_messageContent     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UU_PDU_tunnelledSignallingMessage_messageContent {
   ASN1UINT n;
   ASN1DynOctStr *elem;
} H225H323_UU_PDU_tunnelledSignallingMessage_messageContent;

EXTERN int asn1PE_H225H323_UU_PDU_tunnelledSignallingMessage_messageContent (OOCTXT* pctxt, H225H323_UU_PDU_tunnelledSignallingMessage_messageContent* pvalue);

EXTERN int asn1PD_H225H323_UU_PDU_tunnelledSignallingMessage_messageContent (OOCTXT* pctxt, H225H323_UU_PDU_tunnelledSignallingMessage_messageContent* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UU_PDU_tunnelledSignallingMessage                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UU_PDU_tunnelledSignallingMessage {
   struct {
      unsigned tunnellingRequiredPresent : 1;
      unsigned nonStandardDataPresent : 1;
   } m;
   H225TunnelledProtocol tunnelledProtocolID;
   H225H323_UU_PDU_tunnelledSignallingMessage_messageContent messageContent;
   H225NonStandardParameter nonStandardData;
   DList extElem1;
} H225H323_UU_PDU_tunnelledSignallingMessage;

EXTERN int asn1PE_H225H323_UU_PDU_tunnelledSignallingMessage (OOCTXT* pctxt, H225H323_UU_PDU_tunnelledSignallingMessage* pvalue);

EXTERN int asn1PD_H225H323_UU_PDU_tunnelledSignallingMessage (OOCTXT* pctxt, H225H323_UU_PDU_tunnelledSignallingMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  StimulusControl                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225StimulusControl {
   struct {
      unsigned nonStandardPresent : 1;
      unsigned isTextPresent : 1;
      unsigned h248MessagePresent : 1;
   } m;
   H225NonStandardParameter nonStandard;
   ASN1DynOctStr h248Message;
   DList extElem1;
} H225StimulusControl;

EXTERN int asn1PE_H225StimulusControl (OOCTXT* pctxt, H225StimulusControl* pvalue);

EXTERN int asn1PD_H225StimulusControl (OOCTXT* pctxt, H225StimulusControl* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UU_PDU                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UU_PDU {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned h4501SupplementaryServicePresent : 1;
      unsigned h245TunnelingPresent : 1;
      unsigned h245ControlPresent : 1;
      unsigned nonStandardControlPresent : 1;
      unsigned callLinkagePresent : 1;
      unsigned tunnelledSignallingMessagePresent : 1;
      unsigned provisionalRespToH245TunnelingPresent : 1;
      unsigned stimulusControlPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225H323_UU_PDU_h323_message_body h323_message_body;
   H225NonStandardParameter nonStandardData;
   H225H323_UU_PDU_h4501SupplementaryService h4501SupplementaryService;
   ASN1BOOL h245Tunneling;
   H225H323_UU_PDU_h245Control h245Control;
   H225_SeqOfH225NonStandardParameter nonStandardControl;
   H225CallLinkage callLinkage;
   H225H323_UU_PDU_tunnelledSignallingMessage tunnelledSignallingMessage;
   H225StimulusControl stimulusControl;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225H323_UU_PDU;

EXTERN int asn1PE_H225H323_UU_PDU (OOCTXT* pctxt, H225H323_UU_PDU* pvalue);

EXTERN int asn1PD_H225H323_UU_PDU (OOCTXT* pctxt, H225H323_UU_PDU* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UserInformation_user_data                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UserInformation_user_data {
   ASN1UINT8 protocol_discriminator;
   H225H323_UserInformation_user_data_user_information user_information;
   DList extElem1;
} H225H323_UserInformation_user_data;

EXTERN int asn1PE_H225H323_UserInformation_user_data (OOCTXT* pctxt, H225H323_UserInformation_user_data* pvalue);

EXTERN int asn1PD_H225H323_UserInformation_user_data (OOCTXT* pctxt, H225H323_UserInformation_user_data* pvalue);

/**************************************************************/
/*                                                            */
/*  H323_UserInformation                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225H323_UserInformation {
   struct {
      unsigned user_dataPresent : 1;
   } m;
   H225H323_UU_PDU h323_uu_pdu;
   H225H323_UserInformation_user_data user_data;
   DList extElem1;
} H225H323_UserInformation;

EXTERN int asn1PE_H225H323_UserInformation (OOCTXT* pctxt, H225H323_UserInformation* pvalue);

EXTERN int asn1PD_H225H323_UserInformation (OOCTXT* pctxt, H225H323_UserInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  AddressPattern_range                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AddressPattern_range {
   H225PartyNumber startOfRange;
   H225PartyNumber endOfRange;
} H225AddressPattern_range;

EXTERN int asn1PE_H225AddressPattern_range (OOCTXT* pctxt, H225AddressPattern_range* pvalue);

EXTERN int asn1PD_H225AddressPattern_range (OOCTXT* pctxt, H225AddressPattern_range* pvalue);

/**************************************************************/
/*                                                            */
/*  AddressPattern                                            */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225AddressPattern_wildcard   1
#define T_H225AddressPattern_range      2
#define T_H225AddressPattern_extElem1   3

typedef struct EXTERN H225AddressPattern {
   int t;
   union {
      /* t = 1 */
      H225AliasAddress *wildcard;
      /* t = 2 */
      H225AddressPattern_range *range;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225AddressPattern;

EXTERN int asn1PE_H225AddressPattern (OOCTXT* pctxt, H225AddressPattern* pvalue);

EXTERN int asn1PD_H225AddressPattern (OOCTXT* pctxt, H225AddressPattern* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225TransportAddress                                */
/*                                                            */
/**************************************************************/

/* List of H225TransportAddress */
typedef DList H225_SeqOfH225TransportAddress;

EXTERN int asn1PE_H225_SeqOfH225TransportAddress (OOCTXT* pctxt, H225_SeqOfH225TransportAddress value);

EXTERN int asn1PD_H225_SeqOfH225TransportAddress (OOCTXT* pctxt, H225_SeqOfH225TransportAddress* pvalue);

/**************************************************************/
/*                                                            */
/*  AlternateTransportAddresses                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AlternateTransportAddresses {
   struct {
      unsigned annexEPresent : 1;
      unsigned sctpPresent : 1;
   } m;
   H225_SeqOfH225TransportAddress annexE;
   H225_SeqOfH225TransportAddress sctp;
   DList extElem1;
} H225AlternateTransportAddresses;

EXTERN int asn1PE_H225AlternateTransportAddresses (OOCTXT* pctxt, H225AlternateTransportAddresses* pvalue);

EXTERN int asn1PD_H225AlternateTransportAddresses (OOCTXT* pctxt, H225AlternateTransportAddresses* pvalue);

/**************************************************************/
/*                                                            */
/*  Endpoint                                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225Endpoint {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned aliasAddressPresent : 1;
      unsigned callSignalAddressPresent : 1;
      unsigned rasAddressPresent : 1;
      unsigned endpointTypePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned priorityPresent : 1;
      unsigned remoteExtensionAddressPresent : 1;
      unsigned destExtraCallInfoPresent : 1;
      unsigned alternateTransportAddressesPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned featureSetPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225AliasAddress aliasAddress;
   H225_SeqOfH225TransportAddress callSignalAddress;
   H225_SeqOfH225TransportAddress rasAddress;
   H225EndpointType endpointType;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   ASN1UINT8 priority;
   H225_SeqOfH225AliasAddress remoteExtensionAddress;
   H225_SeqOfH225AliasAddress destExtraCallInfo;
   H225AlternateTransportAddresses alternateTransportAddresses;
   H225CircuitInfo circuitInfo;
   H225FeatureSet featureSet;
   DList extElem1;
} H225Endpoint;

EXTERN int asn1PE_H225Endpoint (OOCTXT* pctxt, H225Endpoint* pvalue);

EXTERN int asn1PD_H225Endpoint (OOCTXT* pctxt, H225Endpoint* pvalue);

/**************************************************************/
/*                                                            */
/*  UseSpecifiedTransport                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225UseSpecifiedTransport_tcp 1
#define T_H225UseSpecifiedTransport_annexE 2
#define T_H225UseSpecifiedTransport_sctp 3
#define T_H225UseSpecifiedTransport_extElem1 4

typedef struct EXTERN H225UseSpecifiedTransport {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225UseSpecifiedTransport;

EXTERN int asn1PE_H225UseSpecifiedTransport (OOCTXT* pctxt, H225UseSpecifiedTransport* pvalue);

EXTERN int asn1PD_H225UseSpecifiedTransport (OOCTXT* pctxt, H225UseSpecifiedTransport* pvalue);

/**************************************************************/
/*                                                            */
/*  AlternateGK                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AlternateGK {
   struct {
      unsigned gatekeeperIdentifierPresent : 1;
   } m;
   H225TransportAddress rasAddress;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   ASN1BOOL needToRegister;
   ASN1UINT8 priority;
   DList extElem1;
} H225AlternateGK;

EXTERN int asn1PE_H225AlternateGK (OOCTXT* pctxt, H225AlternateGK* pvalue);

EXTERN int asn1PD_H225AlternateGK (OOCTXT* pctxt, H225AlternateGK* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225AlternateGK                                     */
/*                                                            */
/**************************************************************/

/* List of H225AlternateGK */
typedef DList H225_SeqOfH225AlternateGK;

EXTERN int asn1PE_H225_SeqOfH225AlternateGK (OOCTXT* pctxt, H225_SeqOfH225AlternateGK value);

EXTERN int asn1PD_H225_SeqOfH225AlternateGK (OOCTXT* pctxt, H225_SeqOfH225AlternateGK* pvalue);

/**************************************************************/
/*                                                            */
/*  AltGKInfo                                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AltGKInfo {
   H225_SeqOfH225AlternateGK alternateGatekeeper;
   ASN1BOOL altGKisPermanent;
   DList extElem1;
} H225AltGKInfo;

EXTERN int asn1PE_H225AltGKInfo (OOCTXT* pctxt, H225AltGKInfo* pvalue);

EXTERN int asn1PD_H225AltGKInfo (OOCTXT* pctxt, H225AltGKInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  SecurityErrors2                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225SecurityErrors2_securityWrongSyncTime 1
#define T_H225SecurityErrors2_securityReplay 2
#define T_H225SecurityErrors2_securityWrongGeneralID 3
#define T_H225SecurityErrors2_securityWrongSendersID 4
#define T_H225SecurityErrors2_securityIntegrityFailed 5
#define T_H225SecurityErrors2_securityWrongOID 6
#define T_H225SecurityErrors2_extElem1  7

typedef struct EXTERN H225SecurityErrors2 {
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
} H225SecurityErrors2;

EXTERN int asn1PE_H225SecurityErrors2 (OOCTXT* pctxt, H225SecurityErrors2* pvalue);

EXTERN int asn1PD_H225SecurityErrors2 (OOCTXT* pctxt, H225SecurityErrors2* pvalue);

/**************************************************************/
/*                                                            */
/*  EncryptIntAlg                                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225EncryptIntAlg_nonStandard 1
#define T_H225EncryptIntAlg_isoAlgorithm 2
#define T_H225EncryptIntAlg_extElem1    3

typedef struct EXTERN H225EncryptIntAlg {
   int t;
   union {
      /* t = 1 */
      H225NonStandardParameter *nonStandard;
      /* t = 2 */
      ASN1OBJID *isoAlgorithm;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225EncryptIntAlg;

EXTERN int asn1PE_H225EncryptIntAlg (OOCTXT* pctxt, H225EncryptIntAlg* pvalue);

EXTERN int asn1PD_H225EncryptIntAlg (OOCTXT* pctxt, H225EncryptIntAlg* pvalue);

/**************************************************************/
/*                                                            */
/*  NonIsoIntegrityMechanism                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225NonIsoIntegrityMechanism_hMAC_MD5 1
#define T_H225NonIsoIntegrityMechanism_hMAC_iso10118_2_s 2
#define T_H225NonIsoIntegrityMechanism_hMAC_iso10118_2_l 3
#define T_H225NonIsoIntegrityMechanism_hMAC_iso10118_3 4
#define T_H225NonIsoIntegrityMechanism_extElem1 5

typedef struct EXTERN H225NonIsoIntegrityMechanism {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      H225EncryptIntAlg *hMAC_iso10118_2_s;
      /* t = 3 */
      H225EncryptIntAlg *hMAC_iso10118_2_l;
      /* t = 4 */
      ASN1OBJID *hMAC_iso10118_3;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225NonIsoIntegrityMechanism;

EXTERN int asn1PE_H225NonIsoIntegrityMechanism (OOCTXT* pctxt, H225NonIsoIntegrityMechanism* pvalue);

EXTERN int asn1PD_H225NonIsoIntegrityMechanism (OOCTXT* pctxt, H225NonIsoIntegrityMechanism* pvalue);

/**************************************************************/
/*                                                            */
/*  IntegrityMechanism                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225IntegrityMechanism_nonStandard 1
#define T_H225IntegrityMechanism_digSig 2
#define T_H225IntegrityMechanism_iso9797 3
#define T_H225IntegrityMechanism_nonIsoIM 4
#define T_H225IntegrityMechanism_extElem1 5

typedef struct EXTERN H225IntegrityMechanism {
   int t;
   union {
      /* t = 1 */
      H225NonStandardParameter *nonStandard;
      /* t = 2 */
      /* t = 3 */
      ASN1OBJID *iso9797;
      /* t = 4 */
      H225NonIsoIntegrityMechanism *nonIsoIM;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225IntegrityMechanism;

EXTERN int asn1PE_H225IntegrityMechanism (OOCTXT* pctxt, H225IntegrityMechanism* pvalue);

EXTERN int asn1PD_H225IntegrityMechanism (OOCTXT* pctxt, H225IntegrityMechanism* pvalue);

/**************************************************************/
/*                                                            */
/*  ICV                                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ICV {
   ASN1OBJID algorithmOID;
   ASN1DynBitStr icv;
} H225ICV;

EXTERN int asn1PE_H225ICV (OOCTXT* pctxt, H225ICV* pvalue);

EXTERN int asn1PD_H225ICV (OOCTXT* pctxt, H225ICV* pvalue);

/**************************************************************/
/*                                                            */
/*  CapacityReportingCapability                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CapacityReportingCapability {
   ASN1BOOL canReportCallCapacity;
   DList extElem1;
} H225CapacityReportingCapability;

EXTERN int asn1PE_H225CapacityReportingCapability (OOCTXT* pctxt, H225CapacityReportingCapability* pvalue);

EXTERN int asn1PD_H225CapacityReportingCapability (OOCTXT* pctxt, H225CapacityReportingCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  CapacityReportingSpecification_when                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CapacityReportingSpecification_when {
   struct {
      unsigned callStartPresent : 1;
      unsigned callEndPresent : 1;
   } m;
   DList extElem1;
} H225CapacityReportingSpecification_when;

EXTERN int asn1PE_H225CapacityReportingSpecification_when (OOCTXT* pctxt, H225CapacityReportingSpecification_when* pvalue);

EXTERN int asn1PD_H225CapacityReportingSpecification_when (OOCTXT* pctxt, H225CapacityReportingSpecification_when* pvalue);

/**************************************************************/
/*                                                            */
/*  CapacityReportingSpecification                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CapacityReportingSpecification {
   H225CapacityReportingSpecification_when when;
   DList extElem1;
} H225CapacityReportingSpecification;

EXTERN int asn1PE_H225CapacityReportingSpecification (OOCTXT* pctxt, H225CapacityReportingSpecification* pvalue);

EXTERN int asn1PD_H225CapacityReportingSpecification (OOCTXT* pctxt, H225CapacityReportingSpecification* pvalue);

/**************************************************************/
/*                                                            */
/*  RasUsageInfoTypes                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RasUsageInfoTypes {
   struct {
      unsigned startTimePresent : 1;
      unsigned endTimePresent : 1;
      unsigned terminationCausePresent : 1;
   } m;
   H225_SeqOfH225NonStandardParameter nonStandardUsageTypes;
   DList extElem1;
} H225RasUsageInfoTypes;

EXTERN int asn1PE_H225RasUsageInfoTypes (OOCTXT* pctxt, H225RasUsageInfoTypes* pvalue);

EXTERN int asn1PD_H225RasUsageInfoTypes (OOCTXT* pctxt, H225RasUsageInfoTypes* pvalue);

/**************************************************************/
/*                                                            */
/*  RasUsageSpecification_when                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RasUsageSpecification_when {
   struct {
      unsigned startPresent : 1;
      unsigned endPresent : 1;
      unsigned inIrrPresent : 1;
   } m;
   DList extElem1;
} H225RasUsageSpecification_when;

EXTERN int asn1PE_H225RasUsageSpecification_when (OOCTXT* pctxt, H225RasUsageSpecification_when* pvalue);

EXTERN int asn1PD_H225RasUsageSpecification_when (OOCTXT* pctxt, H225RasUsageSpecification_when* pvalue);

/**************************************************************/
/*                                                            */
/*  RasUsageSpecification_callStartingPoint                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RasUsageSpecification_callStartingPoint {
   struct {
      unsigned alertingPresent : 1;
      unsigned connectPresent : 1;
   } m;
   DList extElem1;
} H225RasUsageSpecification_callStartingPoint;

EXTERN int asn1PE_H225RasUsageSpecification_callStartingPoint (OOCTXT* pctxt, H225RasUsageSpecification_callStartingPoint* pvalue);

EXTERN int asn1PD_H225RasUsageSpecification_callStartingPoint (OOCTXT* pctxt, H225RasUsageSpecification_callStartingPoint* pvalue);

/**************************************************************/
/*                                                            */
/*  RasUsageSpecification                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RasUsageSpecification {
   struct {
      unsigned callStartingPointPresent : 1;
   } m;
   H225RasUsageSpecification_when when;
   H225RasUsageSpecification_callStartingPoint callStartingPoint;
   H225RasUsageInfoTypes required;
   DList extElem1;
} H225RasUsageSpecification;

EXTERN int asn1PE_H225RasUsageSpecification (OOCTXT* pctxt, H225RasUsageSpecification* pvalue);

EXTERN int asn1PD_H225RasUsageSpecification (OOCTXT* pctxt, H225RasUsageSpecification* pvalue);

/**************************************************************/
/*                                                            */
/*  RasUsageInformation                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RasUsageInformation {
   struct {
      unsigned alertingTimePresent : 1;
      unsigned connectTimePresent : 1;
      unsigned endTimePresent : 1;
   } m;
   H225_SeqOfH225NonStandardParameter nonStandardUsageFields;
   H235TimeStamp alertingTime;
   H235TimeStamp connectTime;
   H235TimeStamp endTime;
   DList extElem1;
} H225RasUsageInformation;

EXTERN int asn1PE_H225RasUsageInformation (OOCTXT* pctxt, H225RasUsageInformation* pvalue);

EXTERN int asn1PD_H225RasUsageInformation (OOCTXT* pctxt, H225RasUsageInformation* pvalue);

/**************************************************************/
/*                                                            */
/*  CallTerminationCause                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225CallTerminationCause_releaseCompleteReason 1
#define T_H225CallTerminationCause_releaseCompleteCauseIE 2
#define T_H225CallTerminationCause_extElem1 3

typedef struct EXTERN H225CallTerminationCause {
   int t;
   union {
      /* t = 1 */
      H225ReleaseCompleteReason *releaseCompleteReason;
      /* t = 2 */
      H225CallTerminationCause_releaseCompleteCauseIE *releaseCompleteCauseIE;
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225CallTerminationCause;

EXTERN int asn1PE_H225CallTerminationCause (OOCTXT* pctxt, H225CallTerminationCause* pvalue);

EXTERN int asn1PD_H225CallTerminationCause (OOCTXT* pctxt, H225CallTerminationCause* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportChannelInfo                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225TransportChannelInfo {
   struct {
      unsigned sendAddressPresent : 1;
      unsigned recvAddressPresent : 1;
   } m;
   H225TransportAddress sendAddress;
   H225TransportAddress recvAddress;
   DList extElem1;
} H225TransportChannelInfo;

EXTERN int asn1PE_H225TransportChannelInfo (OOCTXT* pctxt, H225TransportChannelInfo* pvalue);

EXTERN int asn1PD_H225TransportChannelInfo (OOCTXT* pctxt, H225TransportChannelInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  BandwidthDetails                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225BandwidthDetails {
   ASN1BOOL sender;
   ASN1BOOL multicast;
   H225BandWidth bandwidth;
   H225TransportChannelInfo rtcpAddresses;
   DList extElem1;
} H225BandwidthDetails;

EXTERN int asn1PE_H225BandwidthDetails (OOCTXT* pctxt, H225BandwidthDetails* pvalue);

EXTERN int asn1PD_H225BandwidthDetails (OOCTXT* pctxt, H225BandwidthDetails* pvalue);

/**************************************************************/
/*                                                            */
/*  CallCreditCapability                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225CallCreditCapability {
   struct {
      unsigned canDisplayAmountStringPresent : 1;
      unsigned canEnforceDurationLimitPresent : 1;
   } m;
   ASN1BOOL canDisplayAmountString;
   ASN1BOOL canEnforceDurationLimit;
   DList extElem1;
} H225CallCreditCapability;

EXTERN int asn1PE_H225CallCreditCapability (OOCTXT* pctxt, H225CallCreditCapability* pvalue);

EXTERN int asn1PD_H225CallCreditCapability (OOCTXT* pctxt, H225CallCreditCapability* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPSession_associatedSessionIds                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RTPSession_associatedSessionIds {
   ASN1UINT n;
   ASN1UINT8 *elem;
} H225RTPSession_associatedSessionIds;

EXTERN int asn1PE_H225RTPSession_associatedSessionIds (OOCTXT* pctxt, H225RTPSession_associatedSessionIds* pvalue);

EXTERN int asn1PD_H225RTPSession_associatedSessionIds (OOCTXT* pctxt, H225RTPSession_associatedSessionIds* pvalue);

/**************************************************************/
/*                                                            */
/*  RTPSession                                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RTPSession {
   struct {
      unsigned multicastPresent : 1;
      unsigned bandwidthPresent : 1;
   } m;
   H225TransportChannelInfo rtpAddress;
   H225TransportChannelInfo rtcpAddress;
   ASN1PrintableString cname;
   ASN1UINT ssrc;
   ASN1UINT8 sessionId;
   H225RTPSession_associatedSessionIds associatedSessionIds;
   H225BandWidth bandwidth;
   DList extElem1;
} H225RTPSession;

EXTERN int asn1PE_H225RTPSession (OOCTXT* pctxt, H225RTPSession* pvalue);

EXTERN int asn1PD_H225RTPSession (OOCTXT* pctxt, H225RTPSession* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225Endpoint                                        */
/*                                                            */
/**************************************************************/

/* List of H225Endpoint */
typedef DList H225_SeqOfH225Endpoint;

EXTERN int asn1PE_H225_SeqOfH225Endpoint (OOCTXT* pctxt, H225_SeqOfH225Endpoint value);

EXTERN int asn1PD_H225_SeqOfH225Endpoint (OOCTXT* pctxt, H225_SeqOfH225Endpoint* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225AuthenticationMechanism                         */
/*                                                            */
/**************************************************************/

/* List of H235AuthenticationMechanism */
typedef DList H225_SeqOfH225AuthenticationMechanism;

EXTERN int asn1PE_H225_SeqOfH225AuthenticationMechanism (OOCTXT* pctxt, H225_SeqOfH225AuthenticationMechanism value);

EXTERN int asn1PD_H225_SeqOfH225AuthenticationMechanism (OOCTXT* pctxt, H225_SeqOfH225AuthenticationMechanism* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperRequest_algorithmOIDs                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GatekeeperRequest_algorithmOIDs {
   ASN1UINT n;
   ASN1OBJID *elem;
} H225GatekeeperRequest_algorithmOIDs;

EXTERN int asn1PE_H225GatekeeperRequest_algorithmOIDs (OOCTXT* pctxt, H225GatekeeperRequest_algorithmOIDs* pvalue);

EXTERN int asn1PD_H225GatekeeperRequest_algorithmOIDs (OOCTXT* pctxt, H225GatekeeperRequest_algorithmOIDs* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225IntegrityMechanism                              */
/*                                                            */
/**************************************************************/

/* List of H225IntegrityMechanism */
typedef DList H225_SeqOfH225IntegrityMechanism;

EXTERN int asn1PE_H225_SeqOfH225IntegrityMechanism (OOCTXT* pctxt, H225_SeqOfH225IntegrityMechanism value);

EXTERN int asn1PD_H225_SeqOfH225IntegrityMechanism (OOCTXT* pctxt, H225_SeqOfH225IntegrityMechanism* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperRequest                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GatekeeperRequest {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned callServicesPresent : 1;
      unsigned endpointAliasPresent : 1;
      unsigned alternateEndpointsPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned authenticationCapabilityPresent : 1;
      unsigned algorithmOIDsPresent : 1;
      unsigned integrityPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned supportsAltGKPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225TransportAddress rasAddress;
   H225EndpointType endpointType;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225QseriesOptions callServices;
   H225_SeqOfH225AliasAddress endpointAlias;
   H225_SeqOfH225Endpoint alternateEndpoints;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225_SeqOfH225AuthenticationMechanism authenticationCapability;
   H225GatekeeperRequest_algorithmOIDs algorithmOIDs;
   H225_SeqOfH225IntegrityMechanism integrity;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225GatekeeperRequest;

EXTERN int asn1PE_H225GatekeeperRequest (OOCTXT* pctxt, H225GatekeeperRequest* pvalue);

EXTERN int asn1PD_H225GatekeeperRequest (OOCTXT* pctxt, H225GatekeeperRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperConfirm                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GatekeeperConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned alternateGatekeeperPresent : 1;
      unsigned authenticationModePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned algorithmOIDPresent : 1;
      unsigned integrityPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225TransportAddress rasAddress;
   H225_SeqOfH225AlternateGK alternateGatekeeper;
   H235AuthenticationMechanism authenticationMode;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   ASN1OBJID algorithmOID;
   H225_SeqOfH225IntegrityMechanism integrity;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225GatekeeperConfirm;

EXTERN int asn1PE_H225GatekeeperConfirm (OOCTXT* pctxt, H225GatekeeperConfirm* pvalue);

EXTERN int asn1PD_H225GatekeeperConfirm (OOCTXT* pctxt, H225GatekeeperConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperRejectReason                                    */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225GatekeeperRejectReason_resourceUnavailable 1
#define T_H225GatekeeperRejectReason_terminalExcluded 2
#define T_H225GatekeeperRejectReason_invalidRevision 3
#define T_H225GatekeeperRejectReason_undefinedReason 4
#define T_H225GatekeeperRejectReason_securityDenial 5
#define T_H225GatekeeperRejectReason_genericDataReason 6
#define T_H225GatekeeperRejectReason_neededFeatureNotSupported 7
#define T_H225GatekeeperRejectReason_securityError 8
#define T_H225GatekeeperRejectReason_extElem1 9

typedef struct EXTERN H225GatekeeperRejectReason {
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
      H225SecurityErrors *securityError;
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H225GatekeeperRejectReason;

EXTERN int asn1PE_H225GatekeeperRejectReason (OOCTXT* pctxt, H225GatekeeperRejectReason* pvalue);

EXTERN int asn1PD_H225GatekeeperRejectReason (OOCTXT* pctxt, H225GatekeeperRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  GatekeeperReject                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225GatekeeperReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225GatekeeperRejectReason rejectReason;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225GatekeeperReject;

EXTERN int asn1PE_H225GatekeeperReject (OOCTXT* pctxt, H225GatekeeperReject* pvalue);

EXTERN int asn1PD_H225GatekeeperReject (OOCTXT* pctxt, H225GatekeeperReject* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225AddressPattern                                  */
/*                                                            */
/**************************************************************/

/* List of H225AddressPattern */
typedef DList H225_SeqOfH225AddressPattern;

EXTERN int asn1PE_H225_SeqOfH225AddressPattern (OOCTXT* pctxt, H225_SeqOfH225AddressPattern value);

EXTERN int asn1PD_H225_SeqOfH225AddressPattern (OOCTXT* pctxt, H225_SeqOfH225AddressPattern* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225H248PackagesDescriptor                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225_SeqOfH225H248PackagesDescriptor {
   ASN1UINT n;
   H225H248PackagesDescriptor *elem;
} H225_SeqOfH225H248PackagesDescriptor;

EXTERN int asn1PE_H225_SeqOfH225H248PackagesDescriptor (OOCTXT* pctxt, H225_SeqOfH225H248PackagesDescriptor* pvalue);

EXTERN int asn1PD_H225_SeqOfH225H248PackagesDescriptor (OOCTXT* pctxt, H225_SeqOfH225H248PackagesDescriptor* pvalue);

/**************************************************************/
/*                                                            */
/*  RegistrationRequest                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RegistrationRequest {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned terminalAliasPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned alternateEndpointsPresent : 1;
      unsigned timeToLivePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned keepAlivePresent : 1;
      unsigned endpointIdentifierPresent : 1;
      unsigned willSupplyUUIEsPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned alternateTransportAddressesPresent : 1;
      unsigned additiveRegistrationPresent : 1;
      unsigned terminalAliasPatternPresent : 1;
      unsigned supportsAltGKPresent : 1;
      unsigned usageReportingCapabilityPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned supportedH248PackagesPresent : 1;
      unsigned callCreditCapabilityPresent : 1;
      unsigned capacityReportingCapabilityPresent : 1;
      unsigned capacityPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
      unsigned restartPresent : 1;
      unsigned supportsACFSequencesPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   ASN1BOOL discoveryComplete;
   H225_SeqOfH225TransportAddress callSignalAddress;
   H225_SeqOfH225TransportAddress rasAddress;
   H225EndpointType terminalType;
   H225_SeqOfH225AliasAddress terminalAlias;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225VendorIdentifier endpointVendor;
   H225_SeqOfH225Endpoint alternateEndpoints;
   H225TimeToLive timeToLive;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1BOOL keepAlive;
   H225EndpointIdentifier endpointIdentifier;
   ASN1BOOL willSupplyUUIEs;
   ASN1BOOL maintainConnection;
   H225AlternateTransportAddresses alternateTransportAddresses;
   H225_SeqOfH225AddressPattern terminalAliasPattern;
   H225RasUsageInfoTypes usageReportingCapability;
   ASN1BOOL multipleCalls;
   H225_SeqOfH225H248PackagesDescriptor supportedH248Packages;
   H225CallCreditCapability callCreditCapability;
   H225CapacityReportingCapability capacityReportingCapability;
   H225CallCapacity capacity;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225RegistrationRequest;

EXTERN int asn1PE_H225RegistrationRequest (OOCTXT* pctxt, H225RegistrationRequest* pvalue);

EXTERN int asn1PD_H225RegistrationRequest (OOCTXT* pctxt, H225RegistrationRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  RegistrationConfirm_preGrantedARQ                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RegistrationConfirm_preGrantedARQ {
   struct {
      unsigned irrFrequencyInCallPresent : 1;
      unsigned totalBandwidthRestrictionPresent : 1;
      unsigned alternateTransportAddressesPresent : 1;
      unsigned useSpecifiedTransportPresent : 1;
   } m;
   ASN1BOOL makeCall;
   ASN1BOOL useGKCallSignalAddressToMakeCall;
   ASN1BOOL answerCall;
   ASN1BOOL useGKCallSignalAddressToAnswer;
   ASN1USINT irrFrequencyInCall;
   H225BandWidth totalBandwidthRestriction;
   H225AlternateTransportAddresses alternateTransportAddresses;
   H225UseSpecifiedTransport useSpecifiedTransport;
   DList extElem1;
} H225RegistrationConfirm_preGrantedARQ;

EXTERN int asn1PE_H225RegistrationConfirm_preGrantedARQ (OOCTXT* pctxt, H225RegistrationConfirm_preGrantedARQ* pvalue);

EXTERN int asn1PD_H225RegistrationConfirm_preGrantedARQ (OOCTXT* pctxt, H225RegistrationConfirm_preGrantedARQ* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225RasUsageSpecification                           */
/*                                                            */
/**************************************************************/

/* List of H225RasUsageSpecification */
typedef DList H225_SeqOfH225RasUsageSpecification;

EXTERN int asn1PE_H225_SeqOfH225RasUsageSpecification (OOCTXT* pctxt, H225_SeqOfH225RasUsageSpecification value);

EXTERN int asn1PD_H225_SeqOfH225RasUsageSpecification (OOCTXT* pctxt, H225_SeqOfH225RasUsageSpecification* pvalue);

/**************************************************************/
/*                                                            */
/*  RegistrationConfirm                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RegistrationConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned terminalAliasPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned alternateGatekeeperPresent : 1;
      unsigned timeToLivePresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned willRespondToIRRPresent : 1;
      unsigned preGrantedARQPresent : 1;
      unsigned maintainConnectionPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned supportsAdditiveRegistrationPresent : 1;
      unsigned terminalAliasPatternPresent : 1;
      unsigned supportedPrefixesPresent : 1;
      unsigned usageSpecPresent : 1;
      unsigned featureServerAliasPresent : 1;
      unsigned capacityReportingSpecPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225TransportAddress callSignalAddress;
   H225_SeqOfH225AliasAddress terminalAlias;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225EndpointIdentifier endpointIdentifier;
   H225_SeqOfH225AlternateGK alternateGatekeeper;
   H225TimeToLive timeToLive;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1BOOL willRespondToIRR;
   H225RegistrationConfirm_preGrantedARQ preGrantedARQ;
   ASN1BOOL maintainConnection;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225_SeqOfH225AddressPattern terminalAliasPattern;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   H225_SeqOfH225RasUsageSpecification usageSpec;
   H225AliasAddress featureServerAlias;
   H225CapacityReportingSpecification capacityReportingSpec;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225RegistrationConfirm;

EXTERN int asn1PE_H225RegistrationConfirm (OOCTXT* pctxt, H225RegistrationConfirm* pvalue);

EXTERN int asn1PD_H225RegistrationConfirm (OOCTXT* pctxt, H225RegistrationConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  RegistrationRejectReason_invalidTerminalAliases           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RegistrationRejectReason_invalidTerminalAliases {
   struct {
      unsigned terminalAliasPresent : 1;
      unsigned terminalAliasPatternPresent : 1;
      unsigned supportedPrefixesPresent : 1;
   } m;
   H225_SeqOfH225AliasAddress terminalAlias;
   H225_SeqOfH225AddressPattern terminalAliasPattern;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   DList extElem1;
} H225RegistrationRejectReason_invalidTerminalAliases;

EXTERN int asn1PE_H225RegistrationRejectReason_invalidTerminalAliases (OOCTXT* pctxt, H225RegistrationRejectReason_invalidTerminalAliases* pvalue);

EXTERN int asn1PD_H225RegistrationRejectReason_invalidTerminalAliases (OOCTXT* pctxt, H225RegistrationRejectReason_invalidTerminalAliases* pvalue);

/**************************************************************/
/*                                                            */
/*  RegistrationRejectReason                                  */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225RegistrationRejectReason_discoveryRequired 1
#define T_H225RegistrationRejectReason_invalidRevision 2
#define T_H225RegistrationRejectReason_invalidCallSignalAddress 3
#define T_H225RegistrationRejectReason_invalidRASAddress 4
#define T_H225RegistrationRejectReason_duplicateAlias 5
#define T_H225RegistrationRejectReason_invalidTerminalType 6
#define T_H225RegistrationRejectReason_undefinedReason 7
#define T_H225RegistrationRejectReason_transportNotSupported 8
#define T_H225RegistrationRejectReason_transportQOSNotSupported 9
#define T_H225RegistrationRejectReason_resourceUnavailable 10
#define T_H225RegistrationRejectReason_invalidAlias 11
#define T_H225RegistrationRejectReason_securityDenial 12
#define T_H225RegistrationRejectReason_fullRegistrationRequired 13
#define T_H225RegistrationRejectReason_additiveRegistrationNotSupported 14
#define T_H225RegistrationRejectReason_invalidTerminalAliases 15
#define T_H225RegistrationRejectReason_genericDataReason 16
#define T_H225RegistrationRejectReason_neededFeatureNotSupported 17
#define T_H225RegistrationRejectReason_securityError 18
#define T_H225RegistrationRejectReason_extElem1 19

typedef struct EXTERN H225RegistrationRejectReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      H225_SeqOfH225AliasAddress *duplicateAlias;
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
      H225RegistrationRejectReason_invalidTerminalAliases *invalidTerminalAliases;
      /* t = 16 */
      /* t = 17 */
      /* t = 18 */
      H225SecurityErrors *securityError;
      /* t = 19 */
      ASN1OpenType *extElem1;
   } u;
} H225RegistrationRejectReason;

EXTERN int asn1PE_H225RegistrationRejectReason (OOCTXT* pctxt, H225RegistrationRejectReason* pvalue);

EXTERN int asn1PD_H225RegistrationRejectReason (OOCTXT* pctxt, H225RegistrationRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  RegistrationReject                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RegistrationReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225RegistrationRejectReason rejectReason;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225RegistrationReject;

EXTERN int asn1PE_H225RegistrationReject (OOCTXT* pctxt, H225RegistrationReject* pvalue);

EXTERN int asn1PD_H225RegistrationReject (OOCTXT* pctxt, H225RegistrationReject* pvalue);

/**************************************************************/
/*                                                            */
/*  UnregRequestReason                                        */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225UnregRequestReason_reregistrationRequired 1
#define T_H225UnregRequestReason_ttlExpired 2
#define T_H225UnregRequestReason_securityDenial 3
#define T_H225UnregRequestReason_undefinedReason 4
#define T_H225UnregRequestReason_maintenance 5
#define T_H225UnregRequestReason_securityError 6
#define T_H225UnregRequestReason_extElem1 7

typedef struct EXTERN H225UnregRequestReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      H225SecurityErrors2 *securityError;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H225UnregRequestReason;

EXTERN int asn1PE_H225UnregRequestReason (OOCTXT* pctxt, H225UnregRequestReason* pvalue);

EXTERN int asn1PD_H225UnregRequestReason (OOCTXT* pctxt, H225UnregRequestReason* pvalue);

/**************************************************************/
/*                                                            */
/*  UnregistrationRequest                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225UnregistrationRequest {
   struct {
      unsigned endpointAliasPresent : 1;
      unsigned nonStandardDataPresent : 1;
      unsigned endpointIdentifierPresent : 1;
      unsigned alternateEndpointsPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned reasonPresent : 1;
      unsigned endpointAliasPatternPresent : 1;
      unsigned supportedPrefixesPresent : 1;
      unsigned alternateGatekeeperPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225_SeqOfH225TransportAddress callSignalAddress;
   H225_SeqOfH225AliasAddress endpointAlias;
   H225NonStandardParameter nonStandardData;
   H225EndpointIdentifier endpointIdentifier;
   H225_SeqOfH225Endpoint alternateEndpoints;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225UnregRequestReason reason;
   H225_SeqOfH225AddressPattern endpointAliasPattern;
   H225_SeqOfH225SupportedPrefix supportedPrefixes;
   H225_SeqOfH225AlternateGK alternateGatekeeper;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225UnregistrationRequest;

EXTERN int asn1PE_H225UnregistrationRequest (OOCTXT* pctxt, H225UnregistrationRequest* pvalue);

EXTERN int asn1PD_H225UnregistrationRequest (OOCTXT* pctxt, H225UnregistrationRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  UnregistrationConfirm                                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225UnregistrationConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225UnregistrationConfirm;

EXTERN int asn1PE_H225UnregistrationConfirm (OOCTXT* pctxt, H225UnregistrationConfirm* pvalue);

EXTERN int asn1PD_H225UnregistrationConfirm (OOCTXT* pctxt, H225UnregistrationConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  UnregRejectReason                                         */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225UnregRejectReason_notCurrentlyRegistered 1
#define T_H225UnregRejectReason_callInProgress 2
#define T_H225UnregRejectReason_undefinedReason 3
#define T_H225UnregRejectReason_permissionDenied 4
#define T_H225UnregRejectReason_securityDenial 5
#define T_H225UnregRejectReason_securityError 6
#define T_H225UnregRejectReason_extElem1 7

typedef struct EXTERN H225UnregRejectReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      H225SecurityErrors2 *securityError;
      /* t = 7 */
      ASN1OpenType *extElem1;
   } u;
} H225UnregRejectReason;

EXTERN int asn1PE_H225UnregRejectReason (OOCTXT* pctxt, H225UnregRejectReason* pvalue);

EXTERN int asn1PD_H225UnregRejectReason (OOCTXT* pctxt, H225UnregRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  UnregistrationReject                                      */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225UnregistrationReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225UnregRejectReason rejectReason;
   H225NonStandardParameter nonStandardData;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225UnregistrationReject;

EXTERN int asn1PE_H225UnregistrationReject (OOCTXT* pctxt, H225UnregistrationReject* pvalue);

EXTERN int asn1PD_H225UnregistrationReject (OOCTXT* pctxt, H225UnregistrationReject* pvalue);

/**************************************************************/
/*                                                            */
/*  CallModel                                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225CallModel_direct          1
#define T_H225CallModel_gatekeeperRouted 2
#define T_H225CallModel_extElem1        3

typedef struct EXTERN H225CallModel {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1OpenType *extElem1;
   } u;
} H225CallModel;

EXTERN int asn1PE_H225CallModel (OOCTXT* pctxt, H225CallModel* pvalue);

EXTERN int asn1PD_H225CallModel (OOCTXT* pctxt, H225CallModel* pvalue);

/**************************************************************/
/*                                                            */
/*  TransportQOS                                              */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225TransportQOS_endpointControlled 1
#define T_H225TransportQOS_gatekeeperControlled 2
#define T_H225TransportQOS_noControl    3
#define T_H225TransportQOS_extElem1     4

typedef struct EXTERN H225TransportQOS {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225TransportQOS;

EXTERN int asn1PE_H225TransportQOS (OOCTXT* pctxt, H225TransportQOS* pvalue);

EXTERN int asn1PD_H225TransportQOS (OOCTXT* pctxt, H225TransportQOS* pvalue);

/**************************************************************/
/*                                                            */
/*  AdmissionRequest                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AdmissionRequest {
   struct {
      unsigned callModelPresent : 1;
      unsigned destinationInfoPresent : 1;
      unsigned destCallSignalAddressPresent : 1;
      unsigned destExtraCallInfoPresent : 1;
      unsigned srcCallSignalAddressPresent : 1;
      unsigned nonStandardDataPresent : 1;
      unsigned callServicesPresent : 1;
      unsigned canMapAliasPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned srcAlternativesPresent : 1;
      unsigned destAlternativesPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned transportQOSPresent : 1;
      unsigned willSupplyUUIEsPresent : 1;
      unsigned callLinkagePresent : 1;
      unsigned gatewayDataRatePresent : 1;
      unsigned capacityPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned desiredProtocolsPresent : 1;
      unsigned desiredTunnelledProtocolPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
      unsigned canMapSrcAliasPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225CallType callType;
   H225CallModel callModel;
   H225EndpointIdentifier endpointIdentifier;
   H225_SeqOfH225AliasAddress destinationInfo;
   H225TransportAddress destCallSignalAddress;
   H225_SeqOfH225AliasAddress destExtraCallInfo;
   H225_SeqOfH225AliasAddress srcInfo;
   H225TransportAddress srcCallSignalAddress;
   H225BandWidth bandWidth;
   H225CallReferenceValue callReferenceValue;
   H225NonStandardParameter nonStandardData;
   H225QseriesOptions callServices;
   H225ConferenceIdentifier conferenceID;
   ASN1BOOL activeMC;
   ASN1BOOL answerCall;
   ASN1BOOL canMapAlias;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225Endpoint srcAlternatives;
   H225_SeqOfH225Endpoint destAlternatives;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225TransportQOS transportQOS;
   ASN1BOOL willSupplyUUIEs;
   H225CallLinkage callLinkage;
   H225DataRate gatewayDataRate;
   H225CallCapacity capacity;
   H225CircuitInfo circuitInfo;
   H225_SeqOfH225SupportedProtocols desiredProtocols;
   H225TunnelledProtocol desiredTunnelledProtocol;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   ASN1BOOL canMapSrcAlias;
   DList extElem1;
} H225AdmissionRequest;

EXTERN int asn1PE_H225AdmissionRequest (OOCTXT* pctxt, H225AdmissionRequest* pvalue);

EXTERN int asn1PD_H225AdmissionRequest (OOCTXT* pctxt, H225AdmissionRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  UUIEsRequested                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225UUIEsRequested {
   struct {
      unsigned statusPresent : 1;
      unsigned statusInquiryPresent : 1;
      unsigned setupAcknowledgePresent : 1;
      unsigned notifyPresent : 1;
   } m;
   ASN1BOOL setup;
   ASN1BOOL callProceeding;
   ASN1BOOL connect;
   ASN1BOOL alerting;
   ASN1BOOL information;
   ASN1BOOL releaseComplete;
   ASN1BOOL facility;
   ASN1BOOL progress;
   ASN1BOOL empty;
   ASN1BOOL status;
   ASN1BOOL statusInquiry;
   ASN1BOOL setupAcknowledge;
   ASN1BOOL notify;
   DList extElem1;
} H225UUIEsRequested;

EXTERN int asn1PE_H225UUIEsRequested (OOCTXT* pctxt, H225UUIEsRequested* pvalue);

EXTERN int asn1PD_H225UUIEsRequested (OOCTXT* pctxt, H225UUIEsRequested* pvalue);

/**************************************************************/
/*                                                            */
/*  AdmissionConfirm_language                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AdmissionConfirm_language {
   ASN1UINT n;
   ASN1IA5String *elem;
} H225AdmissionConfirm_language;

EXTERN int asn1PE_H225AdmissionConfirm_language (OOCTXT* pctxt, H225AdmissionConfirm_language* pvalue);

EXTERN int asn1PD_H225AdmissionConfirm_language (OOCTXT* pctxt, H225AdmissionConfirm_language* pvalue);

/**************************************************************/
/*                                                            */
/*  AdmissionConfirm                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AdmissionConfirm {
   struct {
      unsigned irrFrequencyPresent : 1;
      unsigned nonStandardDataPresent : 1;
      unsigned destinationInfoPresent : 1;
      unsigned destExtraCallInfoPresent : 1;
      unsigned destinationTypePresent : 1;
      unsigned remoteExtensionAddressPresent : 1;
      unsigned alternateEndpointsPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned transportQOSPresent : 1;
      unsigned willRespondToIRRPresent : 1;
      unsigned uuiesRequestedPresent : 1;
      unsigned languagePresent : 1;
      unsigned alternateTransportAddressesPresent : 1;
      unsigned useSpecifiedTransportPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned usageSpecPresent : 1;
      unsigned supportedProtocolsPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
      unsigned modifiedSrcInfoPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225BandWidth bandWidth;
   H225CallModel callModel;
   H225TransportAddress destCallSignalAddress;
   ASN1USINT irrFrequency;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225AliasAddress destinationInfo;
   H225_SeqOfH225AliasAddress destExtraCallInfo;
   H225EndpointType destinationType;
   H225_SeqOfH225AliasAddress remoteExtensionAddress;
   H225_SeqOfH225Endpoint alternateEndpoints;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225TransportQOS transportQOS;
   ASN1BOOL willRespondToIRR;
   H225UUIEsRequested uuiesRequested;
   H225AdmissionConfirm_language language;
   H225AlternateTransportAddresses alternateTransportAddresses;
   H225UseSpecifiedTransport useSpecifiedTransport;
   H225CircuitInfo circuitInfo;
   H225_SeqOfH225RasUsageSpecification usageSpec;
   H225_SeqOfH225SupportedProtocols supportedProtocols;
   H225_SeqOfH225ServiceControlSession serviceControl;
   ASN1BOOL multipleCalls;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   H225_SeqOfH225AliasAddress modifiedSrcInfo;
   DList extElem1;
} H225AdmissionConfirm;

EXTERN int asn1PE_H225AdmissionConfirm (OOCTXT* pctxt, H225AdmissionConfirm* pvalue);

EXTERN int asn1PD_H225AdmissionConfirm (OOCTXT* pctxt, H225AdmissionConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225PartyNumber                                     */
/*                                                            */
/**************************************************************/

/* List of H225PartyNumber */
typedef DList H225_SeqOfH225PartyNumber;

EXTERN int asn1PE_H225_SeqOfH225PartyNumber (OOCTXT* pctxt, H225_SeqOfH225PartyNumber value);

EXTERN int asn1PD_H225_SeqOfH225PartyNumber (OOCTXT* pctxt, H225_SeqOfH225PartyNumber* pvalue);

/**************************************************************/
/*                                                            */
/*  AdmissionRejectReason                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225AdmissionRejectReason_calledPartyNotRegistered 1
#define T_H225AdmissionRejectReason_invalidPermission 2
#define T_H225AdmissionRejectReason_requestDenied 3
#define T_H225AdmissionRejectReason_undefinedReason 4
#define T_H225AdmissionRejectReason_callerNotRegistered 5
#define T_H225AdmissionRejectReason_routeCallToGatekeeper 6
#define T_H225AdmissionRejectReason_invalidEndpointIdentifier 7
#define T_H225AdmissionRejectReason_resourceUnavailable 8
#define T_H225AdmissionRejectReason_securityDenial 9
#define T_H225AdmissionRejectReason_qosControlNotSupported 10
#define T_H225AdmissionRejectReason_incompleteAddress 11
#define T_H225AdmissionRejectReason_aliasesInconsistent 12
#define T_H225AdmissionRejectReason_routeCallToSCN 13
#define T_H225AdmissionRejectReason_exceedsCallCapacity 14
#define T_H225AdmissionRejectReason_collectDestination 15
#define T_H225AdmissionRejectReason_collectPIN 16
#define T_H225AdmissionRejectReason_genericDataReason 17
#define T_H225AdmissionRejectReason_neededFeatureNotSupported 18
#define T_H225AdmissionRejectReason_securityErrors 19
#define T_H225AdmissionRejectReason_securityDHmismatch 20
#define T_H225AdmissionRejectReason_noRouteToDestination 21
#define T_H225AdmissionRejectReason_unallocatedNumber 22
#define T_H225AdmissionRejectReason_extElem1 23

typedef struct EXTERN H225AdmissionRejectReason {
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
      H225_SeqOfH225PartyNumber *routeCallToSCN;
      /* t = 14 */
      /* t = 15 */
      /* t = 16 */
      /* t = 17 */
      /* t = 18 */
      /* t = 19 */
      H225SecurityErrors2 *securityErrors;
      /* t = 20 */
      /* t = 21 */
      /* t = 22 */
      /* t = 23 */
      ASN1OpenType *extElem1;
   } u;
} H225AdmissionRejectReason;

EXTERN int asn1PE_H225AdmissionRejectReason (OOCTXT* pctxt, H225AdmissionRejectReason* pvalue);

EXTERN int asn1PD_H225AdmissionRejectReason (OOCTXT* pctxt, H225AdmissionRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  AdmissionReject                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225AdmissionReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned callSignalAddressPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225AdmissionRejectReason rejectReason;
   H225NonStandardParameter nonStandardData;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225_SeqOfH225TransportAddress callSignalAddress;
   H225ICV integrityCheckValue;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225AdmissionReject;

EXTERN int asn1PE_H225AdmissionReject (OOCTXT* pctxt, H225AdmissionReject* pvalue);

EXTERN int asn1PD_H225AdmissionReject (OOCTXT* pctxt, H225AdmissionReject* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225BandwidthDetails                                */
/*                                                            */
/**************************************************************/

/* List of H225BandwidthDetails */
typedef DList H225_SeqOfH225BandwidthDetails;

EXTERN int asn1PE_H225_SeqOfH225BandwidthDetails (OOCTXT* pctxt, H225_SeqOfH225BandwidthDetails value);

EXTERN int asn1PD_H225_SeqOfH225BandwidthDetails (OOCTXT* pctxt, H225_SeqOfH225BandwidthDetails* pvalue);

/**************************************************************/
/*                                                            */
/*  BandwidthRequest                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225BandwidthRequest {
   struct {
      unsigned callTypePresent : 1;
      unsigned nonStandardDataPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned answeredCallPresent : 1;
      unsigned callLinkagePresent : 1;
      unsigned capacityPresent : 1;
      unsigned usageInformationPresent : 1;
      unsigned bandwidthDetailsPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225EndpointIdentifier endpointIdentifier;
   H225ConferenceIdentifier conferenceID;
   H225CallReferenceValue callReferenceValue;
   H225CallType callType;
   H225BandWidth bandWidth;
   H225NonStandardParameter nonStandardData;
   H225CallIdentifier callIdentifier;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1BOOL answeredCall;
   H225CallLinkage callLinkage;
   H225CallCapacity capacity;
   H225RasUsageInformation usageInformation;
   H225_SeqOfH225BandwidthDetails bandwidthDetails;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225BandwidthRequest;

EXTERN int asn1PE_H225BandwidthRequest (OOCTXT* pctxt, H225BandwidthRequest* pvalue);

EXTERN int asn1PD_H225BandwidthRequest (OOCTXT* pctxt, H225BandwidthRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  BandwidthConfirm                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225BandwidthConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned capacityPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225BandWidth bandWidth;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225CallCapacity capacity;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225BandwidthConfirm;

EXTERN int asn1PE_H225BandwidthConfirm (OOCTXT* pctxt, H225BandwidthConfirm* pvalue);

EXTERN int asn1PD_H225BandwidthConfirm (OOCTXT* pctxt, H225BandwidthConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  BandRejectReason                                          */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225BandRejectReason_notBound 1
#define T_H225BandRejectReason_invalidConferenceID 2
#define T_H225BandRejectReason_invalidPermission 3
#define T_H225BandRejectReason_insufficientResources 4
#define T_H225BandRejectReason_invalidRevision 5
#define T_H225BandRejectReason_undefinedReason 6
#define T_H225BandRejectReason_securityDenial 7
#define T_H225BandRejectReason_securityError 8
#define T_H225BandRejectReason_extElem1 9

typedef struct EXTERN H225BandRejectReason {
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
      H225SecurityErrors2 *securityError;
      /* t = 9 */
      ASN1OpenType *extElem1;
   } u;
} H225BandRejectReason;

EXTERN int asn1PE_H225BandRejectReason (OOCTXT* pctxt, H225BandRejectReason* pvalue);

EXTERN int asn1PD_H225BandRejectReason (OOCTXT* pctxt, H225BandRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  BandwidthReject                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225BandwidthReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225BandRejectReason rejectReason;
   H225BandWidth allowedBandWidth;
   H225NonStandardParameter nonStandardData;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225BandwidthReject;

EXTERN int asn1PE_H225BandwidthReject (OOCTXT* pctxt, H225BandwidthReject* pvalue);

EXTERN int asn1PD_H225BandwidthReject (OOCTXT* pctxt, H225BandwidthReject* pvalue);

/**************************************************************/
/*                                                            */
/*  DisengageReason                                           */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225DisengageReason_forcedDrop 1
#define T_H225DisengageReason_normalDrop 2
#define T_H225DisengageReason_undefinedReason 3
#define T_H225DisengageReason_extElem1  4

typedef struct EXTERN H225DisengageReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      ASN1OpenType *extElem1;
   } u;
} H225DisengageReason;

EXTERN int asn1PE_H225DisengageReason (OOCTXT* pctxt, H225DisengageReason* pvalue);

EXTERN int asn1PD_H225DisengageReason (OOCTXT* pctxt, H225DisengageReason* pvalue);

/**************************************************************/
/*                                                            */
/*  DisengageRequest                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225DisengageRequest {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned answeredCallPresent : 1;
      unsigned callLinkagePresent : 1;
      unsigned capacityPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned usageInformationPresent : 1;
      unsigned terminationCausePresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225EndpointIdentifier endpointIdentifier;
   H225ConferenceIdentifier conferenceID;
   H225CallReferenceValue callReferenceValue;
   H225DisengageReason disengageReason;
   H225NonStandardParameter nonStandardData;
   H225CallIdentifier callIdentifier;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1BOOL answeredCall;
   H225CallLinkage callLinkage;
   H225CallCapacity capacity;
   H225CircuitInfo circuitInfo;
   H225RasUsageInformation usageInformation;
   H225CallTerminationCause terminationCause;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225DisengageRequest;

EXTERN int asn1PE_H225DisengageRequest (OOCTXT* pctxt, H225DisengageRequest* pvalue);

EXTERN int asn1PD_H225DisengageRequest (OOCTXT* pctxt, H225DisengageRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  DisengageConfirm                                          */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225DisengageConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned capacityPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned usageInformationPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225CallCapacity capacity;
   H225CircuitInfo circuitInfo;
   H225RasUsageInformation usageInformation;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225DisengageConfirm;

EXTERN int asn1PE_H225DisengageConfirm (OOCTXT* pctxt, H225DisengageConfirm* pvalue);

EXTERN int asn1PD_H225DisengageConfirm (OOCTXT* pctxt, H225DisengageConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  DisengageRejectReason                                     */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225DisengageRejectReason_notRegistered 1
#define T_H225DisengageRejectReason_requestToDropOther 2
#define T_H225DisengageRejectReason_securityDenial 3
#define T_H225DisengageRejectReason_securityError 4
#define T_H225DisengageRejectReason_extElem1 5

typedef struct EXTERN H225DisengageRejectReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      H225SecurityErrors2 *securityError;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225DisengageRejectReason;

EXTERN int asn1PE_H225DisengageRejectReason (OOCTXT* pctxt, H225DisengageRejectReason* pvalue);

EXTERN int asn1PD_H225DisengageRejectReason (OOCTXT* pctxt, H225DisengageRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  DisengageReject                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225DisengageReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225DisengageRejectReason rejectReason;
   H225NonStandardParameter nonStandardData;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225DisengageReject;

EXTERN int asn1PE_H225DisengageReject (OOCTXT* pctxt, H225DisengageReject* pvalue);

EXTERN int asn1PD_H225DisengageReject (OOCTXT* pctxt, H225DisengageReject* pvalue);

/**************************************************************/
/*                                                            */
/*  LocationRequest                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225LocationRequest {
   struct {
      unsigned endpointIdentifierPresent : 1;
      unsigned nonStandardDataPresent : 1;
      unsigned sourceInfoPresent : 1;
      unsigned canMapAliasPresent : 1;
      unsigned gatekeeperIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned desiredProtocolsPresent : 1;
      unsigned desiredTunnelledProtocolPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
      unsigned hopCountPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned bandWidthPresent : 1;
      unsigned sourceEndpointInfoPresent : 1;
      unsigned canMapSrcAliasPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225EndpointIdentifier endpointIdentifier;
   H225_SeqOfH225AliasAddress destinationInfo;
   H225NonStandardParameter nonStandardData;
   H225TransportAddress replyAddress;
   H225_SeqOfH225AliasAddress sourceInfo;
   ASN1BOOL canMapAlias;
   H225GatekeeperIdentifier gatekeeperIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225_SeqOfH225SupportedProtocols desiredProtocols;
   H225TunnelledProtocol desiredTunnelledProtocol;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   ASN1UINT8 hopCount;
   H225CircuitInfo circuitInfo;
   H225CallIdentifier callIdentifier;
   H225BandWidth bandWidth;
   H225_SeqOfH225AliasAddress sourceEndpointInfo;
   ASN1BOOL canMapSrcAlias;
   DList extElem1;
} H225LocationRequest;

EXTERN int asn1PE_H225LocationRequest (OOCTXT* pctxt, H225LocationRequest* pvalue);

EXTERN int asn1PD_H225LocationRequest (OOCTXT* pctxt, H225LocationRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  LocationConfirm                                           */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225LocationConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned destinationInfoPresent : 1;
      unsigned destExtraCallInfoPresent : 1;
      unsigned destinationTypePresent : 1;
      unsigned remoteExtensionAddressPresent : 1;
      unsigned alternateEndpointsPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned alternateTransportAddressesPresent : 1;
      unsigned supportedProtocolsPresent : 1;
      unsigned multipleCallsPresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
      unsigned circuitInfoPresent : 1;
      unsigned serviceControlPresent : 1;
      unsigned modifiedSrcInfoPresent : 1;
      unsigned bandWidthPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225TransportAddress callSignalAddress;
   H225TransportAddress rasAddress;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225AliasAddress destinationInfo;
   H225_SeqOfH225AliasAddress destExtraCallInfo;
   H225EndpointType destinationType;
   H225_SeqOfH225AliasAddress remoteExtensionAddress;
   H225_SeqOfH225Endpoint alternateEndpoints;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225AlternateTransportAddresses alternateTransportAddresses;
   H225_SeqOfH225SupportedProtocols supportedProtocols;
   ASN1BOOL multipleCalls;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   H225CircuitInfo circuitInfo;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225_SeqOfH225AliasAddress modifiedSrcInfo;
   H225BandWidth bandWidth;
   DList extElem1;
} H225LocationConfirm;

EXTERN int asn1PE_H225LocationConfirm (OOCTXT* pctxt, H225LocationConfirm* pvalue);

EXTERN int asn1PD_H225LocationConfirm (OOCTXT* pctxt, H225LocationConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  LocationRejectReason                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225LocationRejectReason_notRegistered 1
#define T_H225LocationRejectReason_invalidPermission 2
#define T_H225LocationRejectReason_requestDenied 3
#define T_H225LocationRejectReason_undefinedReason 4
#define T_H225LocationRejectReason_securityDenial 5
#define T_H225LocationRejectReason_aliasesInconsistent 6
#define T_H225LocationRejectReason_routeCalltoSCN 7
#define T_H225LocationRejectReason_resourceUnavailable 8
#define T_H225LocationRejectReason_genericDataReason 9
#define T_H225LocationRejectReason_neededFeatureNotSupported 10
#define T_H225LocationRejectReason_hopCountExceeded 11
#define T_H225LocationRejectReason_incompleteAddress 12
#define T_H225LocationRejectReason_securityError 13
#define T_H225LocationRejectReason_securityDHmismatch 14
#define T_H225LocationRejectReason_noRouteToDestination 15
#define T_H225LocationRejectReason_unallocatedNumber 16
#define T_H225LocationRejectReason_extElem1 17

typedef struct EXTERN H225LocationRejectReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      /* t = 5 */
      /* t = 6 */
      /* t = 7 */
      H225_SeqOfH225PartyNumber *routeCalltoSCN;
      /* t = 8 */
      /* t = 9 */
      /* t = 10 */
      /* t = 11 */
      /* t = 12 */
      /* t = 13 */
      H225SecurityErrors2 *securityError;
      /* t = 14 */
      /* t = 15 */
      /* t = 16 */
      /* t = 17 */
      ASN1OpenType *extElem1;
   } u;
} H225LocationRejectReason;

EXTERN int asn1PE_H225LocationRejectReason (OOCTXT* pctxt, H225LocationRejectReason* pvalue);

EXTERN int asn1PD_H225LocationRejectReason (OOCTXT* pctxt, H225LocationRejectReason* pvalue);

/**************************************************************/
/*                                                            */
/*  LocationReject                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225LocationReject {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
      unsigned serviceControlPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225LocationRejectReason rejectReason;
   H225NonStandardParameter nonStandardData;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   H225_SeqOfH225ServiceControlSession serviceControl;
   DList extElem1;
} H225LocationReject;

EXTERN int asn1PE_H225LocationReject (OOCTXT* pctxt, H225LocationReject* pvalue);

EXTERN int asn1PD_H225LocationReject (OOCTXT* pctxt, H225LocationReject* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequest                                               */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225InfoRequest {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned replyAddressPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned uuiesRequestedPresent : 1;
      unsigned callLinkagePresent : 1;
      unsigned usageInfoRequestedPresent : 1;
      unsigned segmentedResponseSupportedPresent : 1;
      unsigned nextSegmentRequestedPresent : 1;
      unsigned capacityInfoRequestedPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225CallReferenceValue callReferenceValue;
   H225NonStandardParameter nonStandardData;
   H225TransportAddress replyAddress;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225UUIEsRequested uuiesRequested;
   H225CallLinkage callLinkage;
   H225RasUsageInfoTypes usageInfoRequested;
   ASN1USINT nextSegmentRequested;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225InfoRequest;

EXTERN int asn1PE_H225InfoRequest (OOCTXT* pctxt, H225InfoRequest* pvalue);

EXTERN int asn1PD_H225InfoRequest (OOCTXT* pctxt, H225InfoRequest* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225RTPSession                                      */
/*                                                            */
/**************************************************************/

/* List of H225RTPSession */
typedef DList H225_SeqOfH225RTPSession;

EXTERN int asn1PE_H225_SeqOfH225RTPSession (OOCTXT* pctxt, H225_SeqOfH225RTPSession value);

EXTERN int asn1PD_H225_SeqOfH225RTPSession (OOCTXT* pctxt, H225_SeqOfH225RTPSession* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225TransportChannelInfo                            */
/*                                                            */
/**************************************************************/

/* List of H225TransportChannelInfo */
typedef DList H225_SeqOfH225TransportChannelInfo;

EXTERN int asn1PE_H225_SeqOfH225TransportChannelInfo (OOCTXT* pctxt, H225_SeqOfH225TransportChannelInfo value);

EXTERN int asn1PD_H225_SeqOfH225TransportChannelInfo (OOCTXT* pctxt, H225_SeqOfH225TransportChannelInfo* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225ConferenceIdentifier                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225_SeqOfH225ConferenceIdentifier {
   ASN1UINT n;
   H225ConferenceIdentifier *elem;
} H225_SeqOfH225ConferenceIdentifier;

EXTERN int asn1PE_H225_SeqOfH225ConferenceIdentifier (OOCTXT* pctxt, H225_SeqOfH225ConferenceIdentifier* pvalue);

EXTERN int asn1PD_H225_SeqOfH225ConferenceIdentifier (OOCTXT* pctxt, H225_SeqOfH225ConferenceIdentifier* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestResponse_perCallInfo_element_pdu_element       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225InfoRequestResponse_perCallInfo_element_pdu_element {
   H225H323_UU_PDU h323pdu;
   ASN1BOOL sent;
} H225InfoRequestResponse_perCallInfo_element_pdu_element;

EXTERN int asn1PE_H225InfoRequestResponse_perCallInfo_element_pdu_element (OOCTXT* pctxt, H225InfoRequestResponse_perCallInfo_element_pdu_element* pvalue);

EXTERN int asn1PD_H225InfoRequestResponse_perCallInfo_element_pdu_element (OOCTXT* pctxt, H225InfoRequestResponse_perCallInfo_element_pdu_element* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_el  */
/*                                                            */
/**************************************************************/

/* List of H225InfoRequestResponse_perCallInfo_element_pdu_element */
typedef DList H225_SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_element;

EXTERN int asn1PE_H225_SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_element (OOCTXT* pctxt, H225_SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_element value);

EXTERN int asn1PD_H225_SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_element (OOCTXT* pctxt, H225_SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_element* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestResponse_perCallInfo_element                   */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225InfoRequestResponse_perCallInfo_element {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned originatorPresent : 1;
      unsigned audioPresent : 1;
      unsigned videoPresent : 1;
      unsigned dataPresent : 1;
      unsigned callIdentifierPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned substituteConfIDsPresent : 1;
      unsigned pduPresent : 1;
      unsigned callLinkagePresent : 1;
      unsigned usageInformationPresent : 1;
      unsigned circuitInfoPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225CallReferenceValue callReferenceValue;
   H225ConferenceIdentifier conferenceID;
   ASN1BOOL originator;
   H225_SeqOfH225RTPSession audio;
   H225_SeqOfH225RTPSession video;
   H225_SeqOfH225TransportChannelInfo data;
   H225TransportChannelInfo h245;
   H225TransportChannelInfo callSignaling;
   H225CallType callType;
   H225BandWidth bandWidth;
   H225CallModel callModel;
   H225CallIdentifier callIdentifier;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225_SeqOfH225ConferenceIdentifier substituteConfIDs;
   H225_SeqOfH225InfoRequestResponse_perCallInfo_element_pdu_element pdu;
   H225CallLinkage callLinkage;
   H225RasUsageInformation usageInformation;
   H225CircuitInfo circuitInfo;
   DList extElem1;
} H225InfoRequestResponse_perCallInfo_element;

EXTERN int asn1PE_H225InfoRequestResponse_perCallInfo_element (OOCTXT* pctxt, H225InfoRequestResponse_perCallInfo_element* pvalue);

EXTERN int asn1PD_H225InfoRequestResponse_perCallInfo_element (OOCTXT* pctxt, H225InfoRequestResponse_perCallInfo_element* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225InfoRequestResponse_perCallInfo_element         */
/*                                                            */
/**************************************************************/

/* List of H225InfoRequestResponse_perCallInfo_element */
typedef DList H225_SeqOfH225InfoRequestResponse_perCallInfo_element;

EXTERN int asn1PE_H225_SeqOfH225InfoRequestResponse_perCallInfo_element (OOCTXT* pctxt, H225_SeqOfH225InfoRequestResponse_perCallInfo_element value);

EXTERN int asn1PD_H225_SeqOfH225InfoRequestResponse_perCallInfo_element (OOCTXT* pctxt, H225_SeqOfH225InfoRequestResponse_perCallInfo_element* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestResponseStatus                                 */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225InfoRequestResponseStatus_complete 1
#define T_H225InfoRequestResponseStatus_incomplete 2
#define T_H225InfoRequestResponseStatus_segment 3
#define T_H225InfoRequestResponseStatus_invalidCall 4
#define T_H225InfoRequestResponseStatus_extElem1 5

typedef struct EXTERN H225InfoRequestResponseStatus {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      ASN1USINT segment;
      /* t = 4 */
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225InfoRequestResponseStatus;

EXTERN int asn1PE_H225InfoRequestResponseStatus (OOCTXT* pctxt, H225InfoRequestResponseStatus* pvalue);

EXTERN int asn1PD_H225InfoRequestResponseStatus (OOCTXT* pctxt, H225InfoRequestResponseStatus* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestResponse                                       */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225InfoRequestResponse {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned endpointAliasPresent : 1;
      unsigned perCallInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned needResponsePresent : 1;
      unsigned capacityPresent : 1;
      unsigned irrStatusPresent : 1;
      unsigned unsolicitedPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225NonStandardParameter nonStandardData;
   H225RequestSeqNum requestSeqNum;
   H225EndpointType endpointType;
   H225EndpointIdentifier endpointIdentifier;
   H225TransportAddress rasAddress;
   H225_SeqOfH225TransportAddress callSignalAddress;
   H225_SeqOfH225AliasAddress endpointAlias;
   H225_SeqOfH225InfoRequestResponse_perCallInfo_element perCallInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1BOOL needResponse;
   H225CallCapacity capacity;
   H225InfoRequestResponseStatus irrStatus;
   ASN1BOOL unsolicited;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225InfoRequestResponse;

EXTERN int asn1PE_H225InfoRequestResponse (OOCTXT* pctxt, H225InfoRequestResponse* pvalue);

EXTERN int asn1PD_H225InfoRequestResponse (OOCTXT* pctxt, H225InfoRequestResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  NonStandardMessage                                        */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225NonStandardMessage {
   struct {
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225NonStandardMessage;

EXTERN int asn1PE_H225NonStandardMessage (OOCTXT* pctxt, H225NonStandardMessage* pvalue);

EXTERN int asn1PD_H225NonStandardMessage (OOCTXT* pctxt, H225NonStandardMessage* pvalue);

/**************************************************************/
/*                                                            */
/*  UnknownMessageResponse                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225UnknownMessageResponse {
   struct {
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned messageNotUnderstoodPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1DynOctStr messageNotUnderstood;
   DList extElem1;
} H225UnknownMessageResponse;

EXTERN int asn1PE_H225UnknownMessageResponse (OOCTXT* pctxt, H225UnknownMessageResponse* pvalue);

EXTERN int asn1PD_H225UnknownMessageResponse (OOCTXT* pctxt, H225UnknownMessageResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  RequestInProgress                                         */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225RequestInProgress {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   ASN1USINT delay;
   DList extElem1;
} H225RequestInProgress;

EXTERN int asn1PE_H225RequestInProgress (OOCTXT* pctxt, H225RequestInProgress* pvalue);

EXTERN int asn1PD_H225RequestInProgress (OOCTXT* pctxt, H225RequestInProgress* pvalue);

/**************************************************************/
/*                                                            */
/*  ResourcesAvailableIndicate                                */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ResourcesAvailableIndicate {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned capacityPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225EndpointIdentifier endpointIdentifier;
   H225_SeqOfH225SupportedProtocols protocols;
   ASN1BOOL almostOutOfResources;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225CallCapacity capacity;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225ResourcesAvailableIndicate;

EXTERN int asn1PE_H225ResourcesAvailableIndicate (OOCTXT* pctxt, H225ResourcesAvailableIndicate* pvalue);

EXTERN int asn1PD_H225ResourcesAvailableIndicate (OOCTXT* pctxt, H225ResourcesAvailableIndicate* pvalue);

/**************************************************************/
/*                                                            */
/*  ResourcesAvailableConfirm                                 */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ResourcesAvailableConfirm {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ProtocolIdentifier protocolIdentifier;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225ResourcesAvailableConfirm;

EXTERN int asn1PE_H225ResourcesAvailableConfirm (OOCTXT* pctxt, H225ResourcesAvailableConfirm* pvalue);

EXTERN int asn1PD_H225ResourcesAvailableConfirm (OOCTXT* pctxt, H225ResourcesAvailableConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestAck                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225InfoRequestAck {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   DList extElem1;
} H225InfoRequestAck;

EXTERN int asn1PE_H225InfoRequestAck (OOCTXT* pctxt, H225InfoRequestAck* pvalue);

EXTERN int asn1PD_H225InfoRequestAck (OOCTXT* pctxt, H225InfoRequestAck* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestNakReason                                      */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225InfoRequestNakReason_notRegistered 1
#define T_H225InfoRequestNakReason_securityDenial 2
#define T_H225InfoRequestNakReason_undefinedReason 3
#define T_H225InfoRequestNakReason_securityError 4
#define T_H225InfoRequestNakReason_extElem1 5

typedef struct EXTERN H225InfoRequestNakReason {
   int t;
   union {
      /* t = 1 */
      /* t = 2 */
      /* t = 3 */
      /* t = 4 */
      H225SecurityErrors2 *securityError;
      /* t = 5 */
      ASN1OpenType *extElem1;
   } u;
} H225InfoRequestNakReason;

EXTERN int asn1PE_H225InfoRequestNakReason (OOCTXT* pctxt, H225InfoRequestNakReason* pvalue);

EXTERN int asn1PD_H225InfoRequestNakReason (OOCTXT* pctxt, H225InfoRequestNakReason* pvalue);

/**************************************************************/
/*                                                            */
/*  InfoRequestNak                                            */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225InfoRequestNak {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned altGKInfoPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225InfoRequestNakReason nakReason;
   H225AltGKInfo altGKInfo;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   DList extElem1;
} H225InfoRequestNak;

EXTERN int asn1PE_H225InfoRequestNak (OOCTXT* pctxt, H225InfoRequestNak* pvalue);

EXTERN int asn1PD_H225InfoRequestNak (OOCTXT* pctxt, H225InfoRequestNak* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlIndication_callSpecific                     */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ServiceControlIndication_callSpecific {
   H225CallIdentifier callIdentifier;
   H225ConferenceIdentifier conferenceID;
   ASN1BOOL answeredCall;
   DList extElem1;
} H225ServiceControlIndication_callSpecific;

EXTERN int asn1PE_H225ServiceControlIndication_callSpecific (OOCTXT* pctxt, H225ServiceControlIndication_callSpecific* pvalue);

EXTERN int asn1PD_H225ServiceControlIndication_callSpecific (OOCTXT* pctxt, H225ServiceControlIndication_callSpecific* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlIndication                                  */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ServiceControlIndication {
   struct {
      unsigned nonStandardDataPresent : 1;
      unsigned endpointIdentifierPresent : 1;
      unsigned callSpecificPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ServiceControlSession serviceControl;
   H225EndpointIdentifier endpointIdentifier;
   H225ServiceControlIndication_callSpecific callSpecific;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225ServiceControlIndication;

EXTERN int asn1PE_H225ServiceControlIndication (OOCTXT* pctxt, H225ServiceControlIndication* pvalue);

EXTERN int asn1PD_H225ServiceControlIndication (OOCTXT* pctxt, H225ServiceControlIndication* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlResponse_result                             */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225ServiceControlResponse_result_started 1
#define T_H225ServiceControlResponse_result_failed 2
#define T_H225ServiceControlResponse_result_stopped 3
#define T_H225ServiceControlResponse_result_notAvailable 4
#define T_H225ServiceControlResponse_result_neededFeatureNotSupported 5
#define T_H225ServiceControlResponse_result_extElem1 6

typedef struct EXTERN H225ServiceControlResponse_result {
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
} H225ServiceControlResponse_result;

EXTERN int asn1PE_H225ServiceControlResponse_result (OOCTXT* pctxt, H225ServiceControlResponse_result* pvalue);

EXTERN int asn1PD_H225ServiceControlResponse_result (OOCTXT* pctxt, H225ServiceControlResponse_result* pvalue);

/**************************************************************/
/*                                                            */
/*  ServiceControlResponse                                    */
/*                                                            */
/**************************************************************/

typedef struct EXTERN H225ServiceControlResponse {
   struct {
      unsigned resultPresent : 1;
      unsigned nonStandardDataPresent : 1;
      unsigned tokensPresent : 1;
      unsigned cryptoTokensPresent : 1;
      unsigned integrityCheckValuePresent : 1;
      unsigned featureSetPresent : 1;
      unsigned genericDataPresent : 1;
   } m;
   H225RequestSeqNum requestSeqNum;
   H225ServiceControlResponse_result result;
   H225NonStandardParameter nonStandardData;
   H225_SeqOfH225ClearToken tokens;
   H225_SeqOfH225CryptoH323Token cryptoTokens;
   H225ICV integrityCheckValue;
   H225FeatureSet featureSet;
   H225_SeqOfH225GenericData genericData;
   DList extElem1;
} H225ServiceControlResponse;

EXTERN int asn1PE_H225ServiceControlResponse (OOCTXT* pctxt, H225ServiceControlResponse* pvalue);

EXTERN int asn1PD_H225ServiceControlResponse (OOCTXT* pctxt, H225ServiceControlResponse* pvalue);

/**************************************************************/
/*                                                            */
/*  _SeqOfH225AdmissionConfirm                                */
/*                                                            */
/**************************************************************/

/* List of H225AdmissionConfirm */
typedef DList H225_SeqOfH225AdmissionConfirm;

EXTERN int asn1PE_H225_SeqOfH225AdmissionConfirm (OOCTXT* pctxt, H225_SeqOfH225AdmissionConfirm value);

EXTERN int asn1PD_H225_SeqOfH225AdmissionConfirm (OOCTXT* pctxt, H225_SeqOfH225AdmissionConfirm* pvalue);

/**************************************************************/
/*                                                            */
/*  RasMessage                                                */
/*                                                            */
/**************************************************************/

/* Choice tag constants */

#define T_H225RasMessage_gatekeeperRequest 1
#define T_H225RasMessage_gatekeeperConfirm 2
#define T_H225RasMessage_gatekeeperReject 3
#define T_H225RasMessage_registrationRequest 4
#define T_H225RasMessage_registrationConfirm 5
#define T_H225RasMessage_registrationReject 6
#define T_H225RasMessage_unregistrationRequest 7
#define T_H225RasMessage_unregistrationConfirm 8
#define T_H225RasMessage_unregistrationReject 9
#define T_H225RasMessage_admissionRequest 10
#define T_H225RasMessage_admissionConfirm 11
#define T_H225RasMessage_admissionReject 12
#define T_H225RasMessage_bandwidthRequest 13
#define T_H225RasMessage_bandwidthConfirm 14
#define T_H225RasMessage_bandwidthReject 15
#define T_H225RasMessage_disengageRequest 16
#define T_H225RasMessage_disengageConfirm 17
#define T_H225RasMessage_disengageReject 18
#define T_H225RasMessage_locationRequest 19
#define T_H225RasMessage_locationConfirm 20
#define T_H225RasMessage_locationReject 21
#define T_H225RasMessage_infoRequest    22
#define T_H225RasMessage_infoRequestResponse 23
#define T_H225RasMessage_nonStandardMessage 24
#define T_H225RasMessage_unknownMessageResponse 25
#define T_H225RasMessage_requestInProgress 26
#define T_H225RasMessage_resourcesAvailableIndicate 27
#define T_H225RasMessage_resourcesAvailableConfirm 28
#define T_H225RasMessage_infoRequestAck 29
#define T_H225RasMessage_infoRequestNak 30
#define T_H225RasMessage_serviceControlIndication 31
#define T_H225RasMessage_serviceControlResponse 32
#define T_H225RasMessage_admissionConfirmSequence 33
#define T_H225RasMessage_extElem1       34

typedef struct EXTERN H225RasMessage {
   int t;
   union {
      /* t = 1 */
      H225GatekeeperRequest *gatekeeperRequest;
      /* t = 2 */
      H225GatekeeperConfirm *gatekeeperConfirm;
      /* t = 3 */
      H225GatekeeperReject *gatekeeperReject;
      /* t = 4 */
      H225RegistrationRequest *registrationRequest;
      /* t = 5 */
      H225RegistrationConfirm *registrationConfirm;
      /* t = 6 */
      H225RegistrationReject *registrationReject;
      /* t = 7 */
      H225UnregistrationRequest *unregistrationRequest;
      /* t = 8 */
      H225UnregistrationConfirm *unregistrationConfirm;
      /* t = 9 */
      H225UnregistrationReject *unregistrationReject;
      /* t = 10 */
      H225AdmissionRequest *admissionRequest;
      /* t = 11 */
      H225AdmissionConfirm *admissionConfirm;
      /* t = 12 */
      H225AdmissionReject *admissionReject;
      /* t = 13 */
      H225BandwidthRequest *bandwidthRequest;
      /* t = 14 */
      H225BandwidthConfirm *bandwidthConfirm;
      /* t = 15 */
      H225BandwidthReject *bandwidthReject;
      /* t = 16 */
      H225DisengageRequest *disengageRequest;
      /* t = 17 */
      H225DisengageConfirm *disengageConfirm;
      /* t = 18 */
      H225DisengageReject *disengageReject;
      /* t = 19 */
      H225LocationRequest *locationRequest;
      /* t = 20 */
      H225LocationConfirm *locationConfirm;
      /* t = 21 */
      H225LocationReject *locationReject;
      /* t = 22 */
      H225InfoRequest *infoRequest;
      /* t = 23 */
      H225InfoRequestResponse *infoRequestResponse;
      /* t = 24 */
      H225NonStandardMessage *nonStandardMessage;
      /* t = 25 */
      H225UnknownMessageResponse *unknownMessageResponse;
      /* t = 26 */
      H225RequestInProgress *requestInProgress;
      /* t = 27 */
      H225ResourcesAvailableIndicate *resourcesAvailableIndicate;
      /* t = 28 */
      H225ResourcesAvailableConfirm *resourcesAvailableConfirm;
      /* t = 29 */
      H225InfoRequestAck *infoRequestAck;
      /* t = 30 */
      H225InfoRequestNak *infoRequestNak;
      /* t = 31 */
      H225ServiceControlIndication *serviceControlIndication;
      /* t = 32 */
      H225ServiceControlResponse *serviceControlResponse;
      /* t = 33 */
      H225_SeqOfH225AdmissionConfirm *admissionConfirmSequence;
      /* t = 34 */
      ASN1OpenType *extElem1;
   } u;
} H225RasMessage;

EXTERN int asn1PE_H225RasMessage (OOCTXT* pctxt, H225RasMessage* pvalue);

EXTERN int asn1PD_H225RasMessage (OOCTXT* pctxt, H225RasMessage* pvalue);

#ifdef __cplusplus
}
#endif

#endif
