void test_74175(void)
    {
        sym[1]=5;
        sym[2]=7;
        sym[3]=1;
        res=0;
        sym[0]=12;
        Direct_L=153;
        Direct_H=153;    
        Port_H=1;
        Port_L=0;
        delay_ms(1);
        Port_L=1;
        delay_ms(1);
        if ( ( Pin_L == 37) && ( Pin_H  == 37) ) res = 1;
        Port_L = 9;
        Port_H = 9;
        Port_H = 137;
        Port_H = 1;
        delay_ms(1);        
        if ((Pin_L == 43) && (Pin_H == 35) && res == 1)  res = 1;
            else res = 0;
        Port_L = 17;
        Port_H = 17;
        Port_H = 145;    
        Port_H = 1;
        delay_ms(1);        
        if ((Pin_L == 85) && (Pin_H == 69) && res == 1)  res = 1;
            else res = 0;                    
        Port_L = 1;
        Port_H = 1;
        Port_H = 129;    
        Port_H = 1;
        delay_ms(1);
        if ((Pin_L == 37) && (Pin_H == 37) && res == 1)  res = 1;
            else res = 0;             
        Port_L = 25;
        Port_H = 25;
        Port_H = 153;    
        Port_H = 25;
        delay_ms(1);
        if ((Pin_L == 91) && (Pin_H == 91) && res == 1)  res = 1;
            else res = 0;
        if (res==1) sym[0]=10;
            else sym[0]=11;
        Port_L = 0;
        Port_H = 0;
    }