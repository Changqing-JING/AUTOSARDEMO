#ifndef DIO_H
#define DIO_H

typedef unsigned int Dio_LevelType;

#define STD_LOW 0x00
#define STD_HIGH 0x01

typedef unsigned int Dio_ChannelType;

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

#endif