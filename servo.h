
#ifndef SERVO_H_
#define SERVO_H_

#define Angle_LF_F(x)		50+(200/180)*x+8 //���Ƕ�ת��Ϊ�Ĵ���ֵ
#define Angle_LF_M(x)		50+(200/180)*x+4 
#define Angle_LF_D(x)		50+(200/180)*x-10 
#define Angle_LM_F(x)		50+(200/180)*x+4 
#define Angle_LM_M(x)		50+(200/180)*x+0 //	��β	F =  ����������	
#define Angle_LM_D(x)		50+(200/180)*x-2 // L�� ����==�����
#define Angle_LD_F(x)		50+(200/180)*x+4 // R�� ����==����ǰ
#define Angle_LD_M(x)		50+(200/180)*x+4 
#define Angle_LD_D(x)		50+(200/180)*x+4 
#define Angle_RF_F(x)		50+(200/180)*x+2 //	��β	M =  ���в����
#define Angle_RF_M(x)		50+(200/180)*x-2 //	L�� ����==��̧��
#define Angle_RF_D(x)		50+(200/180)*x-8 //	R�� ����==��̧��
#define Angle_RM_F(x)		50+(200/180)*x+8 
#define Angle_RM_M(x)		50+(200/180)*x-8 
#define Angle_RM_D(x)		50+(200/180)*x-2 //	��β	D =  ���˶��
#define Angle_RD_F(x)		50+(200/180)*x+4 //	L�� ����==��̧��
#define Angle_RD_M(x)		50+(200/180)*x+4 //	R�� ����==��̧��
#define Angle_RD_D(x)		50+(200/180)*x+8

//��ǰ
#define SERVO_TIM_LF  TIM1
#define servo_tim_lf  htim1
//����
#define SERVO_TIM_LM  TIM2
#define servo_tim_lm  htim2
//���
#define SERVO_TIM_LD  TIM3
#define servo_tim_ld  htim3
//��ǰ
#define SERVO_TIM_RF  TIM4
#define servo_tim_rf  htim4
//����
#define SERVO_TIM_RM  TIM5
#define servo_tim_rm  htim5
//�Һ�
#define SERVO_TIM_RD  TIM8
#define servo_tim_rd  htim8

#define Front  TIM_CHANNEL_1//ǰ�˶��������
#define Middle TIM_CHANNEL_2//�в����
#define End		 TIM_CHANNEL_3//ĩ�˶�����ż⣩
#define Endd	 TIM_CHANNEL_4

enum {F=1,M,D};

struct ServoAngle
{
	int Start_angle;
	int Temp_angle;
	int Target_angle;
	int Ctrl_angle;
	int Abs_angle;
};
extern struct ServoAngle Servo_LF_F_angle;
extern struct ServoAngle Servo_LF_M_angle;
extern struct ServoAngle Servo_LF_D_angle;

extern struct ServoAngle Servo_LM_F_angle;
extern struct ServoAngle Servo_LM_M_angle;
extern struct ServoAngle Servo_LM_D_angle;

extern struct ServoAngle Servo_LD_F_angle;
extern struct ServoAngle Servo_LD_M_angle;
extern struct ServoAngle Servo_LD_D_angle;

extern struct ServoAngle Servo_RF_F_angle;
extern struct ServoAngle Servo_RF_M_angle;
extern struct ServoAngle Servo_RF_D_angle;

extern struct ServoAngle Servo_RM_F_angle;
extern struct ServoAngle Servo_RM_M_angle;
extern struct ServoAngle Servo_RM_D_angle;

extern struct ServoAngle Servo_RD_F_angle;
extern struct ServoAngle Servo_RD_M_angle;
extern struct ServoAngle Servo_RD_D_angle;

void Servo_all_Init(void);
void Start_Angle_Init(void);//�����ʼ���Ƕȣ�xx�㣩


#endif
