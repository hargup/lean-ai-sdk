// Lean compiler output
// Module: AiSdk.Providers.OpenAI
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
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__13;
lean_object* l_Lean_Json_compress(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_AiSdk_Json_getFieldNat(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__1;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_baseUrl;
uint8_t l_Array_isEmpty___redArg(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__14;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__2;
lean_object* l_AiSdk_Json_getFieldStr(lean_object*, lean_object*);
lean_object* l_AiSdk_ApiConfig_getOpenAIKey(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_create(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__15;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8;
lean_object* l_HttpClient_Request_withHeader(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__5;
lean_object* l_AiSdk_Json_getFieldArr(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_defaultModel;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__2;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__1(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__0;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__0;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString(uint8_t);
lean_object* l_AiSdk_Json_getField(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__3;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__12;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_createModel(lean_object*, lean_object*);
lean_object* l_HttpClient_Client_send(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__3;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__9;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4;
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__2;
lean_object* l_HttpClient_Url_parse(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__8;
static lean_object* l_AiSdk_OpenAI_defaultModel___closed__0;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__6;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__0;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___boxed(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__10;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_HttpClient_Client_new(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__7;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__11;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__4;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
lean_object* lean_array_mk(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__0;
lean_object* l_HttpClient_Request_withJson(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_createModel___closed__0;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___boxed(lean_object*);
lean_object* l_AiSdk_Json_getPathStr(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1;
lean_object* l_HttpClient_HttpError_toString(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0;
lean_object* l_HttpClient_Request_post(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
static lean_object* l_AiSdk_OpenAI_baseUrl___closed__0;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__1;
static lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1;
lean_object* l_Float_toJson(double);
uint8_t l_HttpClient_Status_isSuccess(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__1;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2;
lean_object* l_AiSdk_ApiConfig_load(lean_object*);
static lean_object* _init_l_AiSdk_OpenAI_baseUrl___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://api.openai.com/v1", 25, 25);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_baseUrl() {
_start:
{
lean_object* x_1; 
x_1 = l_AiSdk_OpenAI_baseUrl___closed__0;
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_defaultModel___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gpt-4o", 6, 6);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_defaultModel() {
_start:
{
lean_object* x_1; 
x_1 = l_AiSdk_OpenAI_defaultModel___closed__0;
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("system", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("user", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assistant", 9, 9);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__0;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__1;
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__2;
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString(x_2);
return x_3;
}
}
static lean_object* _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("role", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("content", 7, 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_8);
lean_dec(x_5);
x_9 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0;
x_10 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString(x_7);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1;
x_14 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_14, 0, x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_box(0);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_1);
x_18 = l_Lean_Json_mkObj(x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_2);
x_1 = x_6;
x_2 = x_19;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_ctor_get_uint8(x_21, sizeof(void*)*1);
x_24 = lean_ctor_get(x_21, 0);
lean_inc_ref(x_24);
lean_dec(x_21);
x_25 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0;
x_26 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString(x_23);
x_27 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1;
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_24);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_Json_mkObj(x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
x_1 = x_22;
x_2 = x_36;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__1(lean_object* x_1, lean_object* x_2) {
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
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("model", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("messages", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("stop", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("top_p", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("max_tokens", 10, 10);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("temperature", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_29; lean_object* x_38; lean_object* x_54; lean_object* x_55; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 4);
lean_inc(x_7);
lean_dec_ref(x_3);
x_8 = lean_box(0);
x_9 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0(x_2, x_8);
x_10 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__0;
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__1;
x_14 = lean_array_mk(x_9);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_16);
lean_ctor_set(x_54, 1, x_8);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_12);
lean_ctor_set(x_55, 1, x_54);
if (lean_obj_tag(x_4) == 0)
{
x_38 = x_55;
goto block_53;
}
else
{
lean_object* x_56; lean_object* x_57; double x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_56 = lean_ctor_get(x_4, 0);
lean_inc(x_56);
lean_dec_ref(x_4);
x_57 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__5;
x_58 = lean_unbox_float(x_56);
lean_dec(x_56);
x_59 = l_Float_toJson(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_8);
x_62 = l_List_appendTR___redArg(x_55, x_61);
x_38 = x_62;
goto block_53;
}
block_28:
{
uint8_t x_18; 
x_18 = l_List_isEmpty___redArg(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2;
x_20 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__1(x_7, x_8);
x_21 = lean_array_mk(x_20);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_8);
x_25 = l_List_appendTR___redArg(x_17, x_24);
x_26 = l_Lean_Json_mkObj(x_25);
return x_26;
}
else
{
lean_object* x_27; 
lean_dec(x_7);
x_27 = l_Lean_Json_mkObj(x_17);
return x_27;
}
}
block_37:
{
if (lean_obj_tag(x_6) == 0)
{
x_17 = x_29;
goto block_28;
}
else
{
lean_object* x_30; lean_object* x_31; double x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_6, 0);
lean_inc(x_30);
lean_dec_ref(x_6);
x_31 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__3;
x_32 = lean_unbox_float(x_30);
lean_dec(x_30);
x_33 = l_Float_toJson(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_8);
x_36 = l_List_appendTR___redArg(x_29, x_35);
x_17 = x_36;
goto block_28;
}
}
block_53:
{
if (lean_obj_tag(x_5) == 0)
{
x_29 = x_38;
goto block_37;
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_5);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_5, 0);
x_41 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4;
x_42 = l_Lean_JsonNumber_fromNat(x_40);
lean_ctor_set_tag(x_5, 2);
lean_ctor_set(x_5, 0, x_42);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_5);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_8);
x_45 = l_List_appendTR___redArg(x_38, x_44);
x_29 = x_45;
goto block_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_46 = lean_ctor_get(x_5, 0);
lean_inc(x_46);
lean_dec(x_5);
x_47 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4;
x_48 = l_Lean_JsonNumber_fromNat(x_46);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_8);
x_52 = l_List_appendTR___redArg(x_38, x_51);
x_29 = x_52;
goto block_37;
}
}
}
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("length", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tool_calls", 10, 10);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("content_filter", 14, 14);
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__0;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__1;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__2;
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
x_12 = 2;
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
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason(x_1);
lean_dec_ref(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("completion_tokens", 17, 17);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to parse JSON: ", 22, 22);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("usage", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("prompt_tokens", 13, 13);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("finish_reason", 13, 13);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("message", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__6;
x_2 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No choices in response", 22, 22);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__9;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__10;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("error", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("choices", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unknown error", 13, 13);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_25; 
x_25 = l_Lean_Json_parse(x_1);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1;
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
x_32 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1;
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
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_56; lean_object* x_67; lean_object* x_68; 
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec_ref(x_25);
x_67 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__12;
lean_inc(x_36);
x_68 = l_AiSdk_Json_getField(x_36, x_67);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__13;
lean_inc(x_36);
x_70 = l_AiSdk_Json_getFieldArr(x_36, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; 
x_71 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__14;
x_56 = x_71;
goto block_66;
}
else
{
lean_object* x_72; 
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
lean_dec_ref(x_70);
x_56 = x_72;
goto block_66;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_36);
x_73 = lean_ctor_get(x_68, 0);
lean_inc(x_73);
lean_dec_ref(x_68);
x_74 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5;
x_75 = l_AiSdk_Json_getFieldStr(x_73, x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
x_76 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__15;
x_2 = x_76;
goto block_6;
}
else
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_75, 0);
lean_inc(x_77);
lean_dec_ref(x_75);
x_2 = x_77;
goto block_6;
}
}
block_47:
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason(x_39);
lean_dec_ref(x_39);
x_41 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__2;
x_42 = l_AiSdk_Json_getField(x_36, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_inc(x_38);
x_15 = x_42;
x_16 = x_37;
x_17 = x_38;
x_18 = x_40;
x_19 = x_38;
goto block_24;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__3;
x_45 = l_AiSdk_Json_getFieldNat(x_43, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_inc(x_38);
x_15 = x_42;
x_16 = x_37;
x_17 = x_38;
x_18 = x_40;
x_19 = x_38;
goto block_24;
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec_ref(x_45);
x_15 = x_42;
x_16 = x_37;
x_17 = x_38;
x_18 = x_40;
x_19 = x_46;
goto block_24;
}
}
}
block_55:
{
lean_object* x_51; lean_object* x_52; 
x_51 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__4;
x_52 = l_AiSdk_Json_getFieldStr(x_48, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; 
x_53 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2;
x_37 = x_50;
x_38 = x_49;
x_39 = x_53;
goto block_47;
}
else
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
lean_dec_ref(x_52);
x_37 = x_50;
x_38 = x_49;
x_39 = x_54;
goto block_47;
}
}
block_66:
{
uint8_t x_57; 
x_57 = l_Array_isEmpty___redArg(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_box(0);
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_array_get(x_58, x_56, x_59);
lean_dec_ref(x_56);
x_61 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__7;
lean_inc(x_60);
x_62 = l_AiSdk_Json_getPathStr(x_60, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__8;
x_48 = x_60;
x_49 = x_59;
x_50 = x_63;
goto block_55;
}
else
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_62, 0);
lean_inc(x_64);
lean_dec_ref(x_62);
x_48 = x_60;
x_49 = x_59;
x_50 = x_64;
goto block_55;
}
}
else
{
lean_object* x_65; 
lean_dec_ref(x_56);
lean_dec(x_36);
x_65 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__11;
return x_65;
}
}
}
block_6:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(400u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
block_14:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_9);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
block_24:
{
if (lean_obj_tag(x_15) == 0)
{
x_7 = x_16;
x_8 = x_19;
x_9 = x_18;
x_10 = x_17;
goto block_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec_ref(x_15);
x_21 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__0;
x_22 = l_AiSdk_Json_getFieldNat(x_20, x_21);
if (lean_obj_tag(x_22) == 0)
{
x_7 = x_16;
x_8 = x_19;
x_9 = x_18;
x_10 = x_17;
goto block_14;
}
else
{
lean_object* x_23; 
lean_dec(x_17);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec_ref(x_22);
x_7 = x_16;
x_8 = x_19;
x_9 = x_18;
x_10 = x_23;
goto block_14;
}
}
}
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://api.openai.com/v1/chat/completions", 42, 42);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0;
x_2 = l_HttpClient_Url_parse(x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to parse URL", 19, 19);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5() {
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
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Authorization", 13, 13);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Bearer ", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HTTP error: ", 12, 12);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1;
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_7 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5;
x_12 = l_HttpClient_Client_new(x_11, x_5);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec_ref(x_12);
x_15 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson(x_2, x_3, x_4);
x_16 = l_Lean_Json_compress(x_15);
x_17 = l_HttpClient_Request_post(x_10);
x_18 = l_HttpClient_Request_withJson(x_17, x_16);
x_19 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6;
x_20 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7;
x_21 = lean_string_append(x_20, x_1);
x_22 = l_HttpClient_Request_withHeader(x_18, x_19, x_21);
x_23 = l_HttpClient_Client_send(x_13, x_22, x_14);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8;
x_30 = l_HttpClient_HttpError_toString(x_28);
lean_dec(x_28);
x_31 = lean_string_append(x_29, x_30);
lean_dec_ref(x_30);
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 0, x_31);
lean_ctor_set(x_24, 0, x_6);
return x_23;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8;
x_34 = l_HttpClient_HttpError_toString(x_32);
lean_dec(x_32);
x_35 = lean_string_append(x_33, x_34);
lean_dec_ref(x_34);
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 0, x_35);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_6);
lean_ctor_set(x_23, 0, x_36);
return x_23;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_23, 1);
lean_inc(x_37);
lean_dec(x_23);
x_38 = lean_ctor_get(x_24, 0);
lean_inc(x_38);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_39 = x_24;
} else {
 lean_dec_ref(x_24);
 x_39 = lean_box(0);
}
x_40 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8;
x_41 = l_HttpClient_HttpError_toString(x_38);
lean_dec(x_38);
x_42 = lean_string_append(x_40, x_41);
lean_dec_ref(x_41);
lean_ctor_set_tag(x_6, 3);
lean_ctor_set(x_6, 0, x_42);
if (lean_is_scalar(x_39)) {
 x_43 = lean_alloc_ctor(0, 1, 0);
} else {
 x_43 = x_39;
}
lean_ctor_set(x_43, 0, x_6);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_37);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_free_object(x_6);
x_45 = !lean_is_exclusive(x_24);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_23);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_24, 0);
x_48 = lean_ctor_get(x_23, 0);
lean_dec(x_48);
x_49 = lean_ctor_get(x_47, 0);
lean_inc_ref(x_49);
x_50 = lean_ctor_get(x_47, 2);
lean_inc_ref(x_50);
lean_dec(x_47);
x_51 = l_HttpClient_Status_isSuccess(x_49);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_49);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_49, 1);
lean_dec(x_53);
lean_ctor_set(x_49, 1, x_50);
lean_ctor_set_tag(x_24, 0);
lean_ctor_set(x_24, 0, x_49);
return x_23;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_49, 0);
lean_inc(x_54);
lean_dec(x_49);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_50);
lean_ctor_set_tag(x_24, 0);
lean_ctor_set(x_24, 0, x_55);
return x_23;
}
}
else
{
lean_object* x_56; 
lean_dec_ref(x_49);
lean_free_object(x_24);
x_56 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse(x_50);
lean_ctor_set(x_23, 0, x_56);
return x_23;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_57 = lean_ctor_get(x_24, 0);
x_58 = lean_ctor_get(x_23, 1);
lean_inc(x_58);
lean_dec(x_23);
x_59 = lean_ctor_get(x_57, 0);
lean_inc_ref(x_59);
x_60 = lean_ctor_get(x_57, 2);
lean_inc_ref(x_60);
lean_dec(x_57);
x_61 = l_HttpClient_Status_isSuccess(x_59);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_63 = x_59;
} else {
 lean_dec_ref(x_59);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_60);
