void test_74174(void)
    {   
        sym[1]=4;
        sym[2]=7;
        sym[3]=1;
        res=0;
        sym[0]=12;
        Direct_L=173;
        Direct_H=173;
        Port_H=1;
        Port_L=0;
        delay_ms(1);
        Port_L=1;
        delay_ms(1);
        if ((Pin_L==1) && (Pin_H==1)) res=1;
            else res=0;        
        Port_L=45;
        Port_H=129;
        Port_H=1;
        Port_L=1;
        delay_ms(1);
        if ((Pin_L==83) && (Pin_H==1) && (res==1)) res=1;
            else res=0;                   
        Port_H=45;
        Port_H=173;
        Port_H=45;
        Port_H=1;
        if ((Pin_L==1) && (Pin_H==83) && (res==1)) res=1;
            else res=0;
        Port_L=0;
        delay_ms(1);
        Port_L=1;
        delay_ms(1);
        if ((Pin_L==1) && (Pin_H==1) && (res==1)) res=1;
            else res=0;                
        if (res==1) sym[0]=10;
            else sym[0]=11;
        Port_L=0;
        Port_H=0;                                        
    }
