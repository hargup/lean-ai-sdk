// Lean compiler output
// Module: AiSdk.Providers.Google
// Imports: public import Init public import AiSdk.Types public import AiSdk.Json public import AiSdk.Provider public import AiSdk.Config public import HttpClient
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__1(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__6;
lean_object* l_Lean_Json_compress(lean_object*);
static lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__2;
lean_object* l_AiSdk_Json_getFieldNat(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__5;
lean_object* l_Lean_Json_mkObj(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0;
LEAN_EXPORT lean_object* l_AiSdk_Google_createModel(lean_object*, lean_object*);
uint8_t l_Array_isEmpty___redArg(lean_object*);
lean_object* l_AiSdk_Json_getFieldStr(lean_object*, lean_object*);
static lean_object* l_AiSdk_Google_createModel___closed__0;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1;
LEAN_EXPORT lean_object* l_AiSdk_Google_create(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__14;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__4;
lean_object* l_AiSdk_Json_getFieldArr(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
static lean_object* l_AiSdk_Google_baseUrl___closed__0;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__3;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__7;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__4;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__2(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__9;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__1;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__15;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__0;
lean_object* l_AiSdk_Json_getField(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__4;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__6;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse(lean_object*);
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___boxed(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__8;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__8;
lean_object* lean_array_to_list(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6;
static lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0;
lean_object* l_HttpClient_Client_send(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__1;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Google_baseUrl;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__2;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__2;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__0(lean_object*, lean_object*);
lean_object* l_HttpClient_Url_parse(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__1;
static lean_object* l_AiSdk_Google_defaultModel___closed__0;
static lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__0;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__11;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___boxed(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__0;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__3;
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Google_defaultModel;
lean_object* l_HttpClient_Client_new(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__3;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5;
lean_object* l_String_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__4(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__0;
lean_object* l_HttpClient_Request_withJson(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__3;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0___closed__0;
lean_object* l_AiSdk_ApiConfig_getGoogleKey(lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__12;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__1;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__10;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__13;
lean_object* l_AiSdk_Json_getPathArr(lean_object*, lean_object*);
lean_object* l_HttpClient_HttpError_toString(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_HttpClient_Request_post(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
static lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3;
static lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__2;
uint8_t l_AiSdk_instBEqRole_beq(uint8_t, uint8_t);
lean_object* l_Float_toJson(double);
uint8_t l_HttpClient_Status_isSuccess(lean_object*);
LEAN_EXPORT uint8_t l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason(lean_object*);
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_ApiConfig_load(lean_object*);
static lean_object* _init_l_AiSdk_Google_baseUrl___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://generativelanguage.googleapis.com/v1beta", 48, 48);
return x_1;
}
}
static lean_object* _init_l_AiSdk_Google_baseUrl() {
_start:
{
lean_object* x_1; 
x_1 = l_AiSdk_Google_baseUrl___closed__0;
return x_1;
}
}
static lean_object* _init_l_AiSdk_Google_defaultModel___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gemini-2.5-flash", 16, 16);
return x_1;
}
}
static lean_object* _init_l_AiSdk_Google_defaultModel() {
_start:
{
lean_object* x_1; 
x_1 = l_AiSdk_Google_defaultModel___closed__0;
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("model", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("user", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString(uint8_t x_1) {
_start:
{
if (x_1 == 2)
{
lean_object* x_2; 
x_2 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__0;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__1;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_8 = 0;
x_9 = l_AiSdk_instBEqRole_beq(x_7, x_8);
if (x_9 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_ctor_get_uint8(x_12, sizeof(void*)*1);
x_15 = 0;
x_16 = l_AiSdk_instBEqRole_beq(x_14, x_15);
if (x_16 == 0)
{
lean_dec(x_12);
x_1 = x_13;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_2);
x_1 = x_13;
x_2 = x_18;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc_ref(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_8 = 0;
x_9 = l_AiSdk_instBEqRole_beq(x_7, x_8);
if (x_9 == 0)
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_ctor_get_uint8(x_12, sizeof(void*)*1);
x_15 = 0;
x_16 = l_AiSdk_instBEqRole_beq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_2);
x_1 = x_13;
x_2 = x_17;
goto _start;
}
else
{
lean_dec(x_12);
x_1 = x_13;
goto _start;
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("role", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("parts", 5, 5);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("text", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_8);
lean_dec(x_5);
x_9 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0;
x_10 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString(x_7);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1;
x_14 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2;
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_box(0);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_16);
x_18 = l_Lean_Json_mkObj(x_1);
x_19 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3;
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_12);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Json_mkObj(x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
x_1 = x_6;
x_2 = x_26;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_1);
x_30 = lean_ctor_get_uint8(x_28, sizeof(void*)*1);
x_31 = lean_ctor_get(x_28, 0);
lean_inc_ref(x_31);
lean_dec(x_28);
x_32 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0;
x_33 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString(x_30);
x_34 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1;
x_37 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2;
x_38 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_38, 0, x_31);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_Json_mkObj(x_41);
x_43 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3;
x_44 = lean_array_push(x_43, x_42);
x_45 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_36);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_40);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_35);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_Json_mkObj(x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_2);
x_1 = x_29;
x_2 = x_50;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("generationConfig", 16, 16);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("contents", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("systemInstruction", 17, 17);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("stopSequences", 13, 13);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("topK", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("topP", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("maxOutputTokens", 15, 15);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("temperature", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_26; lean_object* x_52; lean_object* x_62; lean_object* x_78; lean_object* x_87; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 4);
lean_inc(x_7);
lean_dec_ref(x_2);
x_8 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__0;
x_9 = lean_box(0);
lean_inc(x_1);
x_10 = l_List_filterTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__0(x_1, x_9);
x_11 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__1(x_10, x_9);
x_12 = l_String_intercalate(x_8, x_11);
x_13 = l_List_filterTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__2(x_1, x_9);
x_14 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3(x_13, x_9);
if (lean_obj_tag(x_3) == 0)
{
x_87 = x_9;
goto block_102;
}
else
{
lean_object* x_103; lean_object* x_104; double x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_103 = lean_ctor_get(x_3, 0);
lean_inc(x_103);
lean_dec_ref(x_3);
x_104 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__8;
x_105 = lean_unbox_float(x_103);
lean_dec(x_103);
x_106 = l_Float_toJson(x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_9);
x_109 = l_List_appendTR___redArg(x_9, x_108);
x_87 = x_109;
goto block_102;
}
block_25:
{
uint8_t x_17; 
x_17 = l_List_isEmpty___redArg(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__1;
x_19 = l_Lean_Json_mkObj(x_15);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_9);
x_22 = l_List_appendTR___redArg(x_16, x_21);
x_23 = l_Lean_Json_mkObj(x_22);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_15);
x_24 = l_Lean_Json_mkObj(x_16);
return x_24;
}
}
block_51:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_27 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__2;
x_28 = lean_array_mk(x_14);
x_29 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_9);
x_32 = lean_string_utf8_byte_size(x_12);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_35 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__3;
x_36 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1;
x_37 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2;
x_38 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_38, 0, x_12);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_9);
x_41 = l_Lean_Json_mkObj(x_40);
x_42 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3;
x_43 = lean_array_push(x_42, x_41);
x_44 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_36);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_9);
x_47 = l_Lean_Json_mkObj(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_35);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_9);
x_50 = l_List_appendTR___redArg(x_31, x_49);
x_15 = x_26;
x_16 = x_50;
goto block_25;
}
else
{
lean_dec_ref(x_12);
x_15 = x_26;
x_16 = x_31;
goto block_25;
}
}
block_61:
{
uint8_t x_53; 
x_53 = l_List_isEmpty___redArg(x_7);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__4;
x_55 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__4(x_7, x_9);
x_56 = lean_array_mk(x_55);
x_57 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_54);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_9);
x_60 = l_List_appendTR___redArg(x_52, x_59);
x_26 = x_60;
goto block_51;
}
else
{
lean_dec(x_7);
x_26 = x_52;
goto block_51;
}
}
block_77:
{
if (lean_obj_tag(x_6) == 0)
{
x_52 = x_62;
goto block_61;
}
else
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_6);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_6, 0);
x_65 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5;
x_66 = l_Lean_JsonNumber_fromNat(x_64);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_66);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_6);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_9);
x_69 = l_List_appendTR___redArg(x_62, x_68);
x_52 = x_69;
goto block_61;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_70 = lean_ctor_get(x_6, 0);
lean_inc(x_70);
lean_dec(x_6);
x_71 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5;
x_72 = l_Lean_JsonNumber_fromNat(x_70);
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_9);
x_76 = l_List_appendTR___redArg(x_62, x_75);
x_52 = x_76;
goto block_61;
}
}
}
block_86:
{
if (lean_obj_tag(x_5) == 0)
{
x_62 = x_78;
goto block_77;
}
else
{
lean_object* x_79; lean_object* x_80; double x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_79 = lean_ctor_get(x_5, 0);
lean_inc(x_79);
lean_dec_ref(x_5);
x_80 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__6;
x_81 = lean_unbox_float(x_79);
lean_dec(x_79);
x_82 = l_Float_toJson(x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_9);
x_85 = l_List_appendTR___redArg(x_78, x_84);
x_62 = x_85;
goto block_77;
}
}
block_102:
{
if (lean_obj_tag(x_4) == 0)
{
x_78 = x_87;
goto block_86;
}
else
{
uint8_t x_88; 
x_88 = !lean_is_exclusive(x_4);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_4, 0);
x_90 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7;
x_91 = l_Lean_JsonNumber_fromNat(x_89);
lean_ctor_set_tag(x_4, 2);
lean_ctor_set(x_4, 0, x_91);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_4);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_9);
x_94 = l_List_appendTR___redArg(x_87, x_93);
x_78 = x_94;
goto block_86;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_95 = lean_ctor_get(x_4, 0);
lean_inc(x_95);
lean_dec(x_4);
x_96 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7;
x_97 = l_Lean_JsonNumber_fromNat(x_95);
x_98 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_9);
x_101 = l_List_appendTR___redArg(x_87, x_100);
x_78 = x_101;
goto block_86;
}
}
}
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("STOP", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MAX_TOKENS", 10, 10);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SAFETY", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RECITATION", 10, 10);
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__1;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__2;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__3;
x_9 = lean_string_dec_eq(x_1, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 4;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 3;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 3;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason(x_1);
lean_dec_ref(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2;
x_7 = l_AiSdk_Json_getFieldStr(x_4, x_6);
if (lean_obj_tag(x_7) == 0)
{
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_array_push(x_2, x_9);
x_1 = x_5;
x_2 = x_10;
goto _start;
}
}
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0___closed__0;
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("candidatesTokenCount", 20, 20);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to parse JSON: ", 22, 22);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("usageMetadata", 13, 13);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("promptTokenCount", 16, 16);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("finishReason", 12, 12);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("error", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("content", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__8;
x_2 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No candidates in response", 25, 25);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__10;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("candidates", 10, 10);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("message", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unknown error", 13, 13);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_20; lean_object* x_25; 
x_25 = l_Lean_Json_parse(x_1);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_25, 0, x_30);
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_25, 0);
lean_inc(x_31);
lean_dec(x_25);
x_32 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1;
x_33 = lean_string_append(x_32, x_31);
lean_dec(x_31);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_61; lean_object* x_62; 
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec_ref(x_25);
x_61 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__6;
lean_inc(x_36);
x_62 = l_AiSdk_Json_getField(x_36, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_75; lean_object* x_76; 
x_75 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__13;
lean_inc(x_36);
x_76 = l_AiSdk_Json_getFieldArr(x_36, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_box(0);
x_78 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0(x_77);
x_63 = x_78;
goto block_74;
}
else
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec_ref(x_76);
x_63 = x_79;
goto block_74;
}
block_74:
{
uint8_t x_64; 
x_64 = l_Array_isEmpty___redArg(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_box(0);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_array_get(x_65, x_63, x_66);
lean_dec_ref(x_63);
x_68 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__9;
lean_inc(x_67);
x_69 = l_AiSdk_Json_getPathArr(x_67, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_box(0);
x_71 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0(x_70);
x_48 = x_67;
x_49 = x_66;
x_50 = x_71;
goto block_60;
}
else
{
lean_object* x_72; 
x_72 = lean_ctor_get(x_69, 0);
lean_inc(x_72);
lean_dec_ref(x_69);
x_48 = x_67;
x_49 = x_66;
x_50 = x_72;
goto block_60;
}
}
else
{
lean_object* x_73; 
lean_dec_ref(x_63);
lean_dec(x_36);
x_73 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__12;
return x_73;
}
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_36);
x_80 = lean_ctor_get(x_62, 0);
lean_inc(x_80);
lean_dec_ref(x_62);
x_81 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__14;
x_82 = l_AiSdk_Json_getFieldStr(x_80, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; 
x_83 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__15;
x_20 = x_83;
goto block_24;
}
else
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec_ref(x_82);
x_20 = x_84;
goto block_24;
}
}
block_47:
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason(x_39);
lean_dec_ref(x_39);
x_41 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__2;
x_42 = l_AiSdk_Json_getField(x_36, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_inc(x_38);
x_10 = x_42;
x_11 = x_37;
x_12 = x_40;
x_13 = x_38;
x_14 = x_38;
goto block_19;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__3;
x_45 = l_AiSdk_Json_getFieldNat(x_43, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_inc(x_38);
x_10 = x_42;
x_11 = x_37;
x_12 = x_40;
x_13 = x_38;
x_14 = x_38;
goto block_19;
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec_ref(x_45);
x_10 = x_42;
x_11 = x_37;
x_12 = x_40;
x_13 = x_38;
x_14 = x_46;
goto block_19;
}
}
}
block_60:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__4;
x_52 = lean_array_to_list(x_50);
x_53 = lean_mk_empty_array_with_capacity(x_49);
x_54 = l_List_filterMapTR_go___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse_spec__0(x_52, x_53);
x_55 = l_String_intercalate(x_51, x_54);
x_56 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__5;
x_57 = l_AiSdk_Json_getFieldStr(x_48, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; 
x_58 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0;
x_37 = x_55;
x_38 = x_49;
x_39 = x_58;
goto block_47;
}
else
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec_ref(x_57);
x_37 = x_55;
x_38 = x_49;
x_39 = x_59;
goto block_47;
}
}
}
block_9:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*2, x_3);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
block_19:
{
if (lean_obj_tag(x_10) == 0)
{
x_2 = x_11;
x_3 = x_12;
x_4 = x_14;
x_5 = x_13;
goto block_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec_ref(x_10);
x_16 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__0;
x_17 = l_AiSdk_Json_getFieldNat(x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
x_2 = x_11;
x_3 = x_12;
x_4 = x_14;
x_5 = x_13;
goto block_9;
}
else
{
lean_object* x_18; 
lean_dec(x_13);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec_ref(x_17);
x_2 = x_11;
x_3 = x_12;
x_4 = x_14;
x_5 = x_18;
goto block_9;
}
}
}
block_24:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(400u);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://generativelanguage.googleapis.com/v1beta/models/", 56, 56);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(":generateContent\?key=", 21, 21);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to parse URL", 19, 19);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__2;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(30000u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = 1;
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_3);
return x_5;
}
}
static lean_object* _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HTTP error: ", 12, 12);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__0;
x_7 = lean_string_append(x_6, x_2);
x_8 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = lean_string_append(x_9, x_1);
x_11 = l_HttpClient_Url_parse(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec_ref(x_4);
lean_dec(x_3);
x_12 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__4;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5;
x_17 = l_HttpClient_Client_new(x_16, x_5);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec_ref(x_17);
x_20 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson(x_3, x_4);
x_21 = l_Lean_Json_compress(x_20);
x_22 = l_HttpClient_Request_post(x_15);
x_23 = l_HttpClient_Request_withJson(x_22, x_21);
x_24 = l_HttpClient_Client_send(x_18, x_23, x_19);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6;
x_31 = l_HttpClient_HttpError_toString(x_29);
lean_dec(x_29);
x_32 = lean_string_append(x_30, x_31);
lean_dec_ref(x_31);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_32);
lean_ctor_set(x_25, 0, x_11);
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6;
x_35 = l_HttpClient_HttpError_toString(x_33);
lean_dec(x_33);
x_36 = lean_string_append(x_34, x_35);
lean_dec_ref(x_35);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_36);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_11);
lean_ctor_set(x_24, 0, x_37);
return x_24;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_38 = lean_ctor_get(x_24, 1);
lean_inc(x_38);
lean_dec(x_24);
x_39 = lean_ctor_get(x_25, 0);
lean_inc(x_39);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 x_40 = x_25;
} else {
 lean_dec_ref(x_25);
 x_40 = lean_box(0);
}
x_41 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6;
x_42 = l_HttpClient_HttpError_toString(x_39);
lean_dec(x_39);
x_43 = lean_string_append(x_41, x_42);
lean_dec_ref(x_42);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_43);
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(0, 1, 0);
} else {
 x_44 = x_40;
}
lean_ctor_set(x_44, 0, x_11);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_38);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_free_object(x_11);
x_46 = !lean_is_exclusive(x_25);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_24);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_48 = lean_ctor_get(x_25, 0);
x_49 = lean_ctor_get(x_24, 0);
lean_dec(x_49);
x_50 = lean_ctor_get(x_48, 0);
lean_inc_ref(x_50);
x_51 = lean_ctor_get(x_48, 2);
lean_inc_ref(x_51);
lean_dec(x_48);
x_52 = l_HttpClient_Status_isSuccess(x_50);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_50, 1);
lean_dec(x_54);
lean_ctor_set(x_50, 1, x_51);
lean_ctor_set_tag(x_25, 0);
lean_ctor_set(x_25, 0, x_50);
return x_24;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_50, 0);
lean_inc(x_55);
lean_dec(x_50);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_51);
lean_ctor_set_tag(x_25, 0);
lean_ctor_set(x_25, 0, x_56);
return x_24;
}
}
else
{
lean_object* x_57; 
lean_dec_ref(x_50);
lean_free_object(x_25);
x_57 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse(x_51);
lean_ctor_set(x_24, 0, x_57);
return x_24;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_25, 0);
x_59 = lean_ctor_get(x_24, 1);
lean_inc(x_59);
lean_dec(x_24);
x_60 = lean_ctor_get(x_58, 0);
lean_inc_ref(x_60);
x_61 = lean_ctor_get(x_58, 2);
lean_inc_ref(x_61);
lean_dec(x_58);
x_62 = l_HttpClient_Status_isSuccess(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_60, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_64 = x_60;
} else {
 lean_dec_ref(x_60);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_61);