lean_ctor_set_tag(x_24, 0);
lean_ctor_set(x_24, 0, x_64);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_24);
lean_ctor_set(x_65, 1, x_58);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec_ref(x_59);
lean_free_object(x_24);
x_66 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse(x_60);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_58);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_68 = lean_ctor_get(x_24, 0);
lean_inc(x_68);
lean_dec(x_24);
x_69 = lean_ctor_get(x_23, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_70 = x_23;
} else {
 lean_dec_ref(x_23);
 x_70 = lean_box(0);
}
x_71 = lean_ctor_get(x_68, 0);
lean_inc_ref(x_71);
x_72 = lean_ctor_get(x_68, 2);
lean_inc_ref(x_72);
lean_dec(x_68);
x_73 = l_HttpClient_Status_isSuccess(x_71);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_71, 0);
lean_inc(x_74);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_75 = x_71;
} else {
 lean_dec_ref(x_71);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_72);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
if (lean_is_scalar(x_70)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_70;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_69);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec_ref(x_71);
x_79 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse(x_72);
if (lean_is_scalar(x_70)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_70;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_69);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_free_object(x_6);
x_81 = !lean_is_exclusive(x_23);
if (x_81 == 0)
{
return x_23;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_23, 0);
x_83 = lean_ctor_get(x_23, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_23);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_85 = lean_ctor_get(x_6, 0);
lean_inc(x_85);
lean_dec(x_6);
x_86 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5;
x_87 = l_HttpClient_Client_new(x_86, x_5);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec_ref(x_87);
x_90 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson(x_2, x_3, x_4);
x_91 = l_Lean_Json_compress(x_90);
x_92 = l_HttpClient_Request_post(x_85);
x_93 = l_HttpClient_Request_withJson(x_92, x_91);
x_94 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6;
x_95 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7;
x_96 = lean_string_append(x_95, x_1);
x_97 = l_HttpClient_Request_withHeader(x_93, x_94, x_96);
x_98 = l_HttpClient_Client_send(x_88, x_97, x_89);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_101 = x_98;
} else {
 lean_dec_ref(x_98);
 x_101 = lean_box(0);
}
x_102 = lean_ctor_get(x_99, 0);
lean_inc(x_102);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 x_103 = x_99;
} else {
 lean_dec_ref(x_99);
 x_103 = lean_box(0);
}
x_104 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8;
x_105 = l_HttpClient_HttpError_toString(x_102);
lean_dec(x_102);
x_106 = lean_string_append(x_104, x_105);
lean_dec_ref(x_105);
x_107 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_107, 0, x_106);
if (lean_is_scalar(x_103)) {
 x_108 = lean_alloc_ctor(0, 1, 0);
} else {
 x_108 = x_103;
}
lean_ctor_set(x_108, 0, x_107);
if (lean_is_scalar(x_101)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_101;
}
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_100);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_110 = lean_ctor_get(x_99, 0);
lean_inc(x_110);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 x_111 = x_99;
} else {
 lean_dec_ref(x_99);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_98, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_113 = x_98;
} else {
 lean_dec_ref(x_98);
 x_113 = lean_box(0);
}
x_114 = lean_ctor_get(x_110, 0);
lean_inc_ref(x_114);
x_115 = lean_ctor_get(x_110, 2);
lean_inc_ref(x_115);
lean_dec(x_110);
x_116 = l_HttpClient_Status_isSuccess(x_114);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_117 = lean_ctor_get(x_114, 0);
lean_inc(x_117);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_118 = x_114;
} else {
 lean_dec_ref(x_114);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_115);
