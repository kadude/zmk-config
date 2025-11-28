
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Aliases
#define NO_PIPE GRAVE  // |
#define NO_1    N1    // 1
#define NO_2    N2    // 2
#define NO_3    N3    // 3
#define NO_4    N4    // 4
#define NO_5    N5    // 5
#define NO_6    N6    // 6
#define NO_7    N7    // 7
#define NO_8    N8    // 8
#define NO_9    N9    // 9
#define NO_0    N0    // 0
#define NO_PLUS MINUS // +
#define NO_BSLS EQUAL  // (backslash)
#define NO_Q    Q    // Q
#define NO_W    W    // W
#define NO_E    E    // E
#define NO_R    R    // R
#define NO_T    T    // T
#define NO_Y    Y    // Y
#define NO_U    U    // U
#define NO_I    I    // I
#define NO_O    O    // O
#define NO_P    P    // P
// #define NO_ARNG KC_LBRC // Å
#define NO_DIAE RBRC // ¨ (dead)
#define NO_A    A    // A
#define NO_S    S    // S
#define NO_D    D    // D
#define NO_F    F    // F
#define NO_G    G    // G
#define NO_H    H    // H
#define NO_J    J    // J
#define NO_K    K    // K
#define NO_L    L    // L
// #define NO_OSTR KC_SCLN // Ø
// #define NO_AE   KC_QUOT // Æ
#define NO_QUOT NUHS // '
#define NO_LABK NUBS // <
#define NO_Z    Z    // Z
#define NO_X    X    // X
#define NO_C    C    // C
#define NO_V    V    // V
#define NO_B    B    // B
#define NO_N    N    // N
#define NO_M    M    // M
#define NO_COMM COMMA // ,
#define NO_DOT  DOT  // .
#define NO_MINS SLSH // -
#define NO_SECT S(NO_PIPE) // §
#define NO_EXLM S(NO_1)    // !
#define NO_DQUO S(NO_2)    // "
#define NO_HASH S(NO_3)    // #
#define NO_CURR S(NO_4)    // ¤
#define NO_PERC S(NO_5)    // %
#define NO_AMPR S(NO_6)    // &
#define NO_SLSH S(NO_7)    // /
#define NO_LPRN S(NO_8)    // (
#define NO_RPRN S(NO_9)    // )
#define NO_EQL  S(NO_0)    // =
#define NO_QUES S(NO_PLUS) // ?
#define NO_GRV  S(NO_BSLS) // ` (dead)
#define NO_CIRC S(NO_DIAE) // ^ (dead)
#define NO_ASTR S(NO_QUOT) // *
#define NO_RABK S(NO_LABK) // >
#define NO_SCLN S(NO_COMM) // ;
#define NO_COLN S(NO_DOT)  // :
#define NO_UNDS S(NO_MINS) // _
#define NO_AT   ALGR(NO_2)    // @
#define NO_PND  ALGR(NO_3)    // £
#define NO_DLR  ALGR(NO_4)    // $
#define NO_EURO ALGR(NO_5)    // €
#define NO_LCBR ALGR(NO_7)    // {
#define NO_LBRC ALGR(NO_8)    // [
#define NO_RBRC ALGR(NO_9)    // ]
#define NO_RCBR ALGR(NO_0)    // }
#define NO_ACUT ALGR(NO_BSLS) // ´ (dead)
#define NO_TILD ALGR(NO_DIAE) // ~ (dead)
#define NO_MICR ALGR(NO_M)    // µ


