/**
 * \file
 * \brief Public interfaces to getdns, include in your application to use getdns API.
 *
 * This source was taken from the original pseudo-implementation by
 * Paul Hoffman.
 */

/*
 * Copyright (c) 2013, NLNet Labs, Verisign, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the names of the copyright holders nor the
 *   names of its contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Verisign, Inc. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef GETDNS_H
#define GETDNS_H

#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GETDNS_COMPILATION_COMMENT "getdns 1.4.2 configured on 2019-01-02T02:07:29Z for the December 2015 version of the API"

/**
 * \defgroup functions Functions
 * \defgroup valuesandtexts Values and texts
 */

/** \addtogroup valuesandtexts Values and texts
 *  @{
 */

/**
 * \defgroup returntypestext Return values and texts
 * @{
 */
typedef enum getdns_return_t {
	GETDNS_RETURN_GOOD = 0,
	GETDNS_RETURN_GENERIC_ERROR = 1,
	GETDNS_RETURN_BAD_DOMAIN_NAME = 300,
	GETDNS_RETURN_BAD_CONTEXT = 301,
	GETDNS_RETURN_CONTEXT_UPDATE_FAIL = 302,
	GETDNS_RETURN_UNKNOWN_TRANSACTION = 303,
	GETDNS_RETURN_NO_SUCH_LIST_ITEM = 304,
	GETDNS_RETURN_NO_SUCH_DICT_NAME = 305,
	GETDNS_RETURN_WRONG_TYPE_REQUESTED = 306,
	GETDNS_RETURN_NO_SUCH_EXTENSION = 307,
	GETDNS_RETURN_EXTENSION_MISFORMAT = 308,
	GETDNS_RETURN_DNSSEC_WITH_STUB_DISALLOWED = 309,
	GETDNS_RETURN_MEMORY_ERROR = 310,
	GETDNS_RETURN_INVALID_PARAMETER = 311,
	GETDNS_RETURN_NOT_IMPLEMENTED = 312
} getdns_return_t;


#define GETDNS_RETURN_GOOD_TEXT "Good"
#define GETDNS_RETURN_GENERIC_ERROR_TEXT "Generic error"
#define GETDNS_RETURN_BAD_DOMAIN_NAME_TEXT "Badly-formed domain name in first argument"
#define GETDNS_RETURN_BAD_CONTEXT_TEXT "The context has internal deficiencies"
#define GETDNS_RETURN_CONTEXT_UPDATE_FAIL_TEXT "Did not update the context"
#define GETDNS_RETURN_UNKNOWN_TRANSACTION_TEXT "An attempt was made to cancel a callback with a transaction_id that is not recognized"
#define GETDNS_RETURN_NO_SUCH_LIST_ITEM_TEXT "A helper function for lists had an index argument that was too high."
#define GETDNS_RETURN_NO_SUCH_DICT_NAME_TEXT "A helper function for dicts had a name argument that for a name that is not in the dict."
#define GETDNS_RETURN_WRONG_TYPE_REQUESTED_TEXT "A helper function was supposed to return a certain type for an item, but the wrong type was given."
#define GETDNS_RETURN_NO_SUCH_EXTENSION_TEXT "A name in the extensions dict is not a valid extension."
#define GETDNS_RETURN_EXTENSION_MISFORMAT_TEXT "One or more of the extensions have a bad format."
#define GETDNS_RETURN_DNSSEC_WITH_STUB_DISALLOWED_TEXT "A query was made with a context that is using stub resolution and a DNSSEC extension specified."
#define GETDNS_RETURN_MEMORY_ERROR_TEXT "Unable to allocate the memory required."
#define GETDNS_RETURN_INVALID_PARAMETER_TEXT "A required parameter had an invalid value."
#define GETDNS_RETURN_NOT_IMPLEMENTED_TEXT "The library did not have the requested API feature implemented."
/** @}
 */


/**
 * \defgroup dnssecvalues DNSSEC values and texts
 * @{
 */
#define GETDNS_DNSSEC_SECURE 400
#define GETDNS_DNSSEC_SECURE_TEXT "The record was determined to be secure in DNSSEC"
#define GETDNS_DNSSEC_BOGUS 401
#define GETDNS_DNSSEC_BOGUS_TEXT "The record was determined to be bogus in DNSSEC"
#define GETDNS_DNSSEC_INDETERMINATE 402
#define GETDNS_DNSSEC_INDETERMINATE_TEXT "The record was not determined to be any state in DNSSEC"
#define GETDNS_DNSSEC_INSECURE 403
#define GETDNS_DNSSEC_INSECURE_TEXT "The record was determined to be insecure in DNSSEC"
#define GETDNS_DNSSEC_NOT_PERFORMED 404
#define GETDNS_DNSSEC_NOT_PERFORMED_TEXT "DNSSEC validation was not performed (only used for debugging)"
/** @}
 */


/**
 * \defgroup namespacetypestext Namespace types and texts
 * @{
 */

typedef enum getdns_namespace_t {
	GETDNS_NAMESPACE_DNS = 500,
	GETDNS_NAMESPACE_LOCALNAMES = 501,
	GETDNS_NAMESPACE_NETBIOS = 502,
	GETDNS_NAMESPACE_MDNS = 503,
	GETDNS_NAMESPACE_NIS = 504
} getdns_namespace_t;


#define GETDNS_NAMESPACE_DNS_TEXT "See getdns_context_set_namespaces()"
#define GETDNS_NAMESPACE_LOCALNAMES_TEXT "See getdns_context_set_namespaces()"
#define GETDNS_NAMESPACE_NETBIOS_TEXT "See getdns_context_set_namespaces()"
#define GETDNS_NAMESPACE_MDNS_TEXT "See getdns_context_set_namespaces()"
#define GETDNS_NAMESPACE_NIS_TEXT "See getdns_context_set_namespaces()"
/** @}
 */


/**
 * \defgroup resolutiontypestext Resolution types and texts
 * @{
 */
typedef enum getdns_resolution_t {
	GETDNS_RESOLUTION_STUB = 520,
	GETDNS_RESOLUTION_RECURSING = 521
} getdns_resolution_t;


#define GETDNS_RESOLUTION_STUB_TEXT "See getdns_context_set_resolution_type()"
#define GETDNS_RESOLUTION_RECURSING_TEXT "See getdns_context_set_resolution_type()"
/** @}
 */


/**
 * \defgroup redirectpoliciestext Redirect policies and texts
 * @{
 */
typedef enum getdns_redirects_t {
	GETDNS_REDIRECTS_FOLLOW = 530,
	GETDNS_REDIRECTS_DO_NOT_FOLLOW = 531
} getdns_redirects_t;


#define GETDNS_REDIRECTS_FOLLOW_TEXT "See getdns_context_set_follow_redirects()"
#define GETDNS_REDIRECTS_DO_NOT_FOLLOW_TEXT "See getdns_context_set_follow_redirects()"
/** @}
 */


/**
 * \defgroup transporttypestext Transport arrangements and texts
 * @{
 */
typedef enum getdns_transport_t {
	GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP = 540,
	GETDNS_TRANSPORT_UDP_ONLY = 541,
	GETDNS_TRANSPORT_TCP_ONLY = 542,
	GETDNS_TRANSPORT_TCP_ONLY_KEEP_CONNECTIONS_OPEN = 543
} getdns_transport_t;

#define GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP_TEXT "See getdns_context_set_dns_transport()"
#define GETDNS_TRANSPORT_UDP_ONLY_TEXT "See getdns_context_set_dns_transport()"
#define GETDNS_TRANSPORT_TCP_ONLY_TEXT "See getdns_context_set_dns_transport()"
#define GETDNS_TRANSPORT_TCP_ONLY_KEEP_CONNECTIONS_OPEN_TEXT "See getdns_context_set_dns_transport()"
/** @}
*/


/**
 * \defgroup transportlisttypestext Transport list values and tests
 * @{
 */
/* Base transports for use in transport list */
typedef enum getdns_transport_list_t {
	GETDNS_TRANSPORT_UDP = 1200,
	GETDNS_TRANSPORT_TCP = 1201,
	GETDNS_TRANSPORT_TLS = 1202,
} getdns_transport_list_t;


#define GETDNS_TRANSPORT_UDP_TEXT "See getdns_context_set_dns_transport_list()"
#define GETDNS_TRANSPORT_TCP_TEXT "See getdns_context_set_dns_transport_list()"
#define GETDNS_TRANSPORT_TLS_TEXT "See getdns_context_set_dns_transport_list()"
/** @}
 */


/**
 * \defgroup suffixappendtypestext Suffix appending values and texts
 * @{
 */
