// Lean compiler output
// Module: AiSdk.Provider
// Imports: public import Init public import AiSdk.Types
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
lean_object* l_AiSdk_Message_system(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_instToString;
lean_object* l_AiSdk_Message_user(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_instToString___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_generate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_generateFromPrompt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_ctorIdx___boxed(lean_object*);
lean_object* l_AiSdk_Provider_toString(uint8_t);
LEAN_EXPORT lean_object* l_AiSdk_Model_generateWithSystem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_Model_ctorIdx(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_AiSdk_Model_instToString___lam__0___closed__0;
LEAN_EXPORT lean_object* l_AiSdk_Model_ctorIdx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Model_ctorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AiSdk_Model_ctorIdx(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Model_generate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_5);
lean_dec_ref(x_1);
x_6 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Model_generateFromPrompt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_AiSdk_Message_user(x_2);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_AiSdk_Model_generate(x_1, x_7, x_3, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Model_generateWithSystem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = l_AiSdk_Message_system(x_2);
x_7 = l_AiSdk_Message_user(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_AiSdk_Model_generate(x_1, x_10, x_4, x_5);
return x_11;
}
}
static lean_object* _init_l_AiSdk_Model_instToString___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("/", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Model_instToString___lam__0(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_AiSdk_Provider_toString(x_2);
x_5 = l_AiSdk_Model_instToString___lam__0___closed__0;
x_6 = lean_string_append(x_4, x_5);
x_7 = lean_string_append(x_6, x_3);
return x_7;
}
}
static lean_object* _init_l_AiSdk_Model_instToString() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AiSdk_Model_instToString___lam__0___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_Model_instToString___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_AiSdk_Model_instToString___lam__0(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AiSdk_Provider(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AiSdk_Model_instToString___lam__0___closed__0 = _init_l_AiSdk_Model_instToString___lam__0___closed__0();
lean_mark_persistent(l_AiSdk_Model_instToString___lam__0___closed__0);
l_AiSdk_Model_instToString = _init_l_AiSdk_Model_instToString();
lean_mark_persistent(l_AiSdk_Model_instToString);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
