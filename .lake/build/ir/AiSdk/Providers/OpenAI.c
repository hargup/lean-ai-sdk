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
static lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_toolToJson___closed__2;
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_constructRequest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_toolToJson___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__1;
static lean_object* l_AiSdk_OpenAI_Core_toolToJson___closed__5;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__8;
lean_object* l_AiSdk_Json_getFieldNat(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_baseUrl;
uint8_t l_Array_isEmpty___redArg(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__8;
static lean_object* l_AiSdk_OpenAI_Core_roleToString___closed__2;
lean_object* l_AiSdk_Json_getFieldStr(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseFinishReason___closed__2;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__4;
lean_object* l_AiSdk_ApiConfig_getOpenAIKey(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_create(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_parseFinishReason___boxed(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__6;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__11;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseToolCalls___closed__3;
static lean_object* l_AiSdk_OpenAI_Core_toolToJson___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_parseToolCalls___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__7;
lean_object* l_HttpClient_Request_withHeader(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_AiSdk_OpenAI_Core_parseFinishReason(lean_object*);
lean_object* l_AiSdk_Json_getFieldArr(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_toolToJson___closed__4;
uint8_t l_List_isEmpty___redArg(lean_object*);
extern lean_object* l_AiSdk_instInhabitedContentPart_default;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_roleToString___boxed(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_defaultModel;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__0(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__5;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__15;
static lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__1;
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* l_AiSdk_Json_getField(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__3;
LEAN_EXPORT uint8_t l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__12;
static lean_object* l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_roleToString(uint8_t);
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__9;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1(lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__6;
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseToolCalls___closed__1;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_createModel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__5(lean_object*, lean_object*);
lean_object* l_HttpClient_Client_send(lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__14;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_parseResponse(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_buildRequestJson(lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_toolToJson___closed__1;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__3;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__11;
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_parseFinishReason___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__6;
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_roleToString___closed__0;
static lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5;
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_parseToolCalls(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__3;
lean_object* l_HttpClient_Url_parse(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__2;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_contentPartToJson(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__4;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__0;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__3;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__7;
static lean_object* l_AiSdk_OpenAI_defaultModel___closed__0;
LEAN_EXPORT lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_parseFinishReason___closed__1;
static lean_object* l_AiSdk_OpenAI_Core_roleToString___closed__1;
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__5;
static lean_object* l_AiSdk_OpenAI_Core_toolToJson___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__2;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__9;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__2;
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_toolToJson(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__1;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__7;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__13;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3;
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__1;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__1;
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_constructRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_contentPartToJson___closed__5;
lean_object* l_HttpClient_Client_new(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__5;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__13;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
lean_object* lean_array_mk(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__9;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__12;
static lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__2;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__10;
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__6;
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__8;
lean_object* l_AiSdk_Json_getPathStr(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__10;
lean_object* l_AiSdk_Json_getPathArr(lean_object*, lean_object*);
lean_object* l_HttpClient_HttpError_toString(lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__4;
LEAN_EXPORT lean_object* l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__1;
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0;
lean_object* l_HttpClient_Request_post(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
static lean_object* l_AiSdk_OpenAI_baseUrl___closed__0;
static lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_buildRequestJson___closed__4;
static lean_object* l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__0;
static lean_object* l_AiSdk_OpenAI_Core_parseToolCalls___closed__2;
LEAN_EXPORT lean_object* l_List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2(lean_object*, lean_object*);
lean_object* l_Float_toJson(double);
static lean_object* l_AiSdk_OpenAI_Core_parseResponse___closed__2;
uint8_t l_HttpClient_Status_isSuccess(lean_object*);
static lean_object* l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2;
lean_object* l_HttpClient_Request_withBody(lean_object*, lean_object*);
static lean_object* l_AiSdk_OpenAI_Core_constructRequest___closed__7;
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
static lean_object* _init_l_AiSdk_OpenAI_Core_roleToString___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("system", 6, 6);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_roleToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("user", 4, 4);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_roleToString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assistant", 9, 9);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_roleToString(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_AiSdk_OpenAI_Core_roleToString___closed__0;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_AiSdk_OpenAI_Core_roleToString___closed__1;
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = l_AiSdk_OpenAI_Core_roleToString___closed__2;
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_roleToString___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l_AiSdk_OpenAI_Core_roleToString(x_2);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("type", 4, 4);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("text", 4, 4);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__2;
x_2 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("image_url", 9, 9);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__5;
x_2 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("url", 3, 3);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("data:", 5, 5);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(";base64,", 8, 8);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_contentPartToJson(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__1;
x_4 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__3;
lean_ctor_set_tag(x_1, 3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Lean_Json_mkObj(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__1;
x_12 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__3;
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Json_mkObj(x_17);
return x_18;
}
}
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__4;
x_23 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__6;
x_24 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__7;
x_25 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__8;
x_26 = lean_string_append(x_25, x_21);
lean_dec_ref(x_21);
x_27 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__9;
x_28 = lean_string_append(x_26, x_27);
x_29 = lean_string_append(x_28, x_20);
lean_dec_ref(x_20);
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_30);
lean_ctor_set(x_1, 0, x_24);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Json_mkObj(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_31);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_23);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Json_mkObj(x_36);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_38 = lean_ctor_get(x_1, 0);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_1);
x_40 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__4;
x_41 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__6;
x_42 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__7;
x_43 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__8;
x_44 = lean_string_append(x_43, x_39);
lean_dec_ref(x_39);
x_45 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__9;
x_46 = lean_string_append(x_44, x_45);
x_47 = lean_string_append(x_46, x_38);
lean_dec_ref(x_38);
x_48 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_Json_mkObj(x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_40);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_41);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_Json_mkObj(x_55);
return x_56;
}
}
default: 
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_57);
lean_dec_ref(x_1);
x_58 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
}
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_toolToJson___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("function", 8, 8);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_toolToJson___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_toolToJson___closed__0;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_toolToJson___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_toolToJson___closed__1;
x_2 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_toolToJson___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("name", 4, 4);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_toolToJson___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("description", 11, 11);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_toolToJson___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("parameters", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_toolToJson(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = l_AiSdk_OpenAI_Core_toolToJson___closed__0;
x_6 = l_AiSdk_OpenAI_Core_toolToJson___closed__2;
x_7 = l_AiSdk_OpenAI_Core_toolToJson___closed__3;
lean_inc_ref(x_2);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_AiSdk_OpenAI_Core_toolToJson___closed__4;
lean_inc_ref(x_3);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_AiSdk_OpenAI_Core_toolToJson___closed__5;
lean_inc(x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_9);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Json_mkObj(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_6);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_Json_mkObj(x_22);
return x_23;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_toolToJson___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AiSdk_OpenAI_Core_toolToJson(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__0(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_AiSdk_OpenAI_Core_contentPartToJson(x_5);
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
x_11 = l_AiSdk_OpenAI_Core_contentPartToJson(x_9);
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
static lean_object* _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("role", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tool", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__2;
x_2 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tool_call_id", 12, 12);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("content", 7, 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_6 = x_1;
} else {
 lean_dec_ref(x_1);
 x_6 = lean_box(0);
}
if (lean_obj_tag(x_4) == 2)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
x_14 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3;
x_15 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4;
x_16 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set_tag(x_4, 0);
lean_ctor_set(x_4, 1, x_16);
lean_ctor_set(x_4, 0, x_15);
x_17 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5;
x_18 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_18, 0, x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Json_mkObj(x_23);
x_7 = x_24;
goto block_10;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_4, 0);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_4);
x_27 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3;
x_28 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4;
x_29 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_29, 0, x_25);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5;
x_32 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_32, 0, x_26);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Json_mkObj(x_37);
x_7 = x_38;
goto block_10;
}
}
else
{
lean_object* x_39; 
lean_dec(x_4);
x_39 = lean_box(0);
x_7 = x_39;
goto block_10;
}
block_10:
{
lean_object* x_8; 
if (lean_is_scalar(x_6)) {
 x_8 = lean_alloc_ctor(1, 2, 0);
} else {
 x_8 = x_6;
}
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
x_1 = x_5;
x_2 = x_8;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
static lean_object* _init_l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_22; uint8_t x_23; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_5 = x_2;
} else {
 lean_dec_ref(x_2);
 x_5 = lean_box(0);
}
x_6 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_22 = lean_alloc_closure((void*)(l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0___boxed), 1, 0);
lean_inc(x_7);
x_23 = l_List_all___redArg(x_7, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_List_lengthTR___redArg(x_7);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_box(0);
x_28 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__0(x_7, x_27);
x_29 = lean_array_mk(x_28);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_8 = x_30;
goto block_21;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_AiSdk_instInhabitedContentPart_default;
x_32 = l_List_head_x21___redArg(x_31, x_7);
lean_dec(x_7);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_ctor_set_tag(x_32, 3);
x_8 = x_32;
goto block_21;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_8 = x_35;
goto block_21;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_AiSdk_OpenAI_Core_contentPartToJson(x_32);
x_37 = l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0;
x_38 = lean_array_push(x_37, x_36);
x_39 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_8 = x_39;
goto block_21;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
x_40 = lean_box(0);
x_41 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1(x_7, x_40);
x_42 = lean_array_mk(x_41);
x_43 = l_Array_append___redArg(x_1, x_42);
lean_dec_ref(x_42);
x_1 = x_43;
x_2 = x_4;
goto _start;
}
block_21:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0;
x_10 = l_AiSdk_OpenAI_Core_roleToString(x_6);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
x_15 = lean_box(0);
if (lean_is_scalar(x_5)) {
 x_16 = lean_alloc_ctor(1, 2, 0);
} else {
 x_16 = x_5;
}
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Json_mkObj(x_17);
x_19 = lean_array_push(x_1, x_18);
x_1 = x_19;
x_2 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_22; uint8_t x_23; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_5 = x_2;
} else {
 lean_dec_ref(x_2);
 x_5 = lean_box(0);
}
x_6 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_22 = lean_alloc_closure((void*)(l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0___boxed), 1, 0);
lean_inc(x_7);
x_23 = l_List_all___redArg(x_7, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_List_lengthTR___redArg(x_7);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_box(0);
x_28 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__0(x_7, x_27);
x_29 = lean_array_mk(x_28);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_8 = x_30;
goto block_21;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_AiSdk_instInhabitedContentPart_default;
x_32 = l_List_head_x21___redArg(x_31, x_7);
lean_dec(x_7);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_ctor_set_tag(x_32, 3);
x_8 = x_32;
goto block_21;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_8 = x_35;
goto block_21;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_AiSdk_OpenAI_Core_contentPartToJson(x_32);
x_37 = l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0;
x_38 = lean_array_push(x_37, x_36);
x_39 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_8 = x_39;
goto block_21;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_5);
x_40 = lean_box(0);
x_41 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1(x_7, x_40);
x_42 = lean_array_mk(x_41);
x_43 = l_Array_append___redArg(x_1, x_42);
lean_dec_ref(x_42);
x_44 = l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2(x_43, x_4);
return x_44;
}
block_21:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0;
x_10 = l_AiSdk_OpenAI_Core_roleToString(x_6);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
x_15 = lean_box(0);
if (lean_is_scalar(x_5)) {
 x_16 = lean_alloc_ctor(1, 2, 0);
} else {
 x_16 = x_5;
}
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Json_mkObj(x_17);
x_19 = lean_array_push(x_1, x_18);
x_20 = l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2(x_19, x_4);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__4(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__5(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_AiSdk_OpenAI_Core_toolToJson(x_5);
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
x_11 = l_AiSdk_OpenAI_Core_toolToJson(x_9);
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
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("model", 5, 5);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("messages", 8, 8);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("response_format", 15, 15);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("json_object", 11, 11);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__5;
x_2 = l_AiSdk_OpenAI_Core_contentPartToJson___closed__0;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__7;
x_2 = l_Lean_Json_mkObj(x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__8;
x_2 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("stop", 4, 4);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("top_p", 5, 5);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("max_tokens", 10, 10);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("temperature", 11, 11);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tools", 5, 5);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_buildRequestJson(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_25; lean_object* x_35; lean_object* x_44; lean_object* x_60; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 4);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 5);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
lean_dec_ref(x_3);
x_10 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__0;
x_11 = l_List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2(x_10, x_2);
x_12 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__1;
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__2;
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_box(0);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_17);
lean_ctor_set(x_69, 1, x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_14);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_List_isEmpty___redArg(x_8);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_72 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__15;
x_73 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__5(x_8, x_18);
x_74 = lean_array_mk(x_73);
x_75 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_72);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_18);
x_78 = l_List_appendTR___redArg(x_70, x_77);
x_60 = x_78;
goto block_68;
}
else
{
lean_dec(x_8);
x_60 = x_70;
goto block_68;
}
block_24:
{
if (x_9 == 0)
{
lean_object* x_20; 
x_20 = l_Lean_Json_mkObj(x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__10;
x_22 = l_List_appendTR___redArg(x_19, x_21);
x_23 = l_Lean_Json_mkObj(x_22);
return x_23;
}
}
block_34:
{
uint8_t x_26; 
x_26 = l_List_isEmpty___redArg(x_7);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__11;
x_28 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__4(x_7, x_18);
x_29 = lean_array_mk(x_28);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_27);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_18);
x_33 = l_List_appendTR___redArg(x_25, x_32);
x_19 = x_33;
goto block_24;
}
else
{
lean_dec(x_7);
x_19 = x_25;
goto block_24;
}
}
block_43:
{
if (lean_obj_tag(x_6) == 0)
{
x_25 = x_35;
goto block_34;
}
else
{
lean_object* x_36; lean_object* x_37; double x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_6, 0);
lean_inc(x_36);
lean_dec_ref(x_6);
x_37 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__12;
x_38 = lean_unbox_float(x_36);
lean_dec(x_36);
x_39 = l_Float_toJson(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_18);
x_42 = l_List_appendTR___redArg(x_35, x_41);
x_25 = x_42;
goto block_34;
}
}
block_59:
{
if (lean_obj_tag(x_5) == 0)
{
x_35 = x_44;
goto block_43;
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_5);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_5, 0);
x_47 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__13;
x_48 = l_Lean_JsonNumber_fromNat(x_46);
lean_ctor_set_tag(x_5, 2);
lean_ctor_set(x_5, 0, x_48);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_5);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_18);
x_51 = l_List_appendTR___redArg(x_44, x_50);
x_35 = x_51;
goto block_43;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_5, 0);
lean_inc(x_52);
lean_dec(x_5);
x_53 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__13;
x_54 = l_Lean_JsonNumber_fromNat(x_52);
x_55 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_18);
x_58 = l_List_appendTR___redArg(x_44, x_57);
x_35 = x_58;
goto block_43;
}
}
}
block_68:
{
if (lean_obj_tag(x_4) == 0)
{
x_44 = x_60;
goto block_59;
}
else
{
lean_object* x_61; lean_object* x_62; double x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_4, 0);
lean_inc(x_61);
lean_dec_ref(x_4);
x_62 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__14;
x_63 = lean_unbox_float(x_61);
lean_dec(x_61);
x_64 = l_Float_toJson(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_18);
x_67 = l_List_appendTR___redArg(x_60, x_66);
x_44 = x_67;
goto block_59;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___lam__0(x_1);
lean_dec_ref(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("POST", 4, 4);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("https://api.openai.com/v1/chat/completions", 42, 42);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Authorization", 13, 13);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Bearer ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Content-Type", 12, 12);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("application/json", 16, 16);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_constructRequest___closed__5;
x_2 = l_AiSdk_OpenAI_Core_constructRequest___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_constructRequest___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_AiSdk_OpenAI_Core_constructRequest___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_constructRequest(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = l_AiSdk_OpenAI_Core_buildRequestJson(x_2, x_3, x_4);
x_6 = l_Lean_Json_compress(x_5);
x_7 = l_AiSdk_OpenAI_Core_constructRequest___closed__0;
x_8 = l_AiSdk_OpenAI_Core_constructRequest___closed__1;
x_9 = l_AiSdk_OpenAI_Core_constructRequest___closed__2;
x_10 = l_AiSdk_OpenAI_Core_constructRequest___closed__3;
x_11 = lean_string_append(x_10, x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_AiSdk_OpenAI_Core_constructRequest___closed__7;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_15, 2, x_14);
lean_ctor_set(x_15, 3, x_6);
return x_15;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_constructRequest___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AiSdk_OpenAI_Core_constructRequest(x_1, x_2, x_3, x_4);
lean_dec_ref(x_1);
return x_5;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseFinishReason___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("length", 6, 6);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseFinishReason___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tool_calls", 10, 10);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseFinishReason___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("content_filter", 14, 14);
return x_1;
}
}
LEAN_EXPORT uint8_t l_AiSdk_OpenAI_Core_parseFinishReason(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__11;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_AiSdk_OpenAI_Core_parseFinishReason___closed__0;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_AiSdk_OpenAI_Core_parseFinishReason___closed__1;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_AiSdk_OpenAI_Core_parseFinishReason___closed__2;
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
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_parseFinishReason___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_AiSdk_OpenAI_Core_parseFinishReason(x_1);
lean_dec_ref(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("id", 2, 2);
return x_1;
}
}
static lean_object* _init_l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("arguments", 9, 9);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0(lean_object* x_1, lean_object* x_2) {
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
x_6 = l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__0;
lean_inc(x_4);
x_7 = l_AiSdk_Json_getFieldStr(x_4, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_4);
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = l_AiSdk_OpenAI_Core_toolToJson___closed__0;
x_11 = l_AiSdk_Json_getField(x_4, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec_ref(x_11);
x_14 = l_AiSdk_OpenAI_Core_toolToJson___closed__3;
lean_inc(x_13);
x_15 = l_AiSdk_Json_getFieldStr(x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_dec(x_13);
lean_dec(x_9);
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec_ref(x_15);
x_18 = l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__1;
x_19 = l_AiSdk_Json_getFieldStr(x_13, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_dec(x_17);
lean_dec(x_9);
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec_ref(x_19);
x_22 = l_Lean_Json_parse(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_dec_ref(x_22);
lean_dec(x_17);
lean_dec(x_9);
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec_ref(x_22);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_9);
lean_ctor_set(x_25, 1, x_17);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_array_push(x_2, x_25);
x_1 = x_5;
x_2 = x_26;
goto _start;
}
}
}
}
}
}
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("message", 7, 7);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_AiSdk_OpenAI_Core_parseFinishReason___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_parseToolCalls___closed__1;
x_2 = l_AiSdk_OpenAI_Core_parseToolCalls___closed__0;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_parseToolCalls(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_AiSdk_OpenAI_Core_parseToolCalls___closed__2;
x_4 = l_AiSdk_Json_getPathArr(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec_ref(x_4);
x_6 = lean_array_to_list(x_5);
x_7 = l_AiSdk_OpenAI_Core_parseToolCalls___closed__3;
x_8 = l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0(x_6, x_7);
return x_8;
}
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("completion_tokens", 17, 17);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to parse JSON: ", 22, 22);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("usage", 5, 5);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("prompt_tokens", 13, 13);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("finish_reason", 13, 13);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_AiSdk_OpenAI_Core_parseResponse___closed__5;
x_2 = l_AiSdk_OpenAI_Core_parseToolCalls___closed__0;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No choices in response", 22, 22);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_parseResponse___closed__8;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AiSdk_OpenAI_Core_parseResponse___closed__9;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("error", 5, 5);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("choices", 7, 7);
return x_1;
}
}
static lean_object* _init_l_AiSdk_OpenAI_Core_parseResponse___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unknown error", 13, 13);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_Core_parseResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_27; 
x_27 = l_Lean_Json_parse(x_1);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_AiSdk_OpenAI_Core_parseResponse___closed__1;
x_31 = lean_string_append(x_30, x_29);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_34 = l_AiSdk_OpenAI_Core_parseResponse___closed__1;
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_60; lean_object* x_71; lean_object* x_72; 
x_38 = lean_ctor_get(x_27, 0);
lean_inc(x_38);
lean_dec_ref(x_27);
x_71 = l_AiSdk_OpenAI_Core_parseResponse___closed__11;
lean_inc(x_38);
x_72 = l_AiSdk_Json_getField(x_38, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = l_AiSdk_OpenAI_Core_parseResponse___closed__12;
lean_inc(x_38);
x_74 = l_AiSdk_Json_getFieldArr(x_38, x_73);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
x_75 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__0;
x_60 = x_75;
goto block_70;
}
else
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_74, 0);
lean_inc(x_76);
lean_dec_ref(x_74);
x_60 = x_76;
goto block_70;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_38);
x_77 = lean_ctor_get(x_72, 0);
lean_inc(x_77);
lean_dec_ref(x_72);
x_78 = l_AiSdk_OpenAI_Core_parseToolCalls___closed__0;
x_79 = l_AiSdk_Json_getFieldStr(x_77, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; 
x_80 = l_AiSdk_OpenAI_Core_parseResponse___closed__13;
x_2 = x_80;
goto block_6;
}
else
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
lean_dec_ref(x_79);
x_2 = x_81;
goto block_6;
}
}
block_51:
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = l_AiSdk_OpenAI_Core_parseFinishReason(x_42);
lean_dec_ref(x_42);
x_44 = l_AiSdk_OpenAI_Core_parseToolCalls(x_39);
x_45 = l_AiSdk_OpenAI_Core_parseResponse___closed__2;
x_46 = l_AiSdk_Json_getField(x_38, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_inc(x_40);
x_16 = x_43;
x_17 = x_44;
x_18 = x_40;
x_19 = x_46;
x_20 = x_41;
x_21 = x_40;
goto block_26;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = l_AiSdk_OpenAI_Core_parseResponse___closed__3;
x_49 = l_AiSdk_Json_getFieldNat(x_47, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_inc(x_40);
x_16 = x_43;
x_17 = x_44;
x_18 = x_40;
x_19 = x_46;
x_20 = x_41;
x_21 = x_40;
goto block_26;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
lean_dec_ref(x_49);
x_16 = x_43;
x_17 = x_44;
x_18 = x_40;
x_19 = x_46;
x_20 = x_41;
x_21 = x_50;
goto block_26;
}
}
}
block_59:
{
lean_object* x_55; lean_object* x_56; 
x_55 = l_AiSdk_OpenAI_Core_parseResponse___closed__4;
lean_inc(x_52);
x_56 = l_AiSdk_Json_getFieldStr(x_52, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; 
x_57 = l_AiSdk_OpenAI_Core_buildRequestJson___closed__11;
x_39 = x_52;
x_40 = x_53;
x_41 = x_54;
x_42 = x_57;
goto block_51;
}
else
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
lean_dec_ref(x_56);
x_39 = x_52;
x_40 = x_53;
x_41 = x_54;
x_42 = x_58;
goto block_51;
}
}
block_70:
{
uint8_t x_61; 
x_61 = l_Array_isEmpty___redArg(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_box(0);
x_63 = lean_unsigned_to_nat(0u);
x_64 = lean_array_get(x_62, x_60, x_63);
lean_dec_ref(x_60);
x_65 = l_AiSdk_OpenAI_Core_parseResponse___closed__6;
lean_inc(x_64);
x_66 = l_AiSdk_Json_getPathStr(x_64, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
x_67 = l_AiSdk_OpenAI_Core_parseResponse___closed__7;
x_52 = x_64;
x_53 = x_63;
x_54 = x_67;
goto block_59;
}
else
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
lean_dec_ref(x_66);
x_52 = x_64;
x_53 = x_63;
x_54 = x_68;
goto block_59;
}
}
else
{
lean_object* x_69; 
lean_dec_ref(x_60);
lean_dec(x_38);
x_69 = l_AiSdk_OpenAI_Core_parseResponse___closed__10;
return x_69;
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
block_15:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_9);
lean_ctor_set_uint8(x_13, sizeof(void*)*3, x_7);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
block_26:
{
if (lean_obj_tag(x_19) == 0)
{
x_7 = x_16;
x_8 = x_21;
x_9 = x_17;
x_10 = x_20;
x_11 = x_18;
goto block_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec_ref(x_19);
x_23 = l_AiSdk_OpenAI_Core_parseResponse___closed__0;
x_24 = l_AiSdk_Json_getFieldNat(x_22, x_23);
if (lean_obj_tag(x_24) == 0)
{
x_7 = x_16;
x_8 = x_21;
x_9 = x_17;
x_10 = x_20;
x_11 = x_18;
goto block_15;
}
else
{
lean_object* x_25; 
lean_dec(x_18);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec_ref(x_24);
x_7 = x_16;
x_8 = x_21;
x_9 = x_17;
x_10 = x_20;
x_11 = x_25;
goto block_15;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_HttpClient_Request_withHeader(x_2, x_7, x_8);
x_1 = x_6;
x_2 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___redArg(x_2, x_3, x_5);
return x_6;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to parse URL", 19, 19);
return x_1;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__0;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3() {
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
static lean_object* _init_l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4() {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_AiSdk_OpenAI_Core_constructRequest(x_1, x_2, x_3, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_6, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 3);
lean_inc_ref(x_9);
lean_dec_ref(x_6);
x_10 = l_HttpClient_Url_parse(x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec_ref(x_9);
lean_dec(x_8);
x_11 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__2;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_5);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = l_HttpClient_Request_post(x_14);
x_16 = l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___redArg(x_8, x_15, x_5);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec_ref(x_16);
x_19 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3;
x_20 = l_HttpClient_Client_new(x_19, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec_ref(x_20);
x_23 = l_HttpClient_Request_withBody(x_17, x_9);
x_24 = l_HttpClient_Client_send(x_21, x_23, x_22);
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
x_30 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
x_31 = l_HttpClient_HttpError_toString(x_29);
lean_dec(x_29);
x_32 = lean_string_append(x_30, x_31);
lean_dec_ref(x_31);
lean_ctor_set_tag(x_10, 3);
lean_ctor_set(x_10, 0, x_32);
lean_ctor_set(x_25, 0, x_10);
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
x_35 = l_HttpClient_HttpError_toString(x_33);
lean_dec(x_33);
x_36 = lean_string_append(x_34, x_35);
lean_dec_ref(x_35);
lean_ctor_set_tag(x_10, 3);
lean_ctor_set(x_10, 0, x_36);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_10);
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
x_41 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
x_42 = l_HttpClient_HttpError_toString(x_39);
lean_dec(x_39);
x_43 = lean_string_append(x_41, x_42);
lean_dec_ref(x_42);
lean_ctor_set_tag(x_10, 3);
lean_ctor_set(x_10, 0, x_43);
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(0, 1, 0);
} else {
 x_44 = x_40;
}
lean_ctor_set(x_44, 0, x_10);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_38);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_free_object(x_10);
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
x_57 = l_AiSdk_OpenAI_Core_parseResponse(x_51);
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
x_67 = l_AiSdk_OpenAI_Core_parseResponse(x_61);
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
x_80 = l_AiSdk_OpenAI_Core_parseResponse(x_73);
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
lean_free_object(x_10);
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
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_86 = lean_ctor_get(x_10, 0);
lean_inc(x_86);
lean_dec(x_10);
x_87 = l_HttpClient_Request_post(x_86);
x_88 = l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___redArg(x_8, x_87, x_5);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec_ref(x_88);
x_91 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__3;
x_92 = l_HttpClient_Client_new(x_91, x_90);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec_ref(x_92);
x_95 = l_HttpClient_Request_withBody(x_89, x_9);
x_96 = l_HttpClient_Client_send(x_93, x_95, x_94);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_99 = x_96;
} else {
 lean_dec_ref(x_96);
 x_99 = lean_box(0);
}
x_100 = lean_ctor_get(x_97, 0);
lean_inc(x_100);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 x_101 = x_97;
} else {
 lean_dec_ref(x_97);
 x_101 = lean_box(0);
}
x_102 = l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___closed__4;
x_103 = l_HttpClient_HttpError_toString(x_100);
lean_dec(x_100);
x_104 = lean_string_append(x_102, x_103);
lean_dec_ref(x_103);
x_105 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_105, 0, x_104);
if (lean_is_scalar(x_101)) {
 x_106 = lean_alloc_ctor(0, 1, 0);
} else {
 x_106 = x_101;
}
lean_ctor_set(x_106, 0, x_105);
if (lean_is_scalar(x_99)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_99;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_98);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_108 = lean_ctor_get(x_97, 0);
lean_inc(x_108);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 x_109 = x_97;
} else {
 lean_dec_ref(x_97);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_96, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_111 = x_96;
} else {
 lean_dec_ref(x_96);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_108, 0);