typedef enum getdns_append_name_t {
	GETDNS_APPEND_NAME_ALWAYS = 550,
	GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE = 551,
	GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE = 552,
	GETDNS_APPEND_NAME_NEVER = 553
} getdns_append_name_t;


#define GETDNS_APPEND_NAME_ALWAYS_TEXT "See getdns_context_set_append_name()"
#define GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE_TEXT "See getdns_context_set_append_name()"
#define GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE_TEXT "See getdns_context_set_append_name()"
#define GETDNS_APPEND_NAME_NEVER_TEXT "See getdns_context_set_append_name()"
/** @}
 */


/**
* \defgroup contextcodetypestext Context code values and texts
* @{
*/
/* Context codes */
typedef enum getdns_context_code_t {
	GETDNS_CONTEXT_CODE_NAMESPACES = 600,
	GETDNS_CONTEXT_CODE_RESOLUTION_TYPE = 601,
	GETDNS_CONTEXT_CODE_FOLLOW_REDIRECTS = 602,
	GETDNS_CONTEXT_CODE_UPSTREAM_RECURSIVE_SERVERS = 603,
	GETDNS_CONTEXT_CODE_DNS_ROOT_SERVERS = 604,
	GETDNS_CONTEXT_CODE_DNS_TRANSPORT = 605,
	GETDNS_CONTEXT_CODE_LIMIT_OUTSTANDING_QUERIES = 606,
	GETDNS_CONTEXT_CODE_APPEND_NAME = 607,
	GETDNS_CONTEXT_CODE_SUFFIX = 608,
	GETDNS_CONTEXT_CODE_DNSSEC_TRUST_ANCHORS = 609,
	GETDNS_CONTEXT_CODE_EDNS_MAXIMUM_UDP_PAYLOAD_SIZE = 610,
	GETDNS_CONTEXT_CODE_EDNS_EXTENDED_RCODE = 611,
	GETDNS_CONTEXT_CODE_EDNS_VERSION = 612,
	GETDNS_CONTEXT_CODE_EDNS_DO_BIT = 613,
	GETDNS_CONTEXT_CODE_DNSSEC_ALLOWED_SKEW = 614,
	GETDNS_CONTEXT_CODE_MEMORY_FUNCTIONS = 615,
	GETDNS_CONTEXT_CODE_TIMEOUT = 616,
	GETDNS_CONTEXT_CODE_IDLE_TIMEOUT = 617
} getdns_context_code_t;


#define GETDNS_CONTEXT_CODE_NAMESPACES_TEXT "Change related to getdns_context_set_namespaces"
#define GETDNS_CONTEXT_CODE_RESOLUTION_TYPE_TEXT "Change related to getdns_context_set_resolution_type"
#define GETDNS_CONTEXT_CODE_FOLLOW_REDIRECTS_TEXT "Change related to getdns_context_set_follow_redirects"
#define GETDNS_CONTEXT_CODE_UPSTREAM_RECURSIVE_SERVERS_TEXT "Change related to getdns_context_set_upstream_recursive_servers"
#define GETDNS_CONTEXT_CODE_DNS_ROOT_SERVERS_TEXT "Change related to getdns_context_set_dns_root_servers"
#define GETDNS_CONTEXT_CODE_DNS_TRANSPORT_TEXT "Change related to getdns_context_set_dns_transport"
#define GETDNS_CONTEXT_CODE_LIMIT_OUTSTANDING_QUERIES_TEXT "Change related to getdns_context_set_limit_outstanding_queries"
#define GETDNS_CONTEXT_CODE_APPEND_NAME_TEXT "Change related to getdns_context_set_append_name"
#define GETDNS_CONTEXT_CODE_SUFFIX_TEXT "Change related to getdns_context_set_suffix"
#define GETDNS_CONTEXT_CODE_DNSSEC_TRUST_ANCHORS_TEXT "Change related to getdns_context_set_dnssec_trust_anchors"
#define GETDNS_CONTEXT_CODE_EDNS_MAXIMUM_UDP_PAYLOAD_SIZE_TEXT "Change related to getdns_context_set_edns_maximum_udp_payload_size"
#define GETDNS_CONTEXT_CODE_EDNS_EXTENDED_RCODE_TEXT "Change related to getdns_context_set_edns_extended_rcode"
#define GETDNS_CONTEXT_CODE_EDNS_VERSION_TEXT "Change related to getdns_context_set_edns_version"
#define GETDNS_CONTEXT_CODE_EDNS_DO_BIT_TEXT "Change related to getdns_context_set_edns_do_bit"
#define GETDNS_CONTEXT_CODE_DNSSEC_ALLOWED_SKEW_TEXT "Change related to getdns_context_set_dnssec_allowed_skew"
#define GETDNS_CONTEXT_CODE_MEMORY_FUNCTIONS_TEXT "Change related to getdns_context_set_memory_functions"
#define GETDNS_CONTEXT_CODE_TIMEOUT_TEXT "Change related to getdns_context_set_timeout"
#define GETDNS_CONTEXT_CODE_IDLE_TIMEOUT_TEXT "Change related to getdns_context_set_idle_timeout"
/** @}
 */


/**
 * \defgroup callbacktype Callback types and texts
 * @{
 */
typedef enum getdns_callback_type_t {
	GETDNS_CALLBACK_COMPLETE = 700,
	GETDNS_CALLBACK_CANCEL = 701,
	GETDNS_CALLBACK_TIMEOUT = 702,
	GETDNS_CALLBACK_ERROR = 703
} getdns_callback_type_t;

#define GETDNS_CALLBACK_COMPLETE_TEXT "The response has the requested data in it"
#define GETDNS_CALLBACK_CANCEL_TEXT "The calling program cancelled the callback; response is NULL"
#define GETDNS_CALLBACK_TIMEOUT_TEXT "The requested action timed out; response is filled in with empty structures"
#define GETDNS_CALLBACK_ERROR_TEXT "The requested action had an error; response is NULL"
/** @}
 */


/**
 * \defgroup nametype Types of name services and texts
 * @{
 */
#define GETDNS_NAMETYPE_DNS 800
#define GETDNS_NAMETYPE_DNS_TEXT "Normal DNS (RFC 1035)"
#define GETDNS_NAMETYPE_WINS 801
#define GETDNS_NAMETYPE_WINS_TEXT "The WINS name service (some reference needed)"
/** @}
 */


/**
 * \defgroup respstatus Status Codes for responses and texts
 * @{
 */
#define GETDNS_RESPSTATUS_GOOD 900
#define GETDNS_RESPSTATUS_GOOD_TEXT "At least one response was returned"
#define GETDNS_RESPSTATUS_NO_NAME 901
#define GETDNS_RESPSTATUS_NO_NAME_TEXT "Queries for the name yielded all negative responses"
#define GETDNS_RESPSTATUS_ALL_TIMEOUT 902
#define GETDNS_RESPSTATUS_ALL_TIMEOUT_TEXT "All queries for the name timed out"
#define GETDNS_RESPSTATUS_NO_SECURE_ANSWERS 903
#define GETDNS_RESPSTATUS_NO_SECURE_ANSWERS_TEXT "The context setting for getting only secure responses was specified, and at least one DNS response was received, but no DNS response was determined to be secure through DNSSEC."
#define GETDNS_RESPSTATUS_ALL_BOGUS_ANSWERS 904
#define GETDNS_RESPSTATUS_ALL_BOGUS_ANSWERS_TEXT "The context setting for getting only secure responses was specified, and at least one DNS response was received, but all received responses for the requested name were bogus."
/** @}
 */

/**
 * \defgroup extvals Values associated with extensions and texts
 * @{
 */
#define GETDNS_EXTENSION_TRUE  1000
#define GETDNS_EXTENSION_TRUE_TEXT "Turn on the extension"
#define GETDNS_EXTENSION_FALSE 1001
#define GETDNS_EXTENSION_FALSE_TEXT "Do not turn on the extension"
/** @}
 */

/**
 * \defgroup dnserrors Values associated with DNS errors found by the API and texts
 * @{
 */
#define GETDNS_BAD_DNS_CNAME_IN_TARGET 1100
#define GETDNS_BAD_DNS_CNAME_IN_TARGET_TEXT "A DNS query type that does not allow a target to be a CNAME pointed to a CNAME"
#define GETDNS_BAD_DNS_ALL_NUMERIC_LABEL 1101
#define GETDNS_BAD_DNS_ALL_NUMERIC_LABEL_TEXT "One or more labels in a returned domain name is all-numeric; this is not legal for a hostname"
#define GETDNS_BAD_DNS_CNAME_RETURNED_FOR_OTHER_TYPE 1102
#define GETDNS_BAD_DNS_CNAME_RETURNED_FOR_OTHER_TYPE_TEXT "A DNS query for a type other than CNAME returned a CNAME response"
/** @}
 */


