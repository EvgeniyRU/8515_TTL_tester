// TEST FOR 74367 (��11)
// Hex 3-State buffer/line driver

/* PINS: n1OE 1A 1Y 2A 2Y 3A 3Y GND :: 4Y 4A 5Y 5A 6Y 6A n2OE VCC */

case 367:
	res = 1;

// left pins
#define P_n1OE	BIT_L0
#define P_1A	BIT_L1
#define P_1Y	BIT_L2
#define P_2A	BIT_L3
#define P_2Y	BIT_L4
#define P_3A	BIT_L5
#define P_3Y	BIT_L6
#define P_GND	BIT_L7

// right pins
#define P_4Y	BIT_H7
#define P_4A	BIT_H6
#define P_5Y	BIT_H5
#define P_5A	BIT_H4
#define P_6Y	BIT_H3
#define P_6A	BIT_H2
#define P_n2OE	BIT_H1
#define P_VCC	BIT_H0

        Direct_L = P_n1OE | P_1A | P_2A | P_3A | P_GND;
        Direct_H = P_4A | P_5A | P_6A | P_n2OE | P_VCC;
        Port_L = P_1Y | P_2Y | P_3Y;
        Port_H = P_4Y | P_5Y | P_6Y | P_VCC;
        delay1ms();
        res &= ( (Pin_L == 0) && (Pin_H == P_VCC) );

        Port_L = P_1A | P_1Y | P_2Y | P_3A | P_3Y;
        Port_H = P_4Y | P_5Y | P_5A | P_6Y | P_VCC;
        delay1ms();
        res &= ( (Pin_L == (P_1A | P_1Y | P_3A | P_3Y)) && (Pin_H == (P_5Y | P_5A | P_VCC)) );

        Port_L = P_1A | P_1Y | P_2A | P_2Y | P_3A | P_3Y;
        Port_H = P_4Y | P_4A | P_5Y | P_5A | P_6Y | P_6A | P_VCC;
        delay1ms();
        res &= ( (Pin_L == (P_1A | P_1Y | P_2A | P_2Y | P_3A | P_3Y)) && (Pin_H == (P_4Y | P_4A | P_5Y | P_5A | P_6Y | P_6A | P_VCC)) );

        Port_L = 0;
        Port_H = 0;

#undef P_n1OE
#undef P_1A
#undef P_1Y
#undef P_2A
#undef P_2Y
#undef P_3A
#undef P_3Y
#undef P_GND
#undef P_4Y
#undef P_4A
#undef P_5Y
#undef P_5A
#undef P_6Y
#undef P_6A
#undef P_n2OE
#undef P_VCC

	break;