if (lean_is_scalar(x_111)) {
 x_120 = lean_alloc_ctor(0, 1, 0);
} else {
 x_120 = x_111;
 lean_ctor_set_tag(x_120, 0);
}
lean_ctor_set(x_120, 0, x_119);
if (lean_is_scalar(x_113)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_113;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_112);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec_ref(x_114);
lean_dec(x_111);
x_122 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse(x_115);
if (lean_is_scalar(x_113)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_113;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_112);
return x_123;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = lean_ctor_get(x_98, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_98, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_126 = x_98;
} else {
 lean_dec_ref(x_98);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_1);
return x_6;
}
}
static lean_object* _init_l_AiSdk_OpenAI_createModel___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("openai", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_createModel(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_AiSdk_OpenAI_createModel___closed__0;
lean_inc_ref(x_2);
x_4 = lean_alloc_closure((void*)(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_create(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_14 = l_AiSdk_ApiConfig_getOpenAIKey(x_12);
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
x_21 = l_AiSdk_ApiConfig_getOpenAIKey(x_19);
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
x_6 = l_AiSdk_OpenAI_createModel(x_4, x_1);
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
LEAN_EXPORT lean_object* initialize_AiSdk_Providers_OpenAI(uint8_t builtin, lean_object* w) {
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
l_AiSdk_OpenAI_baseUrl___closed__0 = _init_l_AiSdk_OpenAI_baseUrl___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_baseUrl___closed__0);
l_AiSdk_OpenAI_baseUrl = _init_l_AiSdk_OpenAI_baseUrl();
lean_mark_persistent(l_AiSdk_OpenAI_baseUrl);
l_AiSdk_OpenAI_defaultModel___closed__0 = _init_l_AiSdk_OpenAI_defaultModel___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_defaultModel___closed__0);
l_AiSdk_OpenAI_defaultModel = _init_l_AiSdk_OpenAI_defaultModel();
lean_mark_persistent(l_AiSdk_OpenAI_defaultModel);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__0 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__0);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__1 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__1);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__2 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_roleToString___closed__2);
l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0 = _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0();
lean_mark_persistent(l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__0);
l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1 = _init_l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson_spec__0___closed__1);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__0 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__0);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__1 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__1);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__2);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__3 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__3);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__4);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__5 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__5();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_buildRequestJson___closed__5);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__0 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__0);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__1 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__1);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__2 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseFinishReason___closed__2);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__0 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__0);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__1);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__2 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__2);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__3 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__3);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__4 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__4();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__4);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__5);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__6 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__6();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__6);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__7 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__7();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__7);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__8 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__8();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__8);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__9 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__9();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__9);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__10 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__10();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__10);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__11 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__11();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__11);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__12 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__12();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__12);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__13 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__13();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__13);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__14 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__14();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__14);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__15 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__15();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_parseResponse___closed__15);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__5);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__6);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__7);
l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8 = _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8();
lean_mark_persistent(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__8);
l_AiSdk_OpenAI_createModel___closed__0 = _init_l_AiSdk_OpenAI_createModel___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_createModel___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