/**
 * \defgroup rrtypes RR Types
 * @{
 */
#define GETDNS_RRTYPE_A         1
#define GETDNS_RRTYPE_NS        2
#define GETDNS_RRTYPE_MD        3
#define GETDNS_RRTYPE_MF        4
#define GETDNS_RRTYPE_CNAME     5
#define GETDNS_RRTYPE_SOA       6
#define GETDNS_RRTYPE_MB        7
#define GETDNS_RRTYPE_MG        8
#define GETDNS_RRTYPE_MR        9
#define GETDNS_RRTYPE_NULL      10
#define GETDNS_RRTYPE_WKS       11
#define GETDNS_RRTYPE_PTR       12
#define GETDNS_RRTYPE_HINFO     13
#define GETDNS_RRTYPE_MINFO     14
#define GETDNS_RRTYPE_MX        15
#define GETDNS_RRTYPE_TXT       16
#define GETDNS_RRTYPE_RP        17
#define GETDNS_RRTYPE_AFSDB     18
#define GETDNS_RRTYPE_X25       19
#define GETDNS_RRTYPE_ISDN      20
#define GETDNS_RRTYPE_RT        21
#define GETDNS_RRTYPE_NSAP      22
#define GETDNS_RRTYPE_NSAP_PTR  23
#define GETDNS_RRTYPE_SIG       24
#define GETDNS_RRTYPE_KEY       25
#define GETDNS_RRTYPE_PX        26
#define GETDNS_RRTYPE_GPOS      27
#define GETDNS_RRTYPE_AAAA      28
#define GETDNS_RRTYPE_LOC       29
#define GETDNS_RRTYPE_NXT       30
#define GETDNS_RRTYPE_EID       31
#define GETDNS_RRTYPE_NIMLOC    32
#define GETDNS_RRTYPE_SRV       33
#define GETDNS_RRTYPE_ATMA      34
#define GETDNS_RRTYPE_NAPTR     35
#define GETDNS_RRTYPE_KX        36
#define GETDNS_RRTYPE_CERT      37
#define GETDNS_RRTYPE_A6        38
#define GETDNS_RRTYPE_DNAME     39
#define GETDNS_RRTYPE_SINK      40
#define GETDNS_RRTYPE_OPT       41
#define GETDNS_RRTYPE_APL       42
#define GETDNS_RRTYPE_DS        43
#define GETDNS_RRTYPE_SSHFP     44
#define GETDNS_RRTYPE_IPSECKEY  45
#define GETDNS_RRTYPE_RRSIG     46
#define GETDNS_RRTYPE_NSEC      47
#define GETDNS_RRTYPE_DNSKEY    48
#define GETDNS_RRTYPE_DHCID     49
#define GETDNS_RRTYPE_NSEC3     50
#define GETDNS_RRTYPE_NSEC3PARAM 51
#define GETDNS_RRTYPE_TLSA      52
#define GETDNS_RRTYPE_SMIMEA    53
#define GETDNS_RRTYPE_HIP       55
#define GETDNS_RRTYPE_NINFO     56
#define GETDNS_RRTYPE_RKEY      57
#define GETDNS_RRTYPE_TALINK    58
#define GETDNS_RRTYPE_CDS       59
#define GETDNS_RRTYPE_CDNSKEY   60
#define GETDNS_RRTYPE_OPENPGPKEY 61
#define GETDNS_RRTYPE_CSYNC     62
#define GETDNS_RRTYPE_SPF       99
#define GETDNS_RRTYPE_UINFO     100
#define GETDNS_RRTYPE_UID       101
#define GETDNS_RRTYPE_GID       102
#define GETDNS_RRTYPE_UNSPEC    103
#define GETDNS_RRTYPE_NID       104
#define GETDNS_RRTYPE_L32       105
#define GETDNS_RRTYPE_L64       106
#define GETDNS_RRTYPE_LP        107
#define GETDNS_RRTYPE_EUI48     108
#define GETDNS_RRTYPE_EUI64     109
#define GETDNS_RRTYPE_TKEY      249
#define GETDNS_RRTYPE_TSIG      250
#define GETDNS_RRTYPE_IXFR      251
#define GETDNS_RRTYPE_AXFR      252
#define GETDNS_RRTYPE_MAILB     253
#define GETDNS_RRTYPE_MAILA     254
#define GETDNS_RRTYPE_ANY       255
#define GETDNS_RRTYPE_URI       256
#define GETDNS_RRTYPE_CAA       257
#define GETDNS_RRTYPE_AVC       258
#define GETDNS_RRTYPE_DOA       259
#define GETDNS_RRTYPE_TA        32768
#define GETDNS_RRTYPE_DLV       32769
/** @}
 */

/**
 * \defgroup rrclasses RR Classes
 * @{
 */
#define GETDNS_RRCLASS_IN     1
#define GETDNS_RRCLASS_CH     3
#define GETDNS_RRCLASS_HS     4
#define GETDNS_RRCLASS_NONE 254
#define GETDNS_RRCLASS_ANY  255
/** @}
 */

/**
 * \defgroup opcodes Opcodes
 * @{
 */
#define GETDNS_OPCODE_QUERY  0
#define GETDNS_OPCODE_IQUERY 1
#define GETDNS_OPCODE_STATUS 2
#define GETDNS_OPCODE_NOTIFY 4
#define GETDNS_OPCODE_UPDATE 5
/** @}
 */

/**
 * \defgroup rcodes Rcodes
 * @{
 */
#define GETDNS_RCODE_NOERROR   0
#define GETDNS_RCODE_FORMERR   1
#define GETDNS_RCODE_SERVFAIL  2
#define GETDNS_RCODE_NXDOMAIN  3
#define GETDNS_RCODE_NOTIMP    4
#define GETDNS_RCODE_REFUSED   5
#define GETDNS_RCODE_YXDOMAIN  6
#define GETDNS_RCODE_YXRRSET   7
#define GETDNS_RCODE_NXRRSET   8
#define GETDNS_RCODE_NOTAUTH   9
#define GETDNS_RCODE_NOTZONE  10
#define GETDNS_RCODE_BADVERS  16
#define GETDNS_RCODE_BADSIG   16
#define GETDNS_RCODE_BADKEY   17
#define GETDNS_RCODE_BADTIME  18
#define GETDNS_RCODE_BADMODE  19
#define GETDNS_RCODE_BADNAME  20
#define GETDNS_RCODE_BADALG   21
#define GETDNS_RCODE_BADTRUNC 22
#define GETDNS_RCODE_COOKIE   23
/** @}
 */


/**
 * Many calls in the DNS API require a DNS context. A DNS context contains
 * the information that the API needs in order to process DNS calls, such
 * as the locations of upstream DNS servers, DNSSEC trust anchors, and so on.
 * The internal structure of the DNS context is opaque, and might be different
 * on each OS. When a context is passed to any function, it must be an
 * allocated context; the context must not be NULL.
 *
 * Use getdns_context_set_* functions to configure a context.
 */
typedef struct getdns_context getdns_context;

/**
 * When scheduling asynchronous requests, transaction identifiers associated
 * with the request are returned.  These identifiers are of the type:
 * getdns_transaction_t.  These identifiers can be used to associate answers
 * with requests, and also to cancel outstanding requests.
 */
typedef uint64_t getdns_transaction_t;


/**
 * getdns_list_get_data_type() and getdns_dict_get_data_type() return the type
 * of data on an index in a getdns_list, or on a name in a getdns_dict.
 */
typedef enum getdns_data_type
{
	t_dict, t_list, t_int, t_bindata
} getdns_data_type;


/**
 * A  struct to hold binary data.
 */
typedef struct getdns_bindata
{
	size_t size;
	uint8_t *data;
} getdns_bindata;

/**
 * getdns dictionary data type
 * Use helper functions getdns_dict_* to manipulate and iterate dictionaries
 */
typedef struct getdns_dict getdns_dict;

/**
 * getdns list data type
 * Use helper functions getdns_list_* to manipulate and iterate lists
 * Indexes are 0 based.
 */
typedef struct getdns_list getdns_list;
/** @}
 */


/** \addtogroup functions Functions
 *  @{
 */
/* Specify the order of the following groups manually here so they appear in 
   a better order in doxygen */

/**
 * \defgroup getdns_context Creating, destroying, configuring and reading configuration from getdns_contexts
 * \defgroup getdns_dict Creating, destroying, reading from and manipulating getdns_dicts
 * \defgroup getdns_list Creating, destroying, reading from and manipulating getdns_lists
 * \defgroup asyncfuncs Scheduling asynchronous requests
 * \defgroup syncfuncs Performing synchronous requests
 * \defgroup eventloops  Event loop extension functions
 * \defgroup versionfuncs Version functions
 * \defgroup dnssecfuncs DNSSEC functions
 * \defgroup utils Utility functions
 */


