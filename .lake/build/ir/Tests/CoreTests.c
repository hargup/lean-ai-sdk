// Lean compiler output
// Module: Tests.CoreTests
// Imports: public import Init public import AiSdk.Types public import AiSdk.Providers.OpenAI public import AiSdk.Providers.Anthropic public import AiSdk.Providers.Google public import AiSdk.Json
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
lean_object* lean_format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* _lean_main(lean_object*);
static lean_object* l_main___closed__10;
static lean_object* l_assertEq___redArg___closed__4;
static lean_object* l_main___closed__19;
lean_object* l_AiSdk_Json_getFieldStr(lean_object*, lean_object*);
static lean_object* l_main___closed__21;
static lean_object* l_main___closed__36;
static lean_object* l_main___closed__3;
LEAN_EXPORT lean_object* l_assertEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_Json_getFieldArr(lean_object*, lean_object*);
static lean_object* l_main___closed__34;
static lean_object* l_main___closed__12;
static lean_object* l_main___closed__28;
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_assertEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
static lean_object* l_main___closed__20;
lean_object* lean_get_stdout(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_AiSdk_Message_user(lean_object*);
static lean_object* l_main___closed__16;
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_main___closed__11;
static lean_object* l_main___closed__30;
LEAN_EXPORT lean_object* l_IO_println___at___main_spec__0(lean_object*, lean_object*);
static lean_object* l_main___closed__0;
static lean_object* l_main___closed__13;
LEAN_EXPORT lean_object* l_IO_print___at___IO_println___at___main_spec__0_spec__0(lean_object*, lean_object*);
static lean_object* l_main___closed__14;
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_main___closed__39;
static lean_object* l_main___closed__1;
static lean_object* l_main___closed__25;
static lean_object* l_main___closed__40;
static lean_object* l_main___closed__5;
static lean_object* l_main___closed__29;
static lean_object* l_main___closed__27;
static double l_main___closed__4;
static lean_object* l_main___closed__15;
static lean_object* l_main___closed__32;
static lean_object* l_main___closed__26;
lean_object* l_AiSdk_OpenAI_Core_buildRequestJson(lean_object*, lean_object*, lean_object*);
static lean_object* l_main___closed__17;
LEAN_EXPORT lean_object* l_main___lam__0(lean_object*);
static lean_object* l_main___closed__9;
static lean_object* l_main___closed__6;
lean_object* l_Option_repr___at___HttpClient_instReprUrl_repr_spec__1(lean_object*, lean_object*);
static lean_object* l_assertEq___redArg___closed__0;
static lean_object* l_main___closed__37;
lean_object* l_AiSdk_Message_tool(lean_object*, lean_object*);
static lean_object* l_assertEq___redArg___closed__3;
static lean_object* l_main___closed__35;
LEAN_EXPORT lean_object* l_assertEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
static lean_object* l_main___closed__33;
static lean_object* l_assertEq___redArg___closed__2;
lean_object* l_AiSdk_Anthropic_Core_buildRequestJson(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_main___closed__38;
static lean_object* l_main___closed__31;
static lean_object* l_main___closed__8;
LEAN_EXPORT lean_object* l_main___closed__5___boxed__const__1;
static lean_object* l_main___lam__0___closed__0;
static lean_object* l_main___closed__23;
static lean_object* l_main___closed__7;
static lean_object* l_main___closed__24;
static lean_object* l_main___closed__22;
LEAN_EXPORT lean_object* l_assertEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_assertEq___redArg___closed__1;
static lean_object* l_main___closed__2;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_println___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AiSdk_Message_userParts(lean_object*);
uint8_t l_Option_instBEq_beq___at___HttpClient_instBEqUrl_beq_spec__1(lean_object*, lean_object*);
static lean_object* l_main___closed__18;
static lean_object* _init_l_assertEq___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Assertion failed: ", 18, 18);
return x_1;
}
}
static lean_object* _init_l_assertEq___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nExpected: ", 11, 11);
return x_1;
}
}
static lean_object* _init_l_assertEq___redArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nActual:   ", 11, 11);
return x_1;
}
}
static lean_object* _init_l_assertEq___redArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instToStringString___lam__0___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_assertEq___redArg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("✅ ", 4, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_assertEq___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_4);
lean_inc(x_3);
x_7 = lean_apply_2(x_1, x_3, x_4);
x_8 = lean_unbox(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_9 = l_assertEq___redArg___closed__0;
x_10 = lean_string_append(x_9, x_5);
x_11 = l_assertEq___redArg___closed__1;
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_unsigned_to_nat(0u);
lean_inc_ref(x_2);
x_14 = lean_apply_2(x_2, x_4, x_13);
x_15 = lean_unsigned_to_nat(120u);
x_16 = lean_format_pretty(x_14, x_15, x_13, x_13);
x_17 = lean_string_append(x_12, x_16);
lean_dec_ref(x_16);
x_18 = l_assertEq___redArg___closed__2;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_apply_2(x_2, x_3, x_13);
x_21 = lean_format_pretty(x_20, x_15, x_13, x_13);
x_22 = lean_string_append(x_19, x_21);
lean_dec_ref(x_21);
x_23 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_6);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_25 = l_assertEq___redArg___closed__3;
x_26 = l_assertEq___redArg___closed__4;
x_27 = lean_string_append(x_26, x_5);
x_28 = l_IO_println___redArg(x_25, x_27, x_6);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_assertEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_assertEq___redArg(x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_assertEq___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_assertEq___redArg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_assertEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_assertEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___IO_println___at___main_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_IO_println___at___main_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_print___at___IO_println___at___main_spec__0_spec__0(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Option_instBEq_beq___at___HttpClient_instBEqUrl_beq_spec__1(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = l_assertEq___redArg___closed__0;
x_7 = lean_string_append(x_6, x_3);
x_8 = l_assertEq___redArg___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Option_repr___at___HttpClient_instReprUrl_repr_spec__1(x_2, x_10);
x_12 = lean_unsigned_to_nat(120u);
x_13 = lean_format_pretty(x_11, x_12, x_10, x_10);
x_14 = lean_string_append(x_9, x_13);
lean_dec_ref(x_13);
x_15 = l_assertEq___redArg___closed__2;
x_16 = lean_string_append(x_14, x_15);
x_17 = l_Option_repr___at___HttpClient_instReprUrl_repr_spec__1(x_1, x_10);
x_18 = lean_format_pretty(x_17, x_12, x_10, x_10);
x_19 = lean_string_append(x_16, x_18);
lean_dec_ref(x_18);
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = l_assertEq___redArg___closed__4;
x_23 = lean_string_append(x_22, x_3);
x_24 = l_IO_println___at___main_spec__0(x_23, x_4);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_6 = l_assertEq___redArg___closed__0;
x_7 = lean_string_append(x_6, x_3);
x_8 = l_assertEq___redArg___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Nat_reprFast(x_2);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_unsigned_to_nat(120u);
x_14 = lean_format_pretty(x_12, x_13, x_10, x_10);
x_15 = lean_string_append(x_9, x_14);
lean_dec_ref(x_14);
x_16 = l_assertEq___redArg___closed__2;
x_17 = lean_string_append(x_15, x_16);
x_18 = l_Nat_reprFast(x_1);
x_19 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_format_pretty(x_19, x_13, x_10, x_10);
x_21 = lean_string_append(x_17, x_20);
lean_dec_ref(x_20);
x_22 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_assertEq___redArg___closed__4;
x_25 = lean_string_append(x_24, x_3);
x_26 = l_IO_println___at___main_spec__0(x_25, x_4);
return x_26;
}
}
}
static lean_object* _init_l_main___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_main___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_main___lam__0___closed__0;
return x_2;
}
}
static lean_object* _init_l_main___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Running Core Tests...", 21, 21);
return x_1;
}
}
static lean_object* _init_l_main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Hello", 5, 5);
return x_1;
}
}
static lean_object* _init_l_main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_main___closed__1;
x_2 = l_AiSdk_Message_user(x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_main___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static double _init_l_main___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(7u);
x_4 = l_Float_ofScientific(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_main___closed__5___boxed__const__1() {
_start:
{
double x_1; lean_object* x_2; 
x_1 = l_main___closed__4;
x_2 = lean_box_float(x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_main___closed__5___boxed__const__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 0;
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = l_main___closed__5;
x_5 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_2);
lean_ctor_set(x_5, 5, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*6, x_1);
return x_5;
}
}
static lean_object* _init_l_main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gpt-4o", 6, 6);
return x_1;
}
}
static lean_object* _init_l_main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_main___closed__6;
x_2 = l_main___closed__3;
x_3 = l_main___closed__7;
x_4 = l_AiSdk_OpenAI_Core_buildRequestJson(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_main___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("model", 5, 5);
return x_1;
}
}
static lean_object* _init_l_main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_main___closed__9;
x_2 = l_main___closed__8;
x_3 = l_AiSdk_Json_getFieldStr(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_main___closed__7;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OpenAI model correct", 20, 20);
return x_1;
}
}
static lean_object* _init_l_main___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("role", 4, 4);
return x_1;
}
}
static lean_object* _init_l_main___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tool", 4, 4);
return x_1;
}
}
static lean_object* _init_l_main___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_main___closed__14;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OpenAI tool role mapping", 24, 24);
return x_1;
}
}
static lean_object* _init_l_main___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("All tests passed!", 17, 17);
return x_1;
}
}
static lean_object* _init_l_main___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Look at this:", 13, 13);
return x_1;
}
}
static lean_object* _init_l_main___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_main___closed__18;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("base64data", 10, 10);
return x_1;
}
}
static lean_object* _init_l_main___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("image/png", 9, 9);
return x_1;
}
}
static lean_object* _init_l_main___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_main___closed__21;
x_2 = l_main___closed__20;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_main___closed__22;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_main___closed__23;
x_2 = l_main___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_main___closed__24;
x_2 = l_AiSdk_Message_userParts(x_1);
return x_2;
}
}
static lean_object* _init_l_main___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_main___closed__25;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("claude-3-opus", 13, 13);
return x_1;
}
}
static lean_object* _init_l_main___closed__28() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_2);
lean_ctor_set(x_4, 5, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*6, x_1);
return x_4;
}
}
static lean_object* _init_l_main___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_main___closed__28;
x_2 = l_main___closed__26;
x_3 = l_main___closed__27;
x_4 = l_AiSdk_Anthropic_Core_buildRequestJson(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_main___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("messages", 8, 8);
return x_1;
}
}
static lean_object* _init_l_main___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Anthropic content parts length", 30, 30);
return x_1;
}
}
static lean_object* _init_l_main___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("call_123", 8, 8);
return x_1;
}
}
static lean_object* _init_l_main___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("42", 2, 2);
return x_1;
}
}
static lean_object* _init_l_main___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_main___closed__33;
x_2 = l_main___closed__32;
x_3 = l_AiSdk_Message_tool(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_main___closed__34;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_main___closed__28;
x_2 = l_main___closed__35;
x_3 = l_main___closed__7;
x_4 = l_AiSdk_OpenAI_Core_buildRequestJson(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_main___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_main___closed__30;
x_2 = l_main___closed__36;
x_3 = l_AiSdk_Json_getFieldArr(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_main___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Anthropic messages length", 25, 25);
return x_1;
}
}
static lean_object* _init_l_main___closed__39() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("content", 7, 7);
return x_1;
}
}
static lean_object* _init_l_main___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_main___closed__30;
x_2 = l_main___closed__29;
x_3 = l_AiSdk_Json_getFieldArr(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_main___closed__0;
x_3 = l_IO_println___at___main_spec__0(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec_ref(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_main___closed__10;
x_7 = l_main___closed__11;
x_8 = l_main___closed__12;
x_9 = l_assertEq___at___main_spec__2(x_6, x_7, x_8, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_38; lean_object* x_51; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec_ref(x_9);
x_11 = lean_box(0);
x_51 = l_main___closed__40;
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_box(0);
x_53 = l_main___lam__0(x_52);
x_38 = x_53;
goto block_50;
}
else
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
x_38 = x_54;
goto block_50;
}
block_24:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_get(x_11, x_14, x_12);
lean_dec_ref(x_14);
x_16 = l_main___closed__13;
x_17 = l_AiSdk_Json_getFieldStr(x_15, x_16);
x_18 = l_main___closed__15;
x_19 = l_main___closed__16;
x_20 = l_assertEq___at___main_spec__2(x_17, x_18, x_19, x_13);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec_ref(x_20);
x_22 = l_main___closed__17;
x_23 = l_IO_println___at___main_spec__0(x_22, x_21);
return x_23;
}
else
{
return x_20;
}
}
block_37:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_array_get_size(x_27);
lean_dec_ref(x_27);
x_29 = lean_unsigned_to_nat(2u);
x_30 = l_main___closed__31;
x_31 = l_assertEq___at___main_spec__3(x_28, x_29, x_30, x_26);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec_ref(x_31);
x_33 = l_main___closed__37;
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_box(0);
x_35 = l_main___lam__0(x_34);
x_12 = x_25;
x_13 = x_32;
x_14 = x_35;
goto block_24;
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
x_12 = x_25;
x_13 = x_32;
x_14 = x_36;
goto block_24;
}
}
else
{
return x_31;
}
}
block_50:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_array_get_size(x_38);
x_40 = l_main___closed__38;
x_41 = l_assertEq___at___main_spec__3(x_39, x_5, x_40, x_10);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec_ref(x_41);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_array_get(x_11, x_38, x_43);
lean_dec_ref(x_38);
x_45 = l_main___closed__39;
x_46 = l_AiSdk_Json_getFieldArr(x_44, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_box(0);
x_48 = l_main___lam__0(x_47);
x_25 = x_43;
x_26 = x_42;
x_27 = x_48;
goto block_37;
}
else
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
lean_dec_ref(x_46);
x_25 = x_43;
x_26 = x_42;
x_27 = x_49;
goto block_37;
}
}
else
{
lean_dec_ref(x_38);
return x_41;
}
}
}
else
{
return x_9;
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_assertEq___at___main_spec__2(x_1, x_2, x_3, x_4);
lean_dec_ref(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_assertEq___at___main_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_assertEq___at___main_spec__3(x_1, x_2, x_3, x_4);
lean_dec_ref(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Types(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_OpenAI(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_Anthropic(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Providers_Google(uint8_t builtin, lean_object*);
lean_object* initialize_AiSdk_Json(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Tests_CoreTests(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_OpenAI(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_Anthropic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Providers_Google(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_AiSdk_Json(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_assertEq___redArg___closed__0 = _init_l_assertEq___redArg___closed__0();
lean_mark_persistent(l_assertEq___redArg___closed__0);
l_assertEq___redArg___closed__1 = _init_l_assertEq___redArg___closed__1();
lean_mark_persistent(l_assertEq___redArg___closed__1);
l_assertEq___redArg___closed__2 = _init_l_assertEq___redArg___closed__2();
lean_mark_persistent(l_assertEq___redArg___closed__2);
l_assertEq___redArg___closed__3 = _init_l_assertEq___redArg___closed__3();
lean_mark_persistent(l_assertEq___redArg___closed__3);
l_assertEq___redArg___closed__4 = _init_l_assertEq___redArg___closed__4();
lean_mark_persistent(l_assertEq___redArg___closed__4);
l_main___lam__0___closed__0 = _init_l_main___lam__0___closed__0();
lean_mark_persistent(l_main___lam__0___closed__0);
l_main___closed__0 = _init_l_main___closed__0();
lean_mark_persistent(l_main___closed__0);
l_main___closed__1 = _init_l_main___closed__1();
lean_mark_persistent(l_main___closed__1);
l_main___closed__2 = _init_l_main___closed__2();
lean_mark_persistent(l_main___closed__2);
l_main___closed__3 = _init_l_main___closed__3();
lean_mark_persistent(l_main___closed__3);
l_main___closed__4 = _init_l_main___closed__4();
l_main___closed__5___boxed__const__1 = _init_l_main___closed__5___boxed__const__1();
lean_mark_persistent(l_main___closed__5___boxed__const__1);
l_main___closed__5 = _init_l_main___closed__5();
lean_mark_persistent(l_main___closed__5);
l_main___closed__6 = _init_l_main___closed__6();
lean_mark_persistent(l_main___closed__6);
l_main___closed__7 = _init_l_main___closed__7();
lean_mark_persistent(l_main___closed__7);
l_main___closed__8 = _init_l_main___closed__8();
lean_mark_persistent(l_main___closed__8);
l_main___closed__9 = _init_l_main___closed__9();
lean_mark_persistent(l_main___closed__9);
l_main___closed__10 = _init_l_main___closed__10();
lean_mark_persistent(l_main___closed__10);
l_main___closed__11 = _init_l_main___closed__11();
lean_mark_persistent(l_main___closed__11);
l_main___closed__12 = _init_l_main___closed__12();
lean_mark_persistent(l_main___closed__12);
l_main___closed__13 = _init_l_main___closed__13();
lean_mark_persistent(l_main___closed__13);
l_main___closed__14 = _init_l_main___closed__14();
lean_mark_persistent(l_main___closed__14);
l_main___closed__15 = _init_l_main___closed__15();
lean_mark_persistent(l_main___closed__15);
l_main___closed__16 = _init_l_main___closed__16();
lean_mark_persistent(l_main___closed__16);
l_main___closed__17 = _init_l_main___closed__17();
lean_mark_persistent(l_main___closed__17);
l_main___closed__18 = _init_l_main___closed__18();
lean_mark_persistent(l_main___closed__18);
l_main___closed__19 = _init_l_main___closed__19();
lean_mark_persistent(l_main___closed__19);
l_main___closed__20 = _init_l_main___closed__20();
lean_mark_persistent(l_main___closed__20);
l_main___closed__21 = _init_l_main___closed__21();
lean_mark_persistent(l_main___closed__21);
l_main___closed__22 = _init_l_main___closed__22();
lean_mark_persistent(l_main___closed__22);
l_main___closed__23 = _init_l_main___closed__23();
lean_mark_persistent(l_main___closed__23);
l_main___closed__24 = _init_l_main___closed__24();
lean_mark_persistent(l_main___closed__24);
l_main___closed__25 = _init_l_main___closed__25();
lean_mark_persistent(l_main___closed__25);
l_main___closed__26 = _init_l_main___closed__26();
lean_mark_persistent(l_main___closed__26);
l_main___closed__27 = _init_l_main___closed__27();
lean_mark_persistent(l_main___closed__27);
l_main___closed__28 = _init_l_main___closed__28();
lean_mark_persistent(l_main___closed__28);
l_main___closed__29 = _init_l_main___closed__29();
lean_mark_persistent(l_main___closed__29);
l_main___closed__30 = _init_l_main___closed__30();
lean_mark_persistent(l_main___closed__30);
l_main___closed__31 = _init_l_main___closed__31();
lean_mark_persistent(l_main___closed__31);
l_main___closed__32 = _init_l_main___closed__32();
lean_mark_persistent(l_main___closed__32);
l_main___closed__33 = _init_l_main___closed__33();
lean_mark_persistent(l_main___closed__33);
l_main___closed__34 = _init_l_main___closed__34();
lean_mark_persistent(l_main___closed__34);
l_main___closed__35 = _init_l_main___closed__35();
lean_mark_persistent(l_main___closed__35);
l_main___closed__36 = _init_l_main___closed__36();
lean_mark_persistent(l_main___closed__36);
l_main___closed__37 = _init_l_main___closed__37();
lean_mark_persistent(l_main___closed__37);
l_main___closed__38 = _init_l_main___closed__38();
lean_mark_persistent(l_main___closed__38);
l_main___closed__39 = _init_l_main___closed__39();
lean_mark_persistent(l_main___closed__39);
l_main___closed__40 = _init_l_main___closed__40();
lean_mark_persistent(l_main___closed__40);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize();

  #if defined(WIN32) || defined(_WIN32)
  #include <windows.h>
  #endif

  int main(int argc, char ** argv) {
  #if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
  #endif
  lean_object* in; lean_object* res;
argv = lean_setup_args(argc, argv);
lean_initialize();
lean_set_panic_messages(false);
res = initialize_Tests_CoreTests(1 /* builtin */, lean_io_mk_world());
lean_set_panic_messages(true);
lean_io_mark_end_initialization();
if (lean_io_result_is_ok(res)) {
lean_dec_ref(res);
lean_init_task_manager();
res = _lean_main(lean_io_mk_world());
}
lean_finalize_task_manager();
if (lean_io_result_is_ok(res)) {
  int ret = 0;
  lean_dec_ref(res);
  return ret;
} else {
  lean_io_result_show_error(res);
  lean_dec_ref(res);
  return 1;
}
}
#ifdef __cplusplus
}
#endif
