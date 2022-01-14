#ifdef RGB_MATRIX_ENABLE

#include "rgb_matrix.h"
#include "config_led.h"

led_config_t g_led_config = { {
    {   0,      1,      2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12,     13 },
    {  14,     15,     16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27 },
    {  28,     29,     30,     31,     32,     33,     34,     35,     36,     37,     38,     39, NO_LED,     40 },
    {  41, NO_LED,     42,     43,     44,     45,     46,     47,     48,     49,     50,     51, NO_LED,     52 },
    {  53,     54,     55, NO_LED, NO_LED, NO_LED,     56, NO_LED, NO_LED, NO_LED,     57,     58,     59,     60 }
}, {
    {0  ,  0}, {16 ,  0}, {33 ,  0}, {49 ,  0}, {66 ,  0}, {82 ,  0}, {99 ,  0}, {115,  0}, {132,  0}, {148,  0}, {165,  0}, {181,  0}, {198,  0}, {214,  0},
    {3  , 16}, {23 , 16}, {39 , 16}, {56 , 16}, {72 , 16}, {88 , 16}, {105, 16}, {121, 16}, {138, 16}, {154, 16}, {171, 16}, {187, 16}, {204, 16}, {220, 16},
    {5  , 32}, {26 , 32}, {42 , 32}, {59 , 32}, {75 , 32}, {92 , 32}, {108, 32}, {124, 32}, {141, 32}, {157, 32}, {174, 32}, {190, 32},            {214, 32},
    {8  , 48},            {28 , 48}, {48 , 48}, {65 , 48}, {81 , 48}, {98 , 48}, {114, 48}, {131, 48}, {147, 48}, {164, 48}, {180, 48},            {201, 48},
    {2  , 64}, {12 , 64}, {28 , 64},                                  {100, 64},                                  {163, 64}, {182, 64}, {205, 64}, {221, 64},
}, {
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
    1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
    1, 1, 1,          4,          1, 1, 1, 1,
} };

#endif