/**
 * \addtogroup getdns_list
 * @{
 */

/**
 * get the length of the specified list (returned in *answer)
 * @param list list of any of the supported data types
 * @param answer number of valid items in the list
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if list is not valid or params are NULL
 */
getdns_return_t getdns_list_get_length(const getdns_list *list,
    size_t * answer);
/**
 * get the enumerated data type of the indexed list item
 * @param list the list from which to fetch the data type
 * @param index the item in the list from which to fetch the data type
 * @param *answer assigned the value of the data type on success
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if the index is out of range or the list is NULL
 */
getdns_return_t getdns_list_get_data_type(const getdns_list *list,
    size_t index, getdns_data_type * answer);
/**
 * retrieve the dictionary value of the specified list item, the caller must not free
 * storage associated with the return value.  When the list is destroyed this
 * dict data is also free()'d - keep this in mind when using this function.
 * @param list the list from which to fetch the value
 * @param index the item in the list from which to fetch the value
 * @param **answer assigned a pointer to the dict value of the indexed element
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if the index is out of range or the list is NULL
 * @return GETDNS_RETURN_WRONG_TYPE_REQUESTED if the data type does not match the contents of the indexed item
 */
getdns_return_t getdns_list_get_dict(const getdns_list *list, size_t index,
    getdns_dict **answer);

/**
 * retrieve the list value of the specified list item, the caller must not free
 * storage associated with the return value.  When the list is destroyed any
 * list data is also free()'d - keep this in mind when using this function.
 * @param list the list from which to fetch the value
 * @param index the item in the list from which to fetch the value
 * @param **answer assigned a pointer to the list value of the indexed element
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if the index is out of range or the list is NULL
 * @return GETDNS_RETURN_WRONG_TYPE_REQUESTED if the data type does not match the contents of the indexed item
 */
getdns_return_t getdns_list_get_list(const getdns_list *list, size_t index,
    getdns_list **answer);
/**
 * retrieve the binary data value of the specified list item, the caller must not
 * free storage associated with the return value.  When the list is destroyed any
 * bindata data is also free()'d - keep this in mind when using this function.
 * @param list the list from which to fetch the value
 * @param index the item in the list from which to fetch the value
 * @param **answer assigned a pointer to the list value of the indexed element
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if the index is out of range or the list is NULL
 * @return GETDNS_RETURN_WRONG_TYPE_REQUESTED if the data type does not match the contents of the indexed item
 */
getdns_return_t getdns_list_get_bindata(const getdns_list *list, size_t index,
    getdns_bindata **answer);
/**
 * retrieve the integer value of the specified list item
 * @param list the list from which to fetch the item
 * @param index the index of the element in the list to fetch from
 * @param *answer assigned the integer value of the indexed element
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if the index is out of range or the list is NULL
 * @return GETDNS_RETURN_WRONG_TYPE_REQUESTED if the data type does not match the contents of the indexed item
 */
getdns_return_t getdns_list_get_int(const getdns_list *list, size_t index,
    uint32_t * answer);
/** @}
 */


/**
 * \addtogroup getdns_dict
 * @{
 */

/**
 * fetch a list of names from the dictionary, this list must be freed by the caller
 * via a call to getdns_list_destroy
 * @param dict dictionary from which to produce the list of names
 * @param **answer a pointer to the new list will be assigned to *answer
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or empty
 */
getdns_return_t getdns_dict_get_names(const getdns_dict *dict,
    getdns_list **answer);
/**
 * fetch the data type for the data associated with the specified name
 * @param dict dictionary from which to fetch the data type
 * @param name a name/key value to look up in the dictionary
 * @param *answer data type will be stored at this address
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t getdns_dict_get_data_type(const getdns_dict *dict,
    const char *name, getdns_data_type * answer);
/**
 * fetch the dictionary associated with the specified name, the dictionary should
 * not be free()'d by the caller, it will be freed when the parent dictionary is
 * free()'d
 * @param dict dictionary from which to fetch the dictionary
 * @param name a name/key value to look up in the dictionary
 * @param **answer a copy of the dictionary will be stored at this address
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t getdns_dict_get_dict(const getdns_dict *dict,
    const char *name, getdns_dict **answer);
/**
 * fetch the list associated with the specified name
 * the list should not be free()'d by the caller, when the dictionary is destroyed
 * the list will also be destroyed
 * @param dict dictionary from which to fetch the list
 * @param name a name/key value to look up in the dictionary
 * @param **answer a copy of the list will be stored at this address
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t getdns_dict_get_list(const getdns_dict *dict,
    const char *name, getdns_list **answer);
/**
 * fetch the bindata associated with the specified name, the bindata should not be
 * free()'d by the caller
 * @param dict dictionary from which to fetch the bindata
 * @param name a name/key value to look up in the dictionary
 * @param **answer a copy of the bindata will be stored at this address
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t getdns_dict_get_bindata(const getdns_dict *dict,
    const char *name, getdns_bindata **answer);
/**
 * fetch the integer value associated with the specified name
 * @param dict dictionary from which to fetch the integer
 * @param name a name/key value to look up in the dictionary
 * @param *answer the integer will be stored at this address
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t getdns_dict_get_int(const getdns_dict *dict,
    const char *name, uint32_t * answer);
/** @}
 */


/**
 * \addtogroup getdns_list
 * @{
 */

/**
 * create a new list with no items
 * @return pointer to an allocated list, NULL if insufficient memory
 */
getdns_list *getdns_list_create();

/**
 * create a new list with no items, creating and initializing it with the
 * custom memory function from context.  These memory functions will be used
 * for creating, and inherited by the list members when populating the list.
 * The custom deallocator will be used for destroying the list.
 * @param context The context from which the custom memory functions will be
 *                used to create and initialize the list.
 * @return pointer to an allocated list, NULL if insufficient memory
 */
getdns_list *getdns_list_create_with_context(getdns_context *context);

/**
 * create a new list with no items, creating and initializing it with the
 * provided custom memory function.  These memory functions will be used
 * for creating, and inherited by the list members when populating the list.
 * The custom deallocator will be used for destroying the list.
 * @param malloc Custom allocator
 * @param realloc Custom reallocator
 * @param free Custom deallocator
 * @return pointer to an allocated list, NULL if insufficient memory
 */
getdns_list *getdns_list_create_with_memory_functions(
    void *(*malloc) (size_t),
    void *(*realloc) (void *, size_t),
    void (*free) (void *)
);

/**
 * create a new list with no items, creating and initializing it with the
 * provided extended custom memory function.  These memory functions will be
 * used for creating, and inherited by the list members when populating the
 * list.  The custom deallocator will be used for destroying the list.
 * @param userarg Will be passed as the first argument to the extended 
 *                custom malloc, realloc, and free.
 * @param malloc Custom allocator
 * @param realloc Custom reallocator
 * @param free Custom deallocator
 * @return pointer to an allocated list, NULL if insufficient memory
 */
getdns_list *getdns_list_create_with_extended_memory_functions(
    void *userarg,
    void *(*malloc) (void *userarg, size_t),
    void *(*realloc) (void *userarg, void *, size_t),
    void (*free) (void *userarg, void *)
);


/**
 * free memory allocated to the list (also frees all children of the list)
 * note that lists and bindata retrieved from the list via the getdns_list_get_*
 * helper functions will be destroyed as well - if you fetched them previously
 * you MUST copy those instances BEFORE you destroy the list else
 * unpleasant things will happen at run-time
 */
void getdns_list_destroy(getdns_list *list);
/** @}
*/


/**
 * \addtogroup getdns_list
 * @{
 */

/**
 * assign the child_dict to an item in a parent list, the parent list copies
 * the child dict and will free the copy when the list is destroyed
 * @param list list containing the item to which child_list is to be assigned
 * @param index index of the item within list to which child_list is to be assigned
 * @param *child_dict dict to assign to the item
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if index is out of range, or list is NULL
 */
getdns_return_t getdns_list_set_dict(getdns_list *list, size_t index,
    const getdns_dict *child_dict);

/**
 * assign the child_list to an item in a parent list, the parent list copies
 * the child list and will free the copy when the list is destroyed
 * @param list list containing the item to which child_list is to be assigned
 * @param index index of the item within list to which child_list is to be assigned
 * @param *child_list list to assign to the item
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if index is out of range, or list is NULL
 */
getdns_return_t getdns_list_set_list(getdns_list *list, size_t index,
    const getdns_list *child_list);