lean_ctor_set_tag(x_25, 0);
lean_ctor_set(x_25, 0, x_65);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_25);
lean_ctor_set(x_66, 1, x_59);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec_ref(x_60);
lean_free_object(x_25);
x_67 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse(x_61);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_59);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_69 = lean_ctor_get(x_25, 0);
lean_inc(x_69);
lean_dec(x_25);
x_70 = lean_ctor_get(x_24, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_71 = x_24;
} else {
 lean_dec_ref(x_24);
 x_71 = lean_box(0);
}
x_72 = lean_ctor_get(x_69, 0);
lean_inc_ref(x_72);
x_73 = lean_ctor_get(x_69, 2);
lean_inc_ref(x_73);
lean_dec(x_69);
x_74 = l_HttpClient_Status_isSuccess(x_72);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_72, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_76 = x_72;
} else {
 lean_dec_ref(x_72);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_73);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
if (lean_is_scalar(x_71)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_71;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_70);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_dec_ref(x_72);
x_80 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse(x_73);
if (lean_is_scalar(x_71)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_71;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_70);
return x_81;
}
}
}
}
else
{
uint8_t x_82; 
lean_free_object(x_11);
x_82 = !lean_is_exclusive(x_24);
if (x_82 == 0)
{
return x_24;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_24, 0);
x_84 = lean_ctor_get(x_24, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_24);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_86 = lean_ctor_get(x_11, 0);
lean_inc(x_86);
lean_dec(x_11);
x_87 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5;
x_88 = l_HttpClient_Client_new(x_87, x_5);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec_ref(x_88);
x_91 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson(x_3, x_4);
x_92 = l_Lean_Json_compress(x_91);
x_93 = l_HttpClient_Request_post(x_86);
x_94 = l_HttpClient_Request_withJson(x_93, x_92);
x_95 = l_HttpClient_Client_send(x_89, x_94, x_90);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_96, 0);
lean_inc(x_99);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 x_100 = x_96;
} else {
 lean_dec_ref(x_96);
 x_100 = lean_box(0);
}
x_101 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6;
x_102 = l_HttpClient_HttpError_toString(x_99);
lean_dec(x_99);
x_103 = lean_string_append(x_101, x_102);
lean_dec_ref(x_102);
x_104 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_104, 0, x_103);
if (lean_is_scalar(x_100)) {
 x_105 = lean_alloc_ctor(0, 1, 0);
} else {
 x_105 = x_100;
}
lean_ctor_set(x_105, 0, x_104);
if (lean_is_scalar(x_98)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_98;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_97);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_107 = lean_ctor_get(x_96, 0);
lean_inc(x_107);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 x_108 = x_96;
} else {
 lean_dec_ref(x_96);
 x_108 = lean_box(0);
}
x_109 = lean_ctor_get(x_95, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_110 = x_95;
} else {
 lean_dec_ref(x_95);
 x_110 = lean_box(0);
}
x_111 = lean_ctor_get(x_107, 0);
lean_inc_ref(x_111);
x_112 = lean_ctor_get(x_107, 2);
lean_inc_ref(x_112);
lean_dec(x_107);
x_113 = l_HttpClient_Status_isSuccess(x_111);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_ctor_get(x_111, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_115 = x_111;
} else {
 lean_dec_ref(x_111);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_112);