lean_inc_ref(x_112);
x_113 = lean_ctor_get(x_108, 2);
lean_inc_ref(x_113);
lean_dec(x_108);
x_114 = l_HttpClient_Status_isSuccess(x_112);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_115 = lean_ctor_get(x_112, 0);
lean_inc(x_115);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_116 = x_112;
} else {
 lean_dec_ref(x_112);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_113);
if (lean_is_scalar(x_109)) {
 x_118 = lean_alloc_ctor(0, 1, 0);
} else {
 x_118 = x_109;
 lean_ctor_set_tag(x_118, 0);
}
lean_ctor_set(x_118, 0, x_117);
if (lean_is_scalar(x_111)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_111;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_110);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_dec_ref(x_112);
lean_dec(x_109);
x_120 = l_AiSdk_OpenAI_Core_parseResponse(x_113);
if (lean_is_scalar(x_111)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_111;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_110);
return x_121;
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_96, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_96, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_124 = x_96;
} else {
 lean_dec_ref(x_96);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_forIn_x27_loop___at_____private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn_spec__0(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
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
LEAN_EXPORT lean_object* l_AiSdk_OpenAI_createModel(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 0;
lean_inc_ref(x_2);
x_4 = lean_alloc_closure((void*)(l___private_AiSdk_Providers_OpenAI_0__AiSdk_OpenAI_makeGenerateFn___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*2, x_3);
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
l_AiSdk_OpenAI_Core_roleToString___closed__0 = _init_l_AiSdk_OpenAI_Core_roleToString___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_roleToString___closed__0);
l_AiSdk_OpenAI_Core_roleToString___closed__1 = _init_l_AiSdk_OpenAI_Core_roleToString___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_roleToString___closed__1);
l_AiSdk_OpenAI_Core_roleToString___closed__2 = _init_l_AiSdk_OpenAI_Core_roleToString___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_roleToString___closed__2);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__0 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__0);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__1 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__1);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__2 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__2);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__3 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__3();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__3);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__4 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__4();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__4);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__5 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__5();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__5);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__6 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__6();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__6);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__7 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__7();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__7);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__8 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__8();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__8);
l_AiSdk_OpenAI_Core_contentPartToJson___closed__9 = _init_l_AiSdk_OpenAI_Core_contentPartToJson___closed__9();
lean_mark_persistent(l_AiSdk_OpenAI_Core_contentPartToJson___closed__9);
l_AiSdk_OpenAI_Core_toolToJson___closed__0 = _init_l_AiSdk_OpenAI_Core_toolToJson___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_toolToJson___closed__0);
l_AiSdk_OpenAI_Core_toolToJson___closed__1 = _init_l_AiSdk_OpenAI_Core_toolToJson___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_toolToJson___closed__1);
l_AiSdk_OpenAI_Core_toolToJson___closed__2 = _init_l_AiSdk_OpenAI_Core_toolToJson___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_toolToJson___closed__2);
l_AiSdk_OpenAI_Core_toolToJson___closed__3 = _init_l_AiSdk_OpenAI_Core_toolToJson___closed__3();
lean_mark_persistent(l_AiSdk_OpenAI_Core_toolToJson___closed__3);
l_AiSdk_OpenAI_Core_toolToJson___closed__4 = _init_l_AiSdk_OpenAI_Core_toolToJson___closed__4();
lean_mark_persistent(l_AiSdk_OpenAI_Core_toolToJson___closed__4);
l_AiSdk_OpenAI_Core_toolToJson___closed__5 = _init_l_AiSdk_OpenAI_Core_toolToJson___closed__5();
lean_mark_persistent(l_AiSdk_OpenAI_Core_toolToJson___closed__5);
l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0 = _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0();
lean_mark_persistent(l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__0);
l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__1 = _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__1);
l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__2 = _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__2();
lean_mark_persistent(l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__2);
l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3 = _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3();
lean_mark_persistent(l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__3);
l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4 = _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4();
lean_mark_persistent(l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__4);
l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5 = _init_l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5();
lean_mark_persistent(l_List_mapTR_loop___at___AiSdk_OpenAI_Core_buildRequestJson_spec__1___closed__5);
l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0 = _init_l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0();
lean_mark_persistent(l_List_foldl___at___List_foldl___at___AiSdk_OpenAI_Core_buildRequestJson_spec__2_spec__2___closed__0);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__0 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__0);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__1 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__1);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__2 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__2);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__3 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__3();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__3);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__4 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__4();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__4);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__5 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__5();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__5);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__6 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__6();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__6);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__7 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__7();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__7);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__8 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__8();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__8);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__9 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__9();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__9);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__10 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__10();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__10);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__11 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__11();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__11);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__12 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__12();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__12);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__13 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__13();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__13);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__14 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__14();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__14);
l_AiSdk_OpenAI_Core_buildRequestJson___closed__15 = _init_l_AiSdk_OpenAI_Core_buildRequestJson___closed__15();
lean_mark_persistent(l_AiSdk_OpenAI_Core_buildRequestJson___closed__15);
l_AiSdk_OpenAI_Core_constructRequest___closed__0 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__0);
l_AiSdk_OpenAI_Core_constructRequest___closed__1 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__1);
l_AiSdk_OpenAI_Core_constructRequest___closed__2 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__2);
l_AiSdk_OpenAI_Core_constructRequest___closed__3 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__3();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__3);
l_AiSdk_OpenAI_Core_constructRequest___closed__4 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__4();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__4);
l_AiSdk_OpenAI_Core_constructRequest___closed__5 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__5();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__5);
l_AiSdk_OpenAI_Core_constructRequest___closed__6 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__6();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__6);
l_AiSdk_OpenAI_Core_constructRequest___closed__7 = _init_l_AiSdk_OpenAI_Core_constructRequest___closed__7();
lean_mark_persistent(l_AiSdk_OpenAI_Core_constructRequest___closed__7);
l_AiSdk_OpenAI_Core_parseFinishReason___closed__0 = _init_l_AiSdk_OpenAI_Core_parseFinishReason___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseFinishReason___closed__0);
l_AiSdk_OpenAI_Core_parseFinishReason___closed__1 = _init_l_AiSdk_OpenAI_Core_parseFinishReason___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseFinishReason___closed__1);
l_AiSdk_OpenAI_Core_parseFinishReason___closed__2 = _init_l_AiSdk_OpenAI_Core_parseFinishReason___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseFinishReason___closed__2);
l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__0 = _init_l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__0();
lean_mark_persistent(l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__0);
l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__1 = _init_l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__1();
lean_mark_persistent(l_List_filterMapTR_go___at___AiSdk_OpenAI_Core_parseToolCalls_spec__0___closed__1);
l_AiSdk_OpenAI_Core_parseToolCalls___closed__0 = _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseToolCalls___closed__0);
l_AiSdk_OpenAI_Core_parseToolCalls___closed__1 = _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseToolCalls___closed__1);
l_AiSdk_OpenAI_Core_parseToolCalls___closed__2 = _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseToolCalls___closed__2);
l_AiSdk_OpenAI_Core_parseToolCalls___closed__3 = _init_l_AiSdk_OpenAI_Core_parseToolCalls___closed__3();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseToolCalls___closed__3);
l_AiSdk_OpenAI_Core_parseResponse___closed__0 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__0();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__0);
l_AiSdk_OpenAI_Core_parseResponse___closed__1 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__1();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__1);
l_AiSdk_OpenAI_Core_parseResponse___closed__2 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__2();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__2);
l_AiSdk_OpenAI_Core_parseResponse___closed__3 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__3();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__3);
l_AiSdk_OpenAI_Core_parseResponse___closed__4 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__4();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__4);
l_AiSdk_OpenAI_Core_parseResponse___closed__5 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__5();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__5);
l_AiSdk_OpenAI_Core_parseResponse___closed__6 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__6();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__6);
l_AiSdk_OpenAI_Core_parseResponse___closed__7 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__7();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__7);
l_AiSdk_OpenAI_Core_parseResponse___closed__8 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__8();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__8);
l_AiSdk_OpenAI_Core_parseResponse___closed__9 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__9();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__9);
l_AiSdk_OpenAI_Core_parseResponse___closed__10 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__10();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__10);
l_AiSdk_OpenAI_Core_parseResponse___closed__11 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__11();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__11);
l_AiSdk_OpenAI_Core_parseResponse___closed__12 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__12();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__12);
l_AiSdk_OpenAI_Core_parseResponse___closed__13 = _init_l_AiSdk_OpenAI_Core_parseResponse___closed__13();
lean_mark_persistent(l_AiSdk_OpenAI_Core_parseResponse___closed__13);
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
