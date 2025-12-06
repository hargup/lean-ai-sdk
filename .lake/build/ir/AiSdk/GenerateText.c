// Lean compiler output
// Module: AiSdk.GenerateText
// Imports: public import Init public import AiSdk.Types public import AiSdk.Provider
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
LEAN_EXPORT lean_object* l_IO_println___at___AiSdk_runAndPrint_spec__0(lean_object*, lean_object*);
static lean_object* l_AiSdk_runAndPrint___closed__0;
LEAN_EXPORT lean_object* l_AiSdk_runAndPrint(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_ApiError_toString(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_AiSdk_FinishReason_toString(uint8_t);
lean_object* l_AiSdk_Model_generate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___IO_println___at___AiSdk_runAndPrint_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_AiSdk_Model_generateFromPrompt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_generateTextFromMessages(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_runAndPrint___closed__4;
lean_object* l_AiSdk_Model_generateWithSystem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_generateTextWithSystem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_AiSdk_runAndPrint___closed__3;
static lean_object* l_AiSdk_runAndPrint___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_AiSdk_runAndPrint___closed__2;
LEAN_EXPORT lean_object* l_AiSdk_generateText(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_eprintln___at_____private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AiSdk_generateText(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AiSdk_Model_generateFromPrompt(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AiSdk_generateTextWithSystem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_AiSdk_Model_generateWithSystem(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_AiSdk_generateTextFromMessages(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AiSdk_Model_generate(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___IO_println___at___AiSdk_runAndPrint_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_get_stdout(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec_ref(x_3);
x_6 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_6);
lean_dec(x_4);
x_7 = lean_apply_2(x_6, x_1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___AiSdk_runAndPrint_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_print___at___IO_println___at___AiSdk_runAndPrint_spec__0_spec__0(x_4, x_2);
return x_5;
}
}
static lean_object* _init_l_AiSdk_runAndPrint___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Error: ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_AiSdk_runAndPrint___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l_AiSdk_runAndPrint___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", tokens: ", 10, 10);
return x_1;
}
}
static lean_object* _init_l_AiSdk_runAndPrint___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("→", 3, 1);
return x_1;
}
}
static lean_object* _init_l_AiSdk_runAndPrint___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AiSdk_runAndPrint(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AiSdk_Model_generateFromPrompt(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec_ref(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec_ref(x_6);
x_9 = l_AiSdk_runAndPrint___closed__0;
x_10 = l_AiSdk_ApiError_toString(x_8);
x_11 = lean_string_append(x_9, x_10);
lean_dec_ref(x_10);
x_12 = l_IO_eprintln___at_____private_Init_System_IO_0__IO_eprintlnAux_spec__0(x_11, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
lean_dec_ref(x_6);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_dec_ref(x_5);
x_15 = lean_ctor_get(x_13, 0);
lean_inc_ref(x_15);
x_16 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
x_17 = lean_ctor_get(x_13, 1);
lean_inc_ref(x_17);
lean_dec(x_13);
x_18 = l_IO_println___at___AiSdk_runAndPrint_spec__0(x_15, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec_ref(x_18);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec_ref(x_17);
x_22 = l_AiSdk_runAndPrint___closed__1;
x_23 = l_AiSdk_FinishReason_toString(x_16);
x_24 = lean_string_append(x_22, x_23);
lean_dec_ref(x_23);
x_25 = l_AiSdk_runAndPrint___closed__2;
x_26 = lean_string_append(x_24, x_25);
x_27 = l_Nat_reprFast(x_20);
x_28 = lean_string_append(x_26, x_27);
lean_dec_ref(x_27);
x_29 = l_AiSdk_runAndPrint___closed__3;
x_30 = lean_string_append(x_28, x_29);
x_31 = l_Nat_reprFast(x_21);
x_32 = lean_string_append(x_30, x_31);
lean_dec_ref(x_31);
x_33 = l_AiSdk_runAndPrint___closed__4;
x_34 = lean_string_append(x_32, x_33);
x_35 = l_IO_println___at___AiSdk_runAndPrint_spec__0(x_34, x_19);
return x_35;
}
else
{
lean_dec_ref(x_17);
return x_18;
}
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_5);
if (x_36 == 0)
{
return x_5;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_5, 0);
x_38 = lean_ctor_get(x_5, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_5);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Types(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Provider(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AiSdk_GenerateText(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Provider(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AiSdk_runAndPrint___closed__0 = _init_l_AiSdk_runAndPrint___closed__0();
lean_mark_persistent(l_AiSdk_runAndPrint___closed__0);
l_AiSdk_runAndPrint___closed__1 = _init_l_AiSdk_runAndPrint___closed__1();
lean_mark_persistent(l_AiSdk_runAndPrint___closed__1);
l_AiSdk_runAndPrint___closed__2 = _init_l_AiSdk_runAndPrint___closed__2();
lean_mark_persistent(l_AiSdk_runAndPrint___closed__2);
l_AiSdk_runAndPrint___closed__3 = _init_l_AiSdk_runAndPrint___closed__3();
lean_mark_persistent(l_AiSdk_runAndPrint___closed__3);
l_AiSdk_runAndPrint___closed__4 = _init_l_AiSdk_runAndPrint___closed__4();
lean_mark_persistent(l_AiSdk_runAndPrint___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
