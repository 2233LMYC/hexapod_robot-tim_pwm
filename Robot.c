#include "Robot.h"
#include "main.h"
#include "servo.h"


void Ctrl_LF(int X,int angle)
{
	switch(X)
	{
		case F:
		{
			Servo_LF_F_angle.Target_angle = angle;
		}break;
		case M:
		{
			Servo_LF_M_angle.Target_angle = angle;
		}break;
		case D:
		{
			Servo_LF_D_angle.Target_angle = angle;
		}break;
	}
}

void Ctrl_LM(int X,int angle)
{
	switch(X)
	{
		case F:
		{
			Servo_LM_F_angle.Target_angle = angle;
		}break;
		case M:
		{
			Servo_LM_M_angle.Target_angle = angle;
		}break;
		case D:
		{
			Servo_LM_D_angle.Target_angle = angle;
		}break;
	}
}

void Ctrl_LD(int X,int angle)
{
	switch(X)
	{
		case F:
		{
			Servo_LD_F_angle.Target_angle = angle;
		}break;
		case M:
		{
			Servo_LD_M_angle.Target_angle = angle;
		}break;
		case D:
		{
			Servo_LD_D_angle.Target_angle = angle;
		}break;
	}
}

void Ctrl_RF(int X,int angle)
{
	switch(X)
	{
		case F:
		{
			Servo_RF_F_angle.Target_angle = angle;
		}break;
		case M:
		{
			Servo_RF_M_angle.Target_angle = angle;
		}break;
		case D:
		{
			Servo_RF_D_angle.Target_angle = angle;
		}break;
	}
}

void Ctrl_RM(int X,int angle)
{
	switch(X)
	{
		case F:
		{
			Servo_RM_F_angle.Target_angle = angle;
		}break;
		case M:
		{
			Servo_RM_M_angle.Target_angle = angle;
		}break;
		case D:
		{
			Servo_RM_D_angle.Target_angle = angle;
		}break;
	}
}

void Ctrl_RD(int X,int angle)
{
	switch(X)
	{
		case F:
		{
			Servo_RD_F_angle.Target_angle = angle;
		}break;
		case M:
		{
			Servo_RD_M_angle.Target_angle = angle;
		}break;
		case D:
		{
			Servo_RD_D_angle.Target_angle = angle;
		}break;
	}
}


void FORWARD(void)
{
	//LRL 抬起
	Ctrl_LD(M,120);
	Ctrl_RM(M,120);
	Ctrl_LF(M,120);
	HAL_Delay(1000);
	
	//LRL 向前，RLR向后
	Ctrl_LD(F,60);
	Ctrl_RD(F,60);
	Ctrl_RM(F,120);
	Ctrl_LM(F,120);
	Ctrl_LF(F,60);
	Ctrl_RF(F,60);
	HAL_Delay(1000);
	
	//LRL 放下
	Ctrl_LD(M,90);
	Ctrl_RM(M,90);
	Ctrl_LF(M,90);
	HAL_Delay(1000);
	
	//RLR 抬起
	Ctrl_RD(M,120);
	Ctrl_LM(M,120);
	Ctrl_RF(M,120);
	HAL_Delay(1000);
	
	//RLR 向前，LRL向后
	Ctrl_LD(F,90);
	Ctrl_RM(F,90);
	Ctrl_LF(F,90);
	Ctrl_RD(F,120);
	Ctrl_LM(F,60);
	Ctrl_RF(F,120);
	HAL_Delay(1000);
	
	//RLR 放下
	Ctrl_RD(M,90);
	Ctrl_LM(M,90);
	Ctrl_RF(M,90);
	HAL_Delay(1000);
	
}







