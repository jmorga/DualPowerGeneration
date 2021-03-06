/*
 * Param_Const_GLVar.h
 *
 * Created: 11/3/2019 8:21:35 AM
 *  Author: Joseph Morga, Brandon Fong, Ahmad AlSarhan
 */ 


#ifndef GLOBAL_VARIABLES_H_
#define GLOBAL_VARIABLES_H_

/*** CONSTANTS ***/
#define F_CPU 16000000UL  // this is the clock frequency of the board
#define SUNRISE_ANGLE  0
#define SUNSET_ANGLE  180
#define WEST  0
#define EAST  1
#define NORTH  2
#define SOUTH  3

#define CHANNEL_RESISTOR_0  0
#define CHANNEL_RESISTOR_1  1
#define CHANNEL_RESISTOR_2  2
#define CHANNEL_RESISTOR_3  3

#define JOINT_1_init_X (1<<DDB0)
#define JOINT_2_init_Y (1<<DDB1)
#define JOINT_1_move_X (1<<PORTB0)
#define JOINT_2_move_Y (1<<PORTB1)
#define JOINT_1_dont_move_X (0<<PORTB0)
#define JOINT_2_dont_move_Y (0<<PORTB1)
#define is_X_AXIS_0_1 1
#define is_Y_AXIS_2_3 2
#define is_x_actuator 1



/*** PROTOTYPES ***/
//void SolarMovement(double res0, double res1, double res2, double res3, double * drive_motor_factor);
void movePanelTo(int direction, double resA, double resB, double * drive_motor_factor);
void initTimer0A();
void movePanel(int direction, double resA, double resB, double * drive_motor_factor);
void initTimer0();
void initTimer1();
void initTimer2();
void adc_init();
uint16_t adc_read(uint8_t ch);
void dac_init();
void moveJoint();
void dac_write_digital()

#endif /* GLOBAL_VARIABLES_H_ */