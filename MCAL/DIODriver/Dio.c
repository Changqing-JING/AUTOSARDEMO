// Mcal Layer for DIO Driver
#include "Dio.h"

extern unsigned char P2OUT;
extern unsigned char P2IN;

const unsigned char BIT0 = 1;

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId){
    /* Assume Channel 10 is mapped to Port P2.0*/
    unsigned int ReadVal;
    if(ChannelId == 10){
        ReadVal = P2IN & BIT0;

        if(ReadVal== 0x00){
            return STD_LOW;
        }else{
            return STD_HIGH;
        }
    }

    /*contienue for other channels*/
    return 0;
}

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level){

    if(ChannelId == 10){
        if(Level == STD_LOW){
            P2OUT &= ~BIT0; //set pin to low
        }else{
            P2OUT |=BIT0; //set pin to high
        }
    }

    /*contienue for other channels*/
}