/**
 * assign the child_bindata to an item in a parent list, the parent list copies
 * the child data and will free the copy when the list is destroyed
 * @param list list contiaining the item to which child_list is to be assigned
 * @param index index of the item within list to which child_list is to be assigned
 * @param *child_bindata data to assign to the item
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if index is out of range, or list is NULL
 */
getdns_return_t getdns_list_set_bindata(getdns_list *list, size_t index,
    const getdns_bindata *child_bindata);
/**
 * set the integer value of the indexed item (zero based index)
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_LIST_ITEM if index is out of range, or list is NULL
 */
getdns_return_t getdns_list_set_int(getdns_list *list, size_t index,
    uint32_t child_uint32);
/** @}
 */


/**
 * \addtogroup getdns_dict
 * @{
 */

/**
 * create a new dictionary with no items
 * @return pointer to an allocated dictionary, NULL if insufficient memory
 */
getdns_dict *getdns_dict_create();

/**
 * create a new dict with no items, creating and initializing it with the
 * custom memory function from context.  These memory functions will be used
 * for creating, and inherited by the list members when populating the dict.
 * The custom deallocator will be used for destroying the dict.
 * @param context The context from which the custom memory functions will be
 *                used to create and initialize the dict.
 * @return pointer to an allocated dict, NULL if insufficient memory
 */
getdns_dict *getdns_dict_create_with_context(getdns_context *context);

/**
 * create a new dict with no items, creating and initializing it with the
 * provided custom memory function.  These memory functions will be used
 * for creating, and inherited by the dict members when populating the dict.
 * The custom deallocator will be used for destroying the dict.
 * @param malloc Custom allocator
 * @param realloc Custom reallocator
 * @param free Custom deallocator
 * @return pointer to an allocated dict, NULL if insufficient memory
 */
getdns_dict *getdns_dict_create_with_memory_functions(
    void *(*malloc) (size_t),
    void *(*realloc) (void *, size_t),
    void (*free) (void *)
);

/**
 * create a new dict with no items, creating and initializing it with the
 * provided extended custom memory function.  These memory functions will be
 * used for creating, and inherited by the dict members when populating the
 * dict.  The custom deallocator will be used for destroying the dict.
 * @param userarg Will be passed as the first argument to the extended 
 *                custom malloc, realloc, and free.
 * @param malloc Custom allocator
 * @param realloc Custom reallocator
 * @param free Custom deallocator
 * @return pointer to an allocated dict, NULL if insufficient memory
 */
getdns_dict *getdns_dict_create_with_extended_memory_functions(
    void *userarg,
    void *(*malloc) (void *userarg, size_t),
    void *(*realloc) (void *userarg, void *, size_t),
    void (*free) (void *userarg, void *)
);

/**
 * destroy a dictionary and all items within that dictionary
 * be aware that if you have fetched any data from the dictionary it will
 * no longer be available (you are likely to experience bad things if you try)
 */
void getdns_dict_destroy(getdns_dict *dict);
/** @}
*/


/**
 * \addtogroup getdns_dict
 * @{
 */

/**
 * create a new entry in the dictionary, or replace the value of an existing entry
 * this routine makes a copy of the child_dict_
 * @param dict dictionary in which to add or change the value
 * @param name key that identifies which item in the dictionary to add/change
 * @param child_dict value to assign to the node identified by name
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t getdns_dict_set_dict(getdns_dict *dict,
    const char *name, const getdns_dict *child_dict);

/**
 * create a new entry in the dictionary, or replace the value of an existing entry
 * this routine makes a copy of the child_list
 * @param dict dictionary in which to add or change the value
 * @param name key that identifies which item in the dictionary to add/change
 * @param child_list value to assign to the node identified by name
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t getdns_dict_set_list(getdns_dict *dict,
    const char *name, const getdns_list *child_list);
/**
 * create a new entry in the dictionary, or replace the value of an existing entry
 * this routine makes a copy of the child_bindata
 * @param dict dictionary in which to add or change the value
 * @param name key that identifies which item in the dictionary to add/change
 * @param child_bindata value to assign to the node identified by name
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t getdns_dict_set_bindata(getdns_dict *dict,
    const char *name, const getdns_bindata *child_bindata);
/**
 * create a new entry in the dictionary, or replace the value of an existing entry
 * @param dict dictionary in which to add or change the value
 * @param name key that identifies which item in the dictionary to add/change
 * @param child_uint32 value to assign to the node identified by name
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t getdns_dict_set_int(getdns_dict *dict, const char *name,
    uint32_t child_uint32);

/**
 * creates a string that describes the dictionary in a human readable form
 * one line per item in the dictionary
 * @param some_dict dictionary to pretty print
 * @return character array (caller must free this) containing pretty string
 */
char *getdns_pretty_print_dict(const getdns_dict *some_dict);
/** @}
 */


/**
 * \addtogroup utils
 * remove the value associated with the specified name
 * @param dict dictionary from which to fetch the integer
 * @param name a name/key value to look up in the dictionary
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t getdns_dict_remove_name(getdns_dict *dict, const char *name);

/**
 * \addtogroup asyncfuncs
 * @{
 */
/**
 * The type of the callback function that must be registered when scheduling
 * asynchronous requests.  The registered function will be called from the
 * eventloop with the following parameters.
 * @see callbacktype
 * @param context The DNS context that was used in the calling function
 * @param callback_type Supplies the reason for the callback.
 *                      This will be one of:
 *                      - GETDNS_CALLBACK_COMPLETE The response has the
 *                        requested data in it
 *                      - GETDNS_CALLBACK_CANCEL The calling program cancelled
 *                        the callback; response is NULL
 *                      - GETDNS_CALLBACK_TIMEOUT The requested action timed
 *                        out; response is filled in with empty structures or
 *                        will contain additional information about the timeout
 *                        when used in combination with the
 *                        return_call_reporting extension.
 *                      - GETDNS_CALLBACK_ERROR The requested action had an 
 *                        error; response is NULL.
 * @param response A response object with the response data. 
 *                 The application is responsible for cleaning up the response
 *                 object with getdns_dict_destroy.
 * @param userarg Identical to the userarg passed to the calling function.
 * @param transaction_id The transaction identifier that was assigned by the
 *                       calling function.
 */
typedef void (*getdns_callback_t) (getdns_context *context,
    getdns_callback_type_t callback_type,
    getdns_dict * response,
    void *userarg, getdns_transaction_t transaction_id);


/**
 * retrieve general DNS data
 * @see rrtypes
 * @see getdns_general_sync
 * @param context pointer to a previously created context to be used for this call
 * @param name the ASCII based domain name to lookup
 * @param request_type RR type for the query, e.g. GETDNS_RR_TYPE_NS
 * @param extensions dict data structures, NULL to use no extensions
 * @param userarg void* returned to the callback  untouched
 * @param[out] transaction_id id used to identify the callback, NULL is ignored
 * @param callbackfn callback function defined by the application
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_general(getdns_context *context,
    const char *name,
    uint16_t request_type,
    getdns_dict *extensions,
    void *userarg,
    getdns_transaction_t * transaction_id, getdns_callback_t callbackfn);

/**
 * retrieve address assigned to a DNS name
 * @see getdns_address_sync
 * @param context pointer to a previously created context to be used for this call
 * @param name the ASCII based domain name to lookup
 * @param extensions dict data structures, NULL to use no extensions
 * @param userarg void* returned to the callback  untouched
 * @param[out] transaction_id id used to identify the callback, NULL is ignored
 * @param callbackfn callback function defined by the application
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_address(getdns_context *context,
    const char *name,
    getdns_dict *extensions,
    void *userarg,
    getdns_transaction_t * transaction_id, getdns_callback_t callbackfn);

/**
 * retrieve hostname assigned to an IP address
 * @see getdns_hostname_sync
 * @param context pointer to a previously created context to be used for this call
 * @param address the address to look up
 * @param extensions dict data structures, NULL to use no extensions
 * @param userarg void* returned to the callback  untouched
 * @param[out] transaction_id id used to identify the callback, NULL is ignored
 * @param callbackfn callback function defined by the application
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_hostname(getdns_context *context,
    getdns_dict *address,
    getdns_dict *extensions,
    void *userarg,
    getdns_transaction_t * transaction_id, getdns_callback_t callbackfn);

/**
 * retrieve a service assigned to a DNS name
 * @see getdns_service_sync
 * @param context pointer to a previously created context to be used for this call
 * @param name the ASCII based domain name to lookup
 * @param extensions dict data structures, NULL to use no extensions
 * @param userarg void* returned to the callback  untouched
 * @param[out] transaction_id id used to identify the callback, NULL is ignored
 * @param callbackfn callback function defined by the application
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_service(getdns_context *context,
    const char *name,
    getdns_dict *extensions,
    void *userarg,
    getdns_transaction_t * transaction_id, getdns_callback_t callbackfn);
/** @}
 */


