// TEST FOR 7474 (��2)
// Triggered Flip-Flops With Preset And Clear

/* PINS: n1RST 1D 1CLK n1SET 1Q n1Q GND :: n2Q 2Q n2SET 2CLK 2D n2RST VCC */

case 74:

// left pins
#define P_n1RST	BIT_L0
#define P_1D	BIT_L1
#define P_1CLK	BIT_L2
#define P_n1SET	BIT_L3
#define P_1Q	BIT_L4
#define P_n1Q	BIT_L5
#define P_GND	BIT_L6

// right pins
#define P_n2Q	BIT_H6
#define P_2Q	BIT_H5
#define P_n2SET	BIT_H4
#define P_2CLK	BIT_H3
#define P_2D	BIT_H2
#define P_n2RST	BIT_H1
#define P_VCC	BIT_H0

	Direct_L = P_n1RST | P_1D | P_1CLK | P_n1SET | P_GND | BIT_L7;
	Direct_H = BIT_H7 | P_n2SET | P_2CLK | P_2D | P_n2RST | P_VCC;

	Port_L = P_n1SET;
	Port_H = P_n2SET | P_VCC;
	Port_L = P_n1RST | P_n1SET;
	Port_H = P_n2SET | P_n2RST | P_VCC;
	delay1ms();
	res &= ( (Pin_L == (P_n1RST | P_n1SET | P_n1Q)) && (Pin_H == (P_n2Q | P_n2SET | P_n2RST | P_VCC)) );

	Port_L = P_n1RST | P_1D | P_n1SET;
	Port_H = P_n2SET | P_2D | P_n2RST | P_VCC;
	Port_L = P_n1RST | P_1D | P_1CLK | P_n1SET;
	Port_H = P_n2SET | P_2CLK | P_2D | P_n2RST | P_VCC;
	Port_L = P_n1RST | P_n1SET;
	Port_H = P_n2SET | P_n2RST | P_VCC;
	res &= ( (Pin_L == (P_n1RST | P_n1SET | P_1Q)) && (Pin_H == (P_2Q | P_n2SET | P_n2RST | P_VCC)) );

	Port_L = P_n1RST | P_1CLK | P_n1SET;
	Port_H = P_n2SET | P_2CLK | P_n2RST | P_VCC;
	Port_L = P_n1RST | P_n1SET;
	Port_H = P_n2SET | P_n2RST | P_VCC;
	res &= ( (Pin_L == (P_n1RST | P_n1SET | P_n1Q)) && (Pin_H == (P_n2Q | P_n2SET | P_n2RST | P_VCC)) );

	Port_L = 0;
	Port_H = 0;

#undef P_n1RST
#undef P_1D
#undef P_1CLK
#undef P_n1SET
#undef P_1Q
#undef P_n1Q
#undef P_GND
#undef P_n2Q
#undef P_2Q
#undef P_n2SET
#undef P_2CLK
#undef P_2D
#undef P_n2RST
#undef P_VCC

	break;