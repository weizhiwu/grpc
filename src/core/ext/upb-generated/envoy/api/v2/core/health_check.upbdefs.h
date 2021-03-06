/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/health_check.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_HEALTH_CHECK_PROTO_UPBDEFS_H_
#define ENVOY_API_V2_CORE_HEALTH_CHECK_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_api_v2_core_health_check_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_Payload_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.Payload");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_HttpHealthCheck_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.HttpHealthCheck");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_TcpHealthCheck_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.TcpHealthCheck");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_RedisHealthCheck_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.RedisHealthCheck");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_GrpcHealthCheck_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.GrpcHealthCheck");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_CustomHealthCheck_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.CustomHealthCheck");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_HealthCheck_TlsOptions_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_health_check_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.HealthCheck.TlsOptions");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CORE_HEALTH_CHECK_PROTO_UPBDEFS_H_ */