/**
 * \addtogroup getdns_context
 * @{
 */

/**
 * creates a new getdns context with default settings.
 * If used multi-threaded, user must define appropriate OpenSSL callback locking functions
 * (e.g. CRYPTO_THREADID_set_call) depending on the library version used.
 * @param context context that can be used immediately with other API calls
 * @param set_from_os set to 1 to initialize the context with os defaults
 * @return GETDNS_RETURN_GOOD on success
*/
getdns_return_t
getdns_context_create(getdns_context ** context, int set_from_os);


/**
 * creates a new getdns context with default settings using custom memory functions.
 * If used multi-threaded, user must define appropriate OpenSSL callback locking functions
 * (e.g. CRYPTO_THREADID_set_call) depending on the library version used.
 * @param context context that can be used immediately with other API calls
 * @param set_from_os set to 1 to initialize the context with os defaults
 * @param malloc custom malloc function
 * @param realloc custom realloc function
 * @param free custom free function
 * @return GETDNS_RETURN_GOOD on success
*/
getdns_return_t
getdns_context_create_with_memory_functions(
    getdns_context ** context,
    int set_from_os,
    void *(*malloc) (size_t),
    void *(*realloc) (void *, size_t),
    void (*free) (void *)
);


/**
 * creates a new getdns context with default settings using extended custom memory functions.
 * If used multi-threaded, user must define appropriate OpenSSL callback locking functions
 * (e.g. CRYPTO_THREADID_set_call) depending on the library version used.
 * @param context context that can be used immediately with other API calls
 * @param set_from_os set to 1 to initialize the context with os defaults
 * @param userarg parameter passed to the custom malloc, realloc and free functions
 * @param malloc custom malloc function
 * @param realloc custom realloc function
 * @param free custom free function
 * @return GETDNS_RETURN_GOOD on success
*/
getdns_return_t
getdns_context_create_with_extended_memory_functions(
    getdns_context **context,
    int set_from_os,
    void *userarg,
    void *(*malloc) (void *userarg, size_t),
    void *(*realloc) (void *userarg, void *, size_t),
    void (*free) (void *userarg, void *)
);

/**
 * destroy the context.  All outstanding requests will be cancelled with
 * the getdns_cancel_callback() function.
 */
void getdns_context_destroy(getdns_context *context);
/** @}
 */


/**
 * \addtogroup asyncfuncs
 * @{
 */
/**
 * Cancel an outstanding asynchronous request.  The callback registered with
 * the request will be called with the getdns_callback_type_t set to
 * GETDNS_CALLBACK_CANCEL and the response set to NULL.
 */
getdns_return_t
getdns_cancel_callback(getdns_context *context,
    getdns_transaction_t transaction_id);
/** @}
 */


/**
 * \addtogroup syncfuncs
 * @{
 */
/** These functions do not use callbacks, when the application calls one of these
 * functions the library retrieves all of the data before returning.  Return
 * values are exactly the same as if you had used a callback with the
 * asynchronous functions.
 */

/**
 * retrieve general DNS data
 * @see rrtypes
 * @see getdns_general
 * @param context pointer to a previously created context to be used for this call
 * @param name the ASCII based domain name to lookup
 * @param request_type RR type for the query, e.g. GETDNS_RR_TYPE_NS
 * @param extensions dict data structures, NULL to use no extensions
 * @param response response
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_general_sync(getdns_context *context,
    const char *name,
    uint16_t request_type,
    getdns_dict *extensions,
    getdns_dict **response);

/**
 * retrieve address assigned to a DNS name
 * @see getdns_address
 * @param context pointer to a previously created context to be used for this call
 * @param name the ASCII based domain name to lookup
 * @param extensions dict data structures, NULL to use no extensions
 * @param response response
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_address_sync(getdns_context *context,
    const char *name,
    getdns_dict *extensions,
    getdns_dict **response);

/**
 * retrieve hostname assigned to an IP address
 * @see getdns_hostname
 * @param context pointer to a previously created context to be used for this call
 * @param address the address to look up
 * @param extensions dict data structures, NULL to use no extensions
 * @param response response
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_hostname_sync(getdns_context *context,
    getdns_dict *address,
    getdns_dict *extensions,
    getdns_dict **response);

/**
 * retrieve a service assigned to a DNS name
 * @see getdns_service
 * @param context pointer to a previously created context to be used for this call
 * @param name the ASCII based domain name to lookup
 * @param extensions dict data structures, NULL to use no extensions
 * @param response response
 * @return GETDNS_RETURN_GOOD on success
 */
getdns_return_t
getdns_service_sync(getdns_context *context,
    const char *name,
    getdns_dict *extensions,
    getdns_dict **response);

/** @}
 */

/**
 * \addtogroup utils Utility functions
 * @{
 */

/**
 * Convert a domain name in DNS wire format to presentation format.
 * The newly allocated string should be freed with free.
 * @param dns_name_wire_fmt A bindata to the DNS name in wire format
 * @param fqdn_as_string A reference to a pointer that will be set
 *                       to a newly allocated string containing the
 *                       presentation format of the name.  The caller
 *                       is responsible for deallocate this space with free().
 * @return GETDNS_RETURN_GOOD on success or GETDNS_RETURN_GENERIC_ERROR
 *         when the wireformat name could not be parsed.
 */
getdns_return_t
getdns_convert_dns_name_to_fqdn(
    const getdns_bindata *dns_name_wire_fmt,
    char **fqdn_as_string);

/**
 * Convert a domain name in presentation format to DNS wire format.
 * @param fqdn_as_string The name to convert in presentation format.
 * @param dns_name_wire_fmt A reference to a pointer that will be set
 *                          to a newly allocated bindata containing the
 *                          DNS wire format of the name.  The caller
 *                          is responsible for deallocate this space with free().
 * @return GETDNS_RETURN_GOOD on success or GETDNS_RETURN_GENERIC_ERROR
 *         when the presentation format name could not be parsed.
 */
getdns_return_t
getdns_convert_fqdn_to_dns_name(
    const char *fqdn_as_string,
    getdns_bindata **dns_name_wire_fmt);

/**
 * Convert an Unicode encoded label to ASCII encoding following the
 * rules for IDNA 2008 described in RFC 5890-5892.
 * @param ulabel The Unicode encoded label to convert.
 * @return The ASCII encoding label. The caller is responsible for deallocate
 * this space with free().
 */ 
char *getdns_convert_ulabel_to_alabel(const char *ulabel);

/**
 * Convert an ASCII encoded label to Unicode encoding following the
 * rules for IDNA 2008 described in RFC 5890-5892.
 * @param alabel The ASCII encoded label to convert.
 * @return The Unicode encoding label. The caller is responsible for
 * deallocation with free().
 */ 
char *getdns_convert_alabel_to_ulabel(const char *alabel);

/** @}
 */

/**
 * \addtogroup dnssecfuncs
 *  @{
 */

/**
 * Offline DNSSEC validate Resource Records with the help of support
 * records and a DNSSEC trust anchor.
 * @see dnssecvalues
 * @param to_validate This is a list of reply_dicts to validate (as can
 *                    be seen under "replies_tree" in a response dict), or
 *                    an RRset with signatures represented as a list of
 *                    rr_dicts.  The format of rr_dict can be seen in
 *                    the sections of reply_dicts in response dicts.
 *                    It is also possible to validate the non-existance
 *                    of a query.  Besides all the necessary NSEC(3)s plus
 *                    signature, the to_validate should then also contain
 *                    a question rr_dict with a qname, qclass and qtype.
 * @param support_records A list of all the DNSKEY, DS and NSEC(3) RRsets
 *                        (in the form of rr_dicts) that may be used to
 *                        validate the RRsets or replies in to_validate.
 *                        The value returned under "validation_chain" in a
 *                        response dict when the dnssec_return_validation_chain
 *                        extension was used, can be used directly for this.
 * @param trust_anchors A list of rr_dicts containing the DNSSEC trust anchors.
 *                      The return value of the getdns_root_trust_anchor()
 *                      can be used directly for this.
 * @return The function returns one of GETDNS_DNSSEC_SECURE,
 * GETDNS_DNSSEC_BOGUS, GETDNS_DNSSEC_INDETERMINATE, or GETDNS_DNSSEC_INSECURE
 * depending on the validation status.
 */
getdns_return_t
getdns_validate_dnssec(getdns_list *to_validate,
    getdns_list *support_records,
    getdns_list *trust_anchors);

