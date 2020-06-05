#include "build/temp/_test_my_gpio.c"
#include "inc/my_gpio.h"
#include "mock_cp_mcu_scu_gpio.h"
#include "/home/matias/.rbenv/versions/2.7.1/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


void setUp(void) {



}



void tearDown(void) {

}



void test_my_gpio_write(void) {



 Chip_GPIO_SetPinState_CMockExpect(14, ((LPC_GPIO_T *) 0x400F4000), 5, 0, 0);

 my_gpio_write(MY_GPIO_LEDR, 0);



 Chip_GPIO_SetPinState_CMockExpect(17, ((LPC_GPIO_T *) 0x400F4000), 5, 0, 1);

 my_gpio_write(MY_GPIO_LEDR, 1);

}



void test_my_gpio_read_outOfRange(void) {



 do {if (!(my_gpio_read(12))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(23)));}} while(0);

 do {if (!(my_gpio_read(-123))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(24)));}} while(0);

 do {if (!(my_gpio_read(-1129312))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(25)));}} while(0);

}



void test_my_gpio_read(void) {



 Chip_GPIO_ReadPortBit_CMockExpectAndReturn(30, ((LPC_GPIO_T *) 0x400F4000), 0, 14, 1);

 do {if ((my_gpio_read(MY_GPIO_LED1))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(31)));}} while(0);



 Chip_GPIO_ReadPortBit_CMockExpectAndReturn(33, ((LPC_GPIO_T *) 0x400F4000), 0, 14, 0);

 do {if (!(my_gpio_read(MY_GPIO_LED1))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(34)));}} while(0);



}



void test_my_gpio_init_output(void) {



 Chip_SCU_PinMux_CMockExpect(

                                                            41

 , 2, 10, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(42, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 14), MY_GPIO_OUTPUT);

 Chip_GPIO_SetPinState_CMockExpect(43, ((LPC_GPIO_T *) 0x400F4000), 0, 14, 0);

 my_gpio_init(MY_GPIO_LED1, MY_GPIO_OUTPUT);



}



void test_my_gpio_init_input_pullup_pulldown(void) {



 Chip_SCU_PinMux_CMockExpect(

                                                               51

 , 2, 10, (0x1 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                                ;

 Chip_GPIO_SetDir_CMockExpect(52, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 14), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LED1, MY_GPIO_INPUT_PULLUP_PULLDOWN);



}



void test_my_gpio_init_input_pullup(void) {



 Chip_SCU_PinMux_CMockExpect(

                                                             60

 , 2, 10, (0x0 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                              ;

 Chip_GPIO_SetDir_CMockExpect(61, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 14), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LED1, MY_GPIO_INPUT_PULLUP);



}



void test_my_gpio_init_input_pulldown(void) {



 Chip_SCU_PinMux_CMockExpect(

                                                               69

 , 2, 10, (0x3 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                                ;

 Chip_GPIO_SetDir_CMockExpect(70, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 14), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LED1, MY_GPIO_INPUT_PULLDOWN);



 Chip_SCU_PinMux_CMockExpect(

                                                               74

 , 6, 1, (0x3 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                                ;

 Chip_GPIO_SetDir_CMockExpect(75, ((LPC_GPIO_T *) 0x400F4000), 3, (1 << 0), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_GPIO0, MY_GPIO_INPUT_PULLDOWN);



}



void test_my_gpio_init_input(void) {



 Chip_SCU_PinMux_CMockExpect(

                                                            83

 , 2, 10, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(84, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 14), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LED1, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            88

 , 2, 11, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(89, ((LPC_GPIO_T *) 0x400F4000), 1, (1 << 11), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LED2, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            93

 , 2, 12, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(94, ((LPC_GPIO_T *) 0x400F4000), 1, (1 << 12), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LED3, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            98

 , 2, 0, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 4)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(99, ((LPC_GPIO_T *) 0x400F4000), 5, (1 << 0), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LEDR, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            103

 , 2, 1, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 4)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(104, ((LPC_GPIO_T *) 0x400F4000), 5, (1 << 1), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LEDG, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            108

 , 2, 2, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 4)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(109, ((LPC_GPIO_T *) 0x400F4000), 5, (1 << 2), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_LEDB, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            113

 , 1, 0, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(114, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 4), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_TEC1, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            118

 , 1, 1, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(119, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 8), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_TEC2, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            123

 , 1, 2, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(124, ((LPC_GPIO_T *) 0x400F4000), 0, (1 << 9), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_TEC3, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            128

 , 1, 6, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(129, ((LPC_GPIO_T *) 0x400F4000), 1, (1 << 9), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_TEC4, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            133

 , 6, 1, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(134, ((LPC_GPIO_T *) 0x400F4000), 3, (1 << 0), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_GPIO0, MY_GPIO_INPUT);



 Chip_SCU_PinMux_CMockExpect(

                                                            138

 , 6, 4, (0x2 << 3) | (0x1 << 6) | (0x1 << 7), 0)

                                                             ;

 Chip_GPIO_SetDir_CMockExpect(139, ((LPC_GPIO_T *) 0x400F4000), 3, (1 << 3), MY_GPIO_INPUT);

 my_gpio_init(MY_GPIO_GPIO1, MY_GPIO_INPUT);



}
