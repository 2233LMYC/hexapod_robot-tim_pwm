
#include "servo.h"
#include "tim.h"
#include "stdlib.h"
#include "usart.h"

struct ServoAngle Servo_LF_F_angle;
struct ServoAngle Servo_LF_M_angle;
struct ServoAngle Servo_LF_D_angle;

struct ServoAngle Servo_LM_F_angle;
struct ServoAngle Servo_LM_M_angle;
struct ServoAngle Servo_LM_D_angle;

struct ServoAngle Servo_LD_F_angle;
struct ServoAngle Servo_LD_M_angle;
struct ServoAngle Servo_LD_D_angle;

struct ServoAngle Servo_RF_F_angle;
struct ServoAngle Servo_RF_M_angle;
struct ServoAngle Servo_RF_D_angle;

struct ServoAngle Servo_RM_F_angle;
struct ServoAngle Servo_RM_M_angle;
struct ServoAngle Servo_RM_D_angle;

struct ServoAngle Servo_RD_F_angle;
struct ServoAngle Servo_RD_M_angle;
struct ServoAngle Servo_RD_D_angle;

void Start_Angle_Init(void)//�����ʼ���Ƕȣ�xx�㣩
{
	Servo_LF_F_angle.Start_angle = 90;
	Servo_LF_M_angle.Start_angle = 90;
	Servo_LF_D_angle.Start_angle = 90;
	Servo_LF_F_angle.Target_angle = 90;
	Servo_LF_M_angle.Target_angle = 90;
	Servo_LF_D_angle.Target_angle = 90;
	
	Servo_LM_F_angle.Start_angle = 90;
	Servo_LM_M_angle.Start_angle = 90;
	Servo_LM_D_angle.Start_angle = 90;
	Servo_LM_F_angle.Target_angle = 90;
	Servo_LM_M_angle.Target_angle = 90;
	Servo_LM_D_angle.Target_angle = 90;
	
	Servo_LD_F_angle.Start_angle = 90;
	Servo_LD_M_angle.Start_angle = 90;
	Servo_LD_D_angle.Start_angle = 90;
	Servo_LD_F_angle.Target_angle = 90;
	Servo_LD_M_angle.Target_angle = 90;
	Servo_LD_D_angle.Target_angle = 90;
	
	Servo_RF_F_angle.Start_angle = 90;
	Servo_RF_M_angle.Start_angle = 90;
	Servo_RF_D_angle.Start_angle = 90;
	Servo_RF_F_angle.Target_angle = 90;
	Servo_RF_M_angle.Target_angle = 90;
	Servo_RF_D_angle.Target_angle = 90;

	Servo_RM_F_angle.Start_angle = 90;
	Servo_RM_M_angle.Start_angle = 90;
	Servo_RM_D_angle.Start_angle = 90;
	Servo_RM_F_angle.Target_angle = 90;
	Servo_RM_M_angle.Target_angle = 90;
	Servo_RM_D_angle.Target_angle = 90;
	
	Servo_RD_F_angle.Start_angle = 90;
	Servo_RD_M_angle.Start_angle = 90;
	Servo_RD_D_angle.Start_angle = 90;
	Servo_RD_F_angle.Target_angle = 90;
	Servo_RD_M_angle.Target_angle = 90;
	Servo_RD_D_angle.Target_angle = 90;
	
	SERVO_TIM_LF->CCR1 = Angle_LF_F(Servo_LF_F_angle.Start_angle);
	Servo_LF_F_angle.Temp_angle = Servo_LF_F_angle.Start_angle;
	SERVO_TIM_LF->CCR2 = Angle_LF_M(Servo_LF_M_angle.Start_angle);
	Servo_LF_M_angle.Temp_angle = Servo_LF_M_angle.Start_angle;
	SERVO_TIM_LF->CCR3 = Angle_LF_D(Servo_LF_D_angle.Start_angle);
	Servo_LF_D_angle.Temp_angle = Servo_LF_D_angle.Start_angle;
	
	SERVO_TIM_LM->CCR1 = Angle_LM_F(Servo_LM_F_angle.Start_angle);
	Servo_LM_F_angle.Temp_angle = Servo_LM_F_angle.Start_angle;
	SERVO_TIM_LM->CCR2 = Angle_LM_M(Servo_LM_M_angle.Start_angle);
	Servo_LM_M_angle.Temp_angle = Servo_LM_M_angle.Start_angle;
	SERVO_TIM_LM->CCR3 = Angle_LM_D(Servo_LM_D_angle.Start_angle);
	Servo_LM_D_angle.Temp_angle = Servo_LM_D_angle.Start_angle;
	
	SERVO_TIM_LD->CCR2 = Angle_LD_F(Servo_LD_F_angle.Start_angle);
	Servo_LD_F_angle.Temp_angle = Servo_LD_F_angle.Start_angle;
	SERVO_TIM_LD->CCR3 = Angle_LD_M(Servo_LD_M_angle.Start_angle);
	Servo_LD_M_angle.Temp_angle = Servo_LD_M_angle.Start_angle;
	SERVO_TIM_LD->CCR4 = Angle_LD_D(Servo_LD_D_angle.Start_angle);
	Servo_LD_D_angle.Temp_angle = Servo_LD_D_angle.Start_angle;
	
	SERVO_TIM_RF->CCR1 = Angle_RF_F(Servo_RF_F_angle.Start_angle);
	Servo_RF_F_angle.Temp_angle = Servo_RF_F_angle.Start_angle;
	SERVO_TIM_RF->CCR2 = Angle_RF_M(Servo_RF_M_angle.Start_angle);
	Servo_RF_M_angle.Temp_angle = Servo_RF_M_angle.Start_angle;
	SERVO_TIM_RF->CCR3 = Angle_RF_D(Servo_RF_D_angle.Start_angle);
	Servo_RF_D_angle.Temp_angle = Servo_RF_D_angle.Start_angle;
	
	SERVO_TIM_RM->CCR1 = Angle_RM_F(Servo_RM_F_angle.Start_angle);
	Servo_RM_F_angle.Temp_angle = Servo_RM_F_angle.Start_angle;
	SERVO_TIM_RM->CCR2 = Angle_RM_M(Servo_RM_M_angle.Start_angle);
	Servo_RM_M_angle.Temp_angle = Servo_RM_M_angle.Start_angle;
	SERVO_TIM_RM->CCR3 = Angle_RM_D(Servo_RM_D_angle.Start_angle);
	Servo_RM_D_angle.Temp_angle = Servo_RM_D_angle.Start_angle;
	
	SERVO_TIM_RD->CCR1 = Angle_RD_F(Servo_RD_F_angle.Start_angle);
	Servo_RD_F_angle.Temp_angle = Servo_RD_F_angle.Start_angle;
	SERVO_TIM_RD->CCR2 = Angle_RD_M(Servo_RD_M_angle.Start_angle);
	Servo_RD_M_angle.Temp_angle = Servo_RD_M_angle.Start_angle;
	SERVO_TIM_RD->CCR3 = Angle_RD_D(Servo_RD_D_angle.Start_angle);
	Servo_RD_D_angle.Temp_angle = Servo_RD_D_angle.Start_angle;
	
}
	
