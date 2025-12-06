// Lean compiler output
// Module: AiSdk
// Imports: public import Init public import AiSdk.Types public import AiSdk.Json public import AiSdk.Config public import AiSdk.Provider public import AiSdk.Models public import AiSdk.GenerateText public import AiSdk.Providers.Anthropic public import AiSdk.Providers.Google public import AiSdk.Providers.OpenAI public import AiSdk.Providers.Xai
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
LEAN_EXPORT lean_object* l_AiSdk_gpt(lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_Google_create(lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_OpenAI_create(lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_Xai_create(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_xai(lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_Anthropic_create(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_gemini(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_grok(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_anthropic(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_google(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_openai(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_anthropic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_Anthropic_create(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AiSdk_google(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_Google_create(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AiSdk_gemini(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_Google_create(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AiSdk_openai(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_OpenAI_create(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AiSdk_gpt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_OpenAI_create(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AiSdk_xai(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_Xai_create(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AiSdk_grok(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AiSdk_Xai_create(x_1, x_2, x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Types(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Json(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Config(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Provider(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Models(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_GenerateText(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_Anthropic(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_Google(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_OpenAI(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_Xai(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AiSdk(uint8_t builtin, lean_object* w) {
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
res = initialize_AiSdk_Config(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Provider(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Models(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_GenerateText(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_Anthropic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_Google(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_OpenAI(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_Xai(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