/**
 * Get the default list of trust anchor records that is used by the library
 * to validate DNSSEC.
 * @param utc_date_of_anchor Set to the number of seconds since epoch
 *                           the trust anchors were obtained
 * @return The list of DNSSEC trust anchors, or NULL on error. The  caller is
 * responsible for deallocating the list with getdns_list_destroy().
 */
getdns_list *getdns_root_trust_anchor(time_t *utc_date_of_anchor);

/** @}
 */

/**
 * \addtogroup utils
 *  @{
 */

/**
 * Converts a getdns_bindata representing an IPv4 or IPv6 address to a 
 * textual representation.
 * @param bindata_of_ipv4_or_ipv6_address The IP address to convert.
 * @return character array (caller must free this) containing the textual
 * representation of the address.
 */
char *getdns_display_ip_address(const getdns_bindata
    *bindata_of_ipv4_or_ipv6_address);

/** @}
 */


/**
 * \addtogroup getdns_context
 * @{
 */

/**
 * An application can be notified when the context is changed.
 * Note that this implementation has an extended version of this function
 * in which an additional userarg parameter can be registered:
 * #getdns_context_set_update_callback .
 * @see contextcodetypestext
 * @param context The context for which to monitor changes
 * @param value The callback function that will be called when any context is
 *              changed. A update callback function can be deregistered by
 *              passing NULL.
 * @return GETDNS_RETURN_GOOD when successful.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_context_update_callback(
  getdns_context *context,
  void (*value)(getdns_context *context,
                getdns_context_code_t changed_item)
);

/**
 * Specify whether DNS queries are performed with recursive lookups or as a
 * stub resolver. The default value is GETDNS_RESOLUTION_RECURSING.
 * @see getdns_context_get_resolution_type
 * @see resolutiontypestext
 * @param context The context to configure
 * @param value GETDNS_RESOLUTION_RECURSING or GETDNS_RESOLUTION_STUB.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_CONTEXT_UPDATE_FAIL with unknown resolution types
 * @return GETDNS_RETURN_NOT_IMPLEMENTED when getdns was compiled for stub
 *         resolution only and recursing resolution type was requested.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_resolution_type(getdns_context *context,
    getdns_resolution_t value);

/**
 * Sets the ordered list of namespaces that will be queried.
 * This context setting is ignored for the getdns_general and
 * getdns_general_sync functions; it is used for the other funtions. 
 * When a normal lookup is done, the API does the lookups in the order given
 * and stops when it gets the first result
 * @see getdns_context_get_namespaces
 * @see namespacetypestext
 * @param context The context to configure
 * @param namespace_count The number of values in the namespaces list.
 * @param namespaces An ordered list of namespaces that will be queried.
 *                   The values are: GETDNS_NAMESPACE_DNS,
 *                   GETDNS_NAMESPACE_LOCALNAMES, GETDNS_NAMESPACE_NETBIOS,
 *                   GETDNS_NAMESPACE_MDNS, and GETDNS_NAMESPACE_NIS. 
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_CONTEXT_UPDATE_FAIL with unknown namespace types
 * @return GETDNS_RETURN_NOT_IMPLEMENTED when unsupported namespaces were
 *         given.  Currently this implementation supports only
 *         GETDNS_NAMESPACE_DNS, GETDNS_NAMESPACE_LOCALNAMES and has an
 *         draft implementation of GETDNS_NAMESPACE_MDNS, which has to be
 *         enabled at configure time.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_namespaces(getdns_context *context,
    size_t namespace_count, getdns_namespace_t *namespaces);

/**
 * Specifies what transport are used for DNS lookups. The default is
 * GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP. Use of this function
 * is discouraged.  Please use #getdns_context_set_dns_transport_list()
 * instead of this function.  
 * @see getdns_context_get_dns_transport
 * @see transporttypestext
 * @see getdns_context_set_dns_transport_list
 * @param context The context to configure
 * @param value The transport to use for DNS lookups.
 *              The value is GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP,
 *              GETDNS_TRANSPORT_UDP_ONLY, GETDNS_TRANSPORT_TCP_ONLY,
 *              GETDNS_TRANSPORT_TCP_ONLY_KEEP_CONNECTIONS_OPEN,
 *              GETDNS_TRANSPORT_TLS_ONLY_KEEP_CONNECTIONS_OPEN or
 *              GETDNS_TRANSPORT_TLS_FIRST_AND_FALL_BACK_TO_TCP_KEEP_CONNECTIONS_OPEN.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_CONTEXT_UPDATE_FAIL with unknown values
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_dns_transport(getdns_context *context,
    getdns_transport_t value);

/**
 * Specifies what transport is used for DNS lookups. The default is a list
 * containing GETDNS_TRANSPORT_UDP then GETDNS_TRANSPORT_TCP.  The API will
 * return information on the actual transport used to fulfill the request in
 * the response dict, when the return_call_reporting extension is used.
 * @see getdns_context_get_dns_transport_list
 * @see transportlisttypestext
 * @see getdns_context_set_dns_transport
 * @param context The context to configure
 * @param transport_count The number of values in the transports list.
 * @param transports An ordered list of transports that will be used for DNS
 *                   lookups. If only one transport value is specified it will
 *                   be the only transport used. Should it not be available
 *                   basic resolution will fail. Fallback transport options are
 *                   specified by including multiple values in the list.
 *                   The values are: GETDNS_TRANSPORT_UDP, GETDNS_TRANSPORT_TCP,
 *                   or GETDNS_TRANSPORT_TLS
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_CONTEXT_UPDATE_FAIL with unknown values
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_dns_transport_list(getdns_context *context,
    size_t transport_count, getdns_transport_list_t *transports);

/**
 * Specify number of milliseconds the API will leave an idle TCP or TLS
 * connection open for (idle means no outstanding responses and no pending
 * queries).  When set to 0, all currently open idle connections will be
 * closed immediately.  The default is 0.
 * Note with synchronous queries, idle connections can not reliably be timed.
 * Each new synchronous request, will reset the counter no matter the time
 * in between requests, and thus leave the connection open always.  This
 * setting is thus only meaningful when doing requests asynchronously.
 * @see getdns_context_get_idle_timeout
 * @param context The context to configure
 * @param timeout The number of milliseconds the API will leave an idle TCP
 *                or TLS connection open for
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_idle_timeout(getdns_context *context, uint64_t timeout);

/**
 * Limit the number of outstanding DNS queries. When more than limit requests
 * are scheduled, they are kept on an internal queue, to be rescheduled when
 * the number of outstanding queries drops below the limit again.
 * A value of 0 indicates that the number of outstanding DNS queries is
 * unlimited, however, queries will be put on the internal queue too when
 * system resources are exhausted (i.e. number of available sockets).
 * The default value is 0.
 * @see getdns_context_get_limit_outstanding_queries
 * @param context The context to configure
 * @param limit The maximum number of outstanding DNS queries.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_limit_outstanding_queries(getdns_context *context,
    uint16_t limit);

/**
 * Specifies number of milliseconds the API will wait for request to return.
 * The default is 5000 (i.e. 5 seconds).
 * @see getdns_context_get_timeout
 * @param context The context to configure
 * @param timeout The number of milliseconds the API will wait for request to
 *                return.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER for a timeout 0,
 *         or when context was NULL
 */
getdns_return_t
getdns_context_set_timeout(getdns_context *context, uint64_t timeout);

/**
 * Specifies whether or not DNS queries follow redirects.
 * The default value is GETDNS_REDIRECTS_FOLLOW.
 * In this implementation, redirects are only actively followed in the recursing
 * resolution mode.  The GETDNS_REDIRECTS_DO_NOT_FOLLOW will not prevent this,
 * but the response will be stripped of all resource records that could only be
 * found through following redirects.  The setting will do this with answers
 * provided by an upstream in stub resolution mode too.
 * @see getdns_context_get_follow_redirects
 * @see redirectpoliciestext
 * @param context The context to configure
 * @param value GETDNS_REDIRECTS_FOLLOW for normal following of redirects
 *              through CNAME and DNAME; or GETDNS_REDIRECTS_DO_NOT_FOLLOW to
 *              cause any lookups that would have gone through CNAME and DNAME
 *              to return the CNAME or DNAME, not the eventual target.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER for an unknown value,
 *         or when context was NULL
 */
getdns_return_t
getdns_context_set_follow_redirects(getdns_context *context,
    getdns_redirects_t value);