if (lean_is_scalar(x_108)) {
 x_117 = lean_alloc_ctor(0, 1, 0);
} else {
 x_117 = x_108;
 lean_ctor_set_tag(x_117, 0);
}
lean_ctor_set(x_117, 0, x_116);
if (lean_is_scalar(x_110)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_110;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_109);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; 
lean_dec_ref(x_111);
lean_dec(x_108);
x_119 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse(x_112);
if (lean_is_scalar(x_110)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_110;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_109);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_95, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_95, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_123 = x_95;
} else {
 lean_dec_ref(x_95);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
static lean_object* _init_l_AiSdk_Google_createModel___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("google", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Google_createModel(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_AiSdk_Google_createModel___closed__0;
lean_inc_ref(x_2);
x_4 = lean_alloc_closure((void*)(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Google_create(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_AiSdk_ApiConfig_load(x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_AiSdk_ApiConfig_getGoogleKey(x_12);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec_ref(x_1);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
}
else
{
lean_object* x_18; 
lean_free_object(x_10);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec_ref(x_14);
x_4 = x_18;
x_5 = x_13;
goto block_9;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = l_AiSdk_ApiConfig_getGoogleKey(x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec_ref(x_1);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_23 = x_21;
} else {
 lean_dec_ref(x_21);
 x_23 = lean_box(0);
}
if (lean_is_scalar(x_23)) {
 x_24 = lean_alloc_ctor(0, 1, 0);
} else {
 x_24 = x_23;
}
lean_ctor_set(x_24, 0, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
lean_dec_ref(x_21);
x_4 = x_26;
x_5 = x_20;
goto block_9;
}
}
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec_ref(x_2);
x_4 = x_27;
x_5 = x_3;
goto block_9;
}
block_9:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_AiSdk_Google_createModel(x_4, x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Types(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Json(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Provider(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Config(uint8_t builtin, lean_object*);
lean_object* initialize_HttpClient(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AiSdk_Providers_Google(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Json(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Provider(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Config(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_HttpClient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AiSdk_Google_baseUrl___closed__0 = _init_l_AiSdk_Google_baseUrl___closed__0();
lean_mark_persistent(l_AiSdk_Google_baseUrl___closed__0);
l_AiSdk_Google_baseUrl = _init_l_AiSdk_Google_baseUrl();
lean_mark_persistent(l_AiSdk_Google_baseUrl);
l_AiSdk_Google_defaultModel___closed__0 = _init_l_AiSdk_Google_defaultModel___closed__0();
lean_mark_persistent(l_AiSdk_Google_defaultModel___closed__0);
l_AiSdk_Google_defaultModel = _init_l_AiSdk_Google_defaultModel();
lean_mark_persistent(l_AiSdk_Google_defaultModel);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__0 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__0);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__1 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_roleToString___closed__1);
l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0 = _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0();
lean_mark_persistent(l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__0);
l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1 = _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__1);
l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2 = _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2();
lean_mark_persistent(l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__2);
l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3 = _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3();
lean_mark_persistent(l_List_mapTR_loop___at_____private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson_spec__3___closed__3);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__0 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__0);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__1 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__1);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__2 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__2);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__3 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__3);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__4 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__4();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__4);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__5);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__6 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__6();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__6);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__7);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__8 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__8();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_buildRequestJson___closed__8);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__0);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__1 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__1);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__2 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__2);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__3 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseFinishReason___closed__3);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0___closed__0 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___lam__0___closed__0);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__0 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__0);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__1);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__2 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__2);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__3 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__3);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__4 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__4();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__4);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__5 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__5();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__5);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__6 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__6();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__6);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__7 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__7();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__7);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__8 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__8();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__8);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__9 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__9();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__9);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__10 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__10();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__10);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__11 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__11();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__11);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__12 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__12();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__12);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__13 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__13();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__13);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__14 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__14();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__14);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__15 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__15();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_parseResponse___closed__15);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__0 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__0);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__1 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__1);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__2 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__2);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__3 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__3);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__4 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__4();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__4);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__5);
l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6 = _init_l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6();
lean_mark_persistent(l___private_AiSdk_Providers_Google_0__AiSdk_Google_makeGenerateFn___closed__6);
l_AiSdk_Google_createModel___closed__0 = _init_l_AiSdk_Google_createModel___closed__0();
lean_mark_persistent(l_AiSdk_Google_createModel___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
