void test_74155(void)
    {   
        sym[1]=5;
        sym[2]=5;
        sym[3]=1;
        res=0;
        sym[0]=12;
        Direct_L=135;
        Direct_H=15;
        Port_L=2;
        Port_H=5;
        delay_ms(1);
        if ((Pin_L==122) && (Pin_H==245)) res=1;
        Port_L = 0;
        Port_H = 1;
        delay_ms(1);
        if ((Pin_L==120) && (Pin_H==113) && (res==1)) res=1;
            else res=0;
        Port_L = 0;
        Port_H = 9;
        delay_ms(1);
        if ((Pin_L==120) && (Pin_H==185) && (res==1)) res=1;
            else res=0;
        Port_L = 4;
        Port_H = 1;
        delay_ms(1);
        if ((Pin_L==124) && (Pin_H==209) && (res==1)) res=1;
            else res=0;
        Port_L = 4;
        Port_H = 9;
        delay_ms(1);
        if ((Pin_L==124) && (Pin_H==233) && (res==1)) res=1;
            else res=0;
        Port_L = 1;
        Port_H = 3;
        delay_ms(1);
        if ((Pin_L==57) && (Pin_H==243) && (res==1)) res=1;
            else res=0;
        Port_H = 11;
        delay_ms(1);
        if ((Pin_L==89) && (Pin_H==251) && (res==1)) res=1;
            else res=0;
        Port_L = 5;
        Port_H = 3;
        delay_ms(1);
        if ((Pin_L==109) && (Pin_H==243) && (res==1)) res=1;
            else res=0;
        Port_H = 11;
        delay_ms(1);
        if ((Pin_L==117) && (Pin_H==251) && (res==1)) res=1;
            else res=0;
        if (res==1) sym[0]=10;
            else sym[0]=11;
        Port_L=0;
        Port_H=0;      
    }