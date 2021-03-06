// TEST FOR 7411 (��3)
// Triple 3-Input AND Gates

/* PINS: 1A 1B 2A 2B 2C 2Y GND :: 3Y 3A 3B 3C 1Y 1C VCC */

case 11:

// left pins
#define P_1A	BIT_L0
#define P_1B	BIT_L1
#define P_2A	BIT_L2
#define P_2B	BIT_L3
#define P_2C	BIT_L4
#define P_2Y	BIT_L5
#define P_GND	BIT_L6

// right pins
#define P_3Y	BIT_H6
#define P_3A	BIT_H5
#define P_3B	BIT_H4
#define P_3C	BIT_H3
#define P_1Y	BIT_H2
#define P_1C	BIT_H1
#define P_VCC	BIT_H0

	Direct_L = P_1A | P_1B | P_2A | P_2B | P_2C | P_GND | BIT_L7;
	Direct_H = BIT_H7 | P_3A | P_3B | P_3C | P_1C | P_VCC;

	Port_L = P_2Y;
	Port_H = P_3Y | P_1Y | P_VCC;
	delay1ms();
	res &= ( (Pin_L == 0) && (Pin_H == P_VCC) );

	Port_L = P_1A | P_2A | P_2Y;
	Port_H = P_3Y | P_3C | P_1Y | P_VCC;
	res &= ( (Pin_L == (P_1A | P_2A)) && (Pin_H == (P_3C | P_VCC)) );

	Port_L = P_1A | P_1B | P_2A | P_2B | P_2Y;
	Port_H = P_3Y | P_3B | P_3C | P_1Y | P_VCC;
	res &= ( (Pin_L == (P_1A | P_1B | P_2A | P_2B)) && (Pin_H == (P_3B | P_3C | P_VCC)) );

	Port_L = P_1A | P_1B | P_2A | P_2B | P_2C | P_2Y;
	Port_H = P_3Y | P_3A | P_3B | P_3C | P_1Y | P_1C | P_VCC;
	res &= ( (Pin_L == (P_1A | P_1B | P_2A | P_2B | P_2C | P_2Y)) && (Pin_H == (P_3Y | P_3A | P_3B | P_3C | P_1Y | P_1C | P_VCC)) );

	Port_L = 0;
	Port_H = 0;

#undef P_1A
#undef P_1B
#undef P_2A
#undef P_2B
#undef P_2C
#undef P_2Y
#undef P_GND
#undef P_3Y
#undef P_3A
#undef P_3B
#undef P_3C
#undef P_1Y
#undef P_1C
#undef P_VCC

	break;