void Servo_all_Init(void)
{
	HAL_TIM_PWM_Start(&servo_tim_lf,Front); //��ǰǰ�˶��
	HAL_TIM_PWM_Start(&servo_tim_lf,Middle);//��ǰ�в����
	HAL_TIM_PWM_Start(&servo_tim_lf,End);		//��ǰĩ�˶��
	
	HAL_TIM_PWM_Start(&servo_tim_lm,Front); //����ǰ�˶��
	HAL_TIM_PWM_Start(&servo_tim_lm,Middle);//�����в����
	HAL_TIM_PWM_Start(&servo_tim_lm,End);		//����ĩ�˶��
	
	HAL_TIM_PWM_Start(&servo_tim_ld,Middle);//���ǰ�˶��
	HAL_TIM_PWM_Start(&servo_tim_ld,End);   //����в����
	HAL_TIM_PWM_Start(&servo_tim_ld,Endd);	//���ĩ�˶��
	
	HAL_TIM_PWM_Start(&servo_tim_rf,Front); //��ǰǰ�˶��
	HAL_TIM_PWM_Start(&servo_tim_rf,Middle);//��ǰ�в����
	HAL_TIM_PWM_Start(&servo_tim_rf,End);		//��ǰĩ�˶��
	
	HAL_TIM_PWM_Start(&servo_tim_rm,Front); //����ǰ�˶��
	HAL_TIM_PWM_Start(&servo_tim_rm,Middle);//�����в����
	HAL_TIM_PWM_Start(&servo_tim_rm,End);		//����ĩ�˶��
	
	HAL_TIM_PWM_Start(&servo_tim_rd,Front); //�Һ�ǰ�˶��
	HAL_TIM_PWM_Start(&servo_tim_rd,Middle);//�Һ��в����
	HAL_TIM_PWM_Start(&servo_tim_rd,End);		//�Һ�ĩ�˶��
	
	Start_Angle_Init();
	
}