/**
 * Configure the list of addresses to be used for looking up top-level domains.
 * The default is the list of "normal" IANA root servers
 * @see getdns_context_get_dns_root_servers
 * @param context The context to configure
 * @param addresses The list contains dicts that are addresses to be used for
 *                  looking up top-level domains. Each dict in the list
 *                  contains at least two names: address_type (whose value is
 *                  a bindata; it is currently either "IPv4" or "IPv6") and
 *                  address_data (whose value is a bindata).
 *                  This implementation also accepts a list of addressxi
 *                  bindatas. Or a list of rr_dicts for address records (i.e.
 *                  the additional section of a NS query for ".", or a with
 *                  getdns_fp2rr_list() converted root.hints file).
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_ CONTEXT_UPDATE_FAIL when there were problems
 *         parsing the provided addresses list.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_dns_root_servers(getdns_context *context,
    getdns_list *addresses);

/**
 * Specifies whether, how and when to append a suffix to the query string.
 * The non-standard implementation default is
 * GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST.
 * @see getdns_context_get_append_name
 * @see suffixappendtypestext
 * @param context The context to configure
 * @param value GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST,
 *              GETDNS_APPEND_NAME_ALWAYS,
 *              GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE,
 *              GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE,
 *              or GETDNS_APPEND_NAME_NEVER.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_ CONTEXT_UPDATE_FAIL with unknown values.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_append_name(getdns_context *context,
    getdns_append_name_t value);

/**
 * Specify the list of suffixes to be appended based on the value off the 
 * append_name setting.  The default is read from OS, or an empty list when
 * the context is not initialized with OS defaults.
 * @see getdns_context_get_suffix
 * @param context The context to configure
 * @param value A list of bindatas that are strings that are to be appended
 *              based on the value off the append_name setting.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_ CONTEXT_UPDATE_FAIL with unknown values.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_suffix(getdns_context *context, getdns_list *value);

/**
 * Specify the DNSSEC trust anchors.  The default is to read it from 
 * /etc/unbound/getdns-root.key.
 * @see getdns_context_get_dnssec_trust_anchors
 * @param context The context to configure
 * @param value A list of rr_dicts for DS or DNSKEY that are the DNSSEC
 *              trust anchors.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_ CONTEXT_UPDATE_FAIL with unknown values.
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_dnssec_trust_anchors(getdns_context *context,
    getdns_list *value);

/**
 * Specify the DNSSEC allowed skew.  The default is 0.
 * @see getdns_context_get_dnssec_allowed_skew
 * @param context The context to configure
 * @param value The number of seconds of skew that is allowed in either
 *              direction when checking an RRSIG's Expiration and Inception
 *              fields.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_dnssec_allowed_skew(getdns_context *context,
    uint32_t value);


/**
 * Specify where a stub resolver will send queries.  The default value is set
 * from the OS when the context is created with the set_from_os flag, or
 * empty otherwise.
 * @see getdns_context_get_upstream_recursive_servers
 * @param context The context to configure
 * @param upstream_list The upstreams are specified either by a getdns_bindata
 *                      containing a IPv4 or IPv6 address in network format
 *                      or a `getdns_dict`, containing at least a name
 *                      `address_data` whose value is the address bindata, and
 *                      optionally also:
 *                      - `scode_id` containing an getdns_bindata with the
 *                        scope ID for IPv6 link-local addresses.
 *                      - `port` an integer specifying which port to use to
 *                        contact this upstream over UDP and TCP;
 *                        the default is 53
 *                      - `tsig_algorithm` (a bindata) that is the name of the
 *                        TSIG hash algorithm 
 *                      - `tsig_name` (a bindata) that is the name of the TSIG key
 *                      - `tsig_secret` (a bindata) that is the TSIG key
 *                      - `tls_port` (a integer) that is the port to use to
 *                        contact this upstream over TLS
 *                      - `tls_auth_name` (a bindata) that is the name of the
 *                        upstream (as a bindata containing a string) which
 *                        must be verified to confirm its identity.
 *                      - `tls_pubkey_pinset` (a list) containing dicts with
 *                        - `digest` which must be a bindata containing the
 *                          text sha256
 *                        - `value` A SHA256 hash of the `SubjectPublicKeyInfo`
 *                          of the upstream, which will be used to authenticate
 *                          it.
 *                      - `tls_cipher_list` (a bindata) that is the string
 *                        of available ciphers specific for this upstream.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when `context` or `upstream_list` was `NULL`
 * @return GETDNS_RETURN_CONTEXT_UPDATE_FAIL when there were problems parsing
 *         the `upstream_list`.
 */
getdns_return_t
getdns_context_set_upstream_recursive_servers(getdns_context *context,
    getdns_list *upstream_list);

/**
 * Set the maximum UDP payload size advertised in a EDNS0 OPT record.
 * When not set (the default), outgoing values will adhere to the suggestions
 * in RFC 6891 and may follow a scheme that uses multiple values to maximize
 * receptivity.
 * @see getdns_context_get_edns_maximum_udp_payload_size
 * @see getdns_context_unset_edns_maximum_udp_payload_size
 * @param context The context to configure
 * @param value The maximum UDP payload size advertised in a EDNS0 OPT record.
 *              The value must be between 512 and 65536
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_edns_maximum_udp_payload_size(getdns_context *context,
    uint16_t value);

/**
 * Set the rcode advertised in a EDNS0 OPT record.  The default is 0.
 * @see getdns_context_get_edns_extended_rcode
 * @param context The context to configure
 * @param value  A value between 0 and 255.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_edns_extended_rcode(getdns_context *context,
    uint8_t value);

/**
 * Set the version advertised in a EDNS0 OPT record.  The default is 0.
 * @see getdns_context_get_edns_version
 * @param context The context to configure
 * @param value  A value between 0 and 255.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_edns_version(getdns_context *context, uint8_t value);

/**
 * Set the DO ibit advertised in a EDNS0 OPT record.  The default is 0.
 * However use of any of the dnssec_* extension will override this setting
 * and set the DO bit.
 * @see getdns_context_get_edns_do_bit
 * @param context The context to configure
 * @param value  A value between 0 and 1.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_edns_do_bit(getdns_context *context, uint8_t value);

/**
 * Specify custom memory management functions to be used with this context.
 * The given memory management functions will be used for creating the response
 * dicts. The response dicts inherit the custom memory management functions
 * from the context and will deallocate themselves (and their members) with the
 * custom deallocator. By default, the system `malloc`, `realloc`, and `free` are used.
 * @param context The context to configure
 * @param malloc A custom memory allocator.  The default is `malloc`.
 * @param realloc A custom memory reallocator. The default is `realloc`.
 * @param free A custom memory deallocator. The default is `free`.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_memory_functions(getdns_context *context,
    void *(*malloc) (size_t),
    void *(*realloc) (void *, size_t),
    void (*free) (void *)
    );

/**
 * Specify custom extended memory management functions to be used with this
 * context.  The value of `userarg` argument will be passed to the custom
 * `malloc`, `realloc`, and `free`.
 * The response dicts inherit the custom memory management functions
 * from the context and will deallocate themselves (and their members) with the
 * custom deallocator. By default, the system `malloc`, `realloc`, and `free` are used.
 * @param context The context to configure
 * @param userarg This value will be passed as the `userarg` argument to the
 *                custom `malloc`, `realloc` and `free` function.
 * @param malloc A custom memory allocator.  The default is a wrapper for `malloc`.
 * @param realloc A custom memory reallocator. The default is a wrapper for `realloc`.
 * @param free A custom memory deallocator. The default is a wrapper for `free`.
 * @return GETDNS_RETURN_GOOD when successful. 
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL
 */
getdns_return_t
getdns_context_set_extended_memory_functions(getdns_context *context,
    void *userarg,
    void *(*malloc) (void *userarg, size_t sz),
    void *(*realloc) (void *userarg, void *ptr, size_t sz),
    void (*free) (void *userarg, void *ptr)
    );
/** @}
 */

/**
 * Retrieve information about the API itself and inspect the current context.
 * The returned dictionary can be used with getdns_context_config() directly
 * to configure another context with precisely these settings.
 * @param context The context from which to get the information
 * @return A getdns_dict containing the following name/value pairs:
 *         - `version_string` (a bindata) represents the version string for this version of the DNS API.
 *         - `implementation_string` (a bindata) is a string showing which
 *           implementation of the getdns API this is.  In our implementation
 *           this will always be set to "https://getdnsapi.net"
 *         - resolution_type (an int) is the type of resolver that the API is
 *            acting as in this context: GETDNS_RESOLUTION_RECURSING or
 *            GETDNS_RESOLUTION_STUB.
 *         - all_context (a dict) with names for all the other settings in
 *           context.
 */
getdns_dict*
getdns_context_get_api_information(getdns_context* context);

/** @}
 */
 
#ifdef __cplusplus
}
#endif
#endif /* GETDNS_H */
