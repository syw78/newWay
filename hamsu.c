/*
#include <stdio.h>
int sum(int a,int b);
int sub(int num,int num2);
int mul(double num1,double num2);
double div(double num,double num2);

int main(void)
{
	int num=0,num2=0,result=0,result2=0,result3=0;
	double result4=0.0;
	do
	{
		printf("����");
		scanf("%d",&num);
		printf("����");
		scanf("%d",&num2);

	
	}while((num<1 || num>=100)||(num2<1||num2>=100));
	
	result=sum(num,num2);

	result2=sub(num,num2);

	result3=mul(num,num2);

	result4=div(num,num2);

	printf("%d + %d = %d \n",num,num2,result);
	printf("%d - %d = %d \n",num,num2,result2);
	printf("%d * %d = %d \n",num,num2,result3);
	printf("%d / %d = %lf \n",num,num2,result4);

	return 0;

}
int sum(int a,int b)
{
	int result=0;
	result=a+b;
	return result;
}
int sub(int num,int num2)
{
	int result=0;
	result=num-num2;
	return result;
}
int mul(double num1,double num2)
{
	int result=0;
	result=num1*num2;
	return result;
}
double div(double num,double num2)
{
	double result=0.0;
	result= num/num2;
	return result;
}
*/

/**/

/*
#include <stdio.h>
int max(int a, int b)                    // �Լ��� ����(11 ����)
{    
        if(a > b)
            return a;
        else
            return b;
}
int min(int a , int b)
{
	if(a<b)
		return a;																		//���� 9-2��
	else
		return b;
}
int input_data(int a)
{
	int i=0;
	for(;;)
	{
		printf("%d��° ���� �Է��ϼ���",a);
		scanf("%d",&i);
		if(i>=1&&i<=100) break;	
	}
	return i;
}
int main(void)
{
        int i=0,j=0;
        int k=0,z=0;
    
        i = input_data(1);
		j = input_data(2);
        k = max(i,j); 
		z = min(i,j);//�Լ��� ȣ��

        printf("%d�� %d �� ū ���� %d�Դϴ�. \n", i, j, k);
        printf("%d�� %d �� �������� %d�Դϴ�. \n",i,j,z);
	return 0;
}*/

/*
#include <stdio.h>
double divide(double x, double y);
double input(void);
void output(double x);
void information(void);

int main(void)
{
	double num1,num2,result;

	information();
	
	num1=input();

	num2=input();

	result=divide(num1,num2);
	output(result);
	
	return 0;
}

double divide(double x, double y)										//���� 9-3
{
	double val;
	val=x/y;
	return val;
}
double input(void)
{
	double val;					
	for(;;)
	{
		printf("�Ǽ� �Է�");
		scanf("%lf",&val);
		if(val>=1&&val<=100) break;	
	}
		return val;
}
void output(double x)
{
	printf("������ ���:%lf \n",x);
}
void information(void)
{
	printf("---���α׷� ����--- \n");
	return ;
}*/

/*
#include <stdio.h>
int sum(void);
int input(void);
void output(int x);

int main(void)
{
	int result=0;
	printf("---���α׷� ����---\n");
	
	result=sum();
	output(result);

	return 0;
}
int sum(void)
{
	int i=0,total=0,num=0;
	num=input();													// 240p ����9-4

	for(i=1;i<=num;i++)
	{
		total=total+i;
	}
	return total;
}
int input(void)
{
	int val;
	for(;;)
	{
		printf("���� �Ѱ��� �Է��ϼ���");
		scanf("%d",&val);	
		if(val>=1&&val<=100) break;
	}
	return val;
}
void output(int x)
{
	printf("��� : %d \n",x);
	return ;
}
*/
/*
#include <stdio.h>
int input(void);

int abs(int num);

int main()
{
	int sum=0,result=0;

	sum=input();
	result=abs(sum);
	printf("������ : %d�Դϴ�. \n",result);							//266p��������1��
	
	return 0;
}
int input(void)
{
	int num=0;
	for(;;)
	{
		printf("������ �Է��ϼ���");
		scanf("%d",&num);

		if(num>=-100&&num<=100) break;
	}
	return num;
}
int abs(int num)
{																
	int val=0;

	if(num<0)
	{
		val=num*-1;
	}
	else
	{
		val=num;	
	}
	return val;
}*/
/*
#include <stdio.h>
void input_data(void);
int plus(int i,int j);
int minus(int i, int j);
int multiply(int i , int j);
float divide(int i ,int j);

int num1=0,num2=0;
int main()
{
	int result=0;
	double result2=0.0;

	input_data();


	
	result=plus(num1,num2);
	printf("%d + %d = %d \n",num1,num2,result);

	result=minus(num1,num2);
	{
		printf("%d - %d = %d \n",num1,num2,result);
	}
	result=multiply(num1,num2);
	{
		printf("%d * %d = %d \n",num1,num2,result);													//266p��������3��
	}
	result2=divide(num1,num2);
	{
		printf("%d / %d = %lf \n",num1,num2,result2);
	}
	return 0;
}
int plus(int i ,int j)
{
	int result=0;
	result=i+j;

	return result;
}
int minus(int i ,int j)
{
	int result=0;
	result= i-j;
	return result;
}
int multiply(int i ,int j)
{
	int result=0;
	result= i*j;
	return result;
}
float divide(float i ,float j)
{
	float result=0;
	result= i/j;
	return result;
}
void input_data(void)
{
	int num=0;
	for(;;)
	{
		printf("input numbers 1:");
		scanf("%d",&num1);
		if(num1<1||num1>100) continue;

		printf("input numbers 2:");
		scanf("%d",&num2);
		if(num2<1||num2>100) continue;
		break;
	}
	return ;
}*/
/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer_random_value(void);
int user_select_value(void);
void match_result(int comValue,int userValue);

int main()
{
	int i=0,comValue=0,userValue=0;
	//1.��ǻ�� ������ ��													//����������
	comValue=computer_random_value();
	//2.����� �Է°�

	userValue=user_select_value();
	//3.��ǻ�Ͱ��� ����ڰ��� ����� ����� ���
	match_result(comValue,userValue);
																			//5~49���� ���Ѵ�
																			//2.��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ���� ���� ���� ���Ƿ� �����Ѵ�.

																			//->����ó����������� �����Ѵ�.
		
																			///3.����ڴ� ���α׷� �Է¾ȳ� �޼����� ���� 3���߿� �Ѱ��� �����Ѵ�.

																			//->�ȳ��޼��� :printf
		
																			//->3���߿� �Ѱ�����:scanf

																				//4.������� ������ ������ ���� ������ �����Ͽ��� ���� �̰���� ������ �˷��ش�.
																				//printf("%d \n",rand()%(21154-4727+1)+4727);		              //���� ���� rand()(%�ְ�-�ּڰ�+1)+�ּڰ�
		
																						//1~3
																				//(3-1+1)+1
		
																				//279~ 5433
				
																				//rand()%(5433-279+1)+279
																				//srand( )�ƹ����̳� �ָ� �ʱ�ȭ�ȴ�. �ٵ� srand(time(NULL))�� �ָ� �ʱ�ȭ�ȴ�.
																				//((����)-(ù��)+1)+ù��	
	



	return 0;
}
int computer_random_value(void)
{
	int comValue=0;
	srand(time(NULL));
	comValue=rand()%(3-1+1)+1;
	return comValue;
}
int user_select_value(void)
{
	int userValue=0;
	do
	{
		printf("�����Ͻÿ�(1.����2.����3.��) :");
		scanf("%d",&userValue);
	
	}while(userValue<1 || userValue>3);

	return userValue;
}
void match_result(int comValue,int userValue)
{
		switch(userValue-comValue)
	{
	case 0: printf("�����ϴ�."); break;
	case 1: 
	case -2: printf("�̰���ϴ�!! \n"); break;
	case -1: printf("����ڴ� ������ \n"); break;
	default :printf("����ü ���� ���� �Է��߾�� \n");break;
	}
	return ;
}*/
/*
#include <stdio.h>
int input(void);
int sum(int num);

int main(void)
{
	int num=0,i=0,sum1=0;
	//1.Ű����κ��� �����Է�
	num=input();
	//2. 1���� num���� ���� ���Ѵ�.
	sum1 = sum(num);
	//3. �հ踦 ����Ѵ�.

	printf("1���� %d������ ���� : %d \n",num,sum1);

	return 0;
}
//1.Ű����κ��� ������ �Ѱ� �Է¹޴´�.(int number)(scanf())
//2.1���� �Էµ� ���������� �հ踦 ���Ѵ�.(1~n(n��100�̶��):1~100���� ���� ���Ѵ�.)
//for���� Ȱ���ؼ� �հ踦 ���Ѵ� (sum=sum+i)	
//3.�հ踦 ����Ѵ�.(printf)
int input(void)
{
	int num=0;

	printf("�Ѱ��� �������� �Է��ϼ��� :");
	scanf("%d",&num);

	return num;
}
int sum(int num)
{
	int i=0,sum=0;
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	return sum;
}*/

/*
#include <stdio.h>

int main(void)
{
	int num=0;
	for(;;)
	{
	printf("�� ��ȣ�� �Է��Ͻÿ�(1-12)");
	scanf("%d",&num);
	
	switch(num)
	{
	case 1:
		printf("January 1�� \n"); break;
	case 2:
		printf("Feburary 2�� \n"); break;
	case 3:
		printf("March 3�� \n"); break;
	case 4:
		printf("April 4�� \n"); break;
	case 5:
		printf("May 5�� \n"); break;
	case 6:
		printf("June 6�� \n"); break;					//����Ʈ 6��
	case 7:
		printf("July 7�� \n"); break;
	case 8:
		printf("August 8�� \n"); break;
	case 9:
		printf("September 9�� \n"); break;
	case 10:
		printf("October 10�� \n"); break;
	case 11:
		printf("November 11�� \n"); break;
	case 12:
		printf("December 12�� \n"); break;
	}
	 if(num>=13) break;
	}
	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	int kg=0,cm=0,result=0;

	printf("Ű�� ü���� �Է��Ͻÿ�");
	scanf("%d %d",&cm,&kg);
	result=(cm-100)*0.9;

	if(kg <result-2)
	{
		printf("��ü���Դϴ� \n");
	}
	else if(kg>=(result-2)&&kg<=(result+2))
	{
		printf("ǥ���Դϴ� \n");				//����Ʈ 7��
	}
	else
	{
		printf("��ü���Դϴ�. \n");
	}
	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	int time=0,age=0;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�,����)");
	scanf("%d %d",&time,&age);

	if(time<=17 &&(age>12&&age<65))
	{
		printf("����� 34000���Դϴ�. \n");						//����Ʈ 8��
	}
	else 
	{
		if(time<17&&(age>=3&&age<=12||age>=65))
		{
			printf("����� 25000���Դϴ�. \n");
		}
		else
		{
			printf("����� 10000���Դϴ�. \n");
		}
	}

	

	


	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	double x=0.0, result=0.0;

	printf("x�ǰ��� �Է��Ͻÿ�");
	scanf("%lf",&x);

	if(x<=0)
	{
		result=(x*x*x)-9*x+2;
		printf("f(x)�� ���� %lf \n",result);				����Ʈ9��
	}
	else if(x>0)
	{
		result=7*x+2;
		printf("f(x)�� ���� %lf \n",result);
	}

	return 0;
}*/
/*
#include <stdio.h>
int input_data(void)
{
	int num=0;
	do
	{
		printf("���� �Է��ϼ���");
		scanf("%d",&num);
	
	}while(num<1||num>100);															//���� 9-7���� ����

	return num;
}
int sum(int a ,int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}
void sum_printf(int a, int b, int sum)
{
	printf("%d+%d=%d",a,b,sum);
	return ;
}

int main(void)
{
	int a=0,b=0;
	int result=0;

	a=input_data();
	b=input_data();
	result=sum(a,b);
	sum_printf(a,b,result);

	return 0;
}*/
/*
#include <stdio.h>
int input_Value(void);
int sum_Value(int num1 ,int num2);
void printf_sum(int num1,int num2,int sum);

int main(void)
{
	int num1=0,num2=0,sum=0;
							//1.�μ��� �Է��ϼ���.
	num1=input_Value();
	num2=input_Value();
	//2.�μ��� �հ踦 ���Ѵ�.
	sum=sum_Value(num1, num2);
	printf_sum(num1,num2,sum);

	//3.����� ����Ѵ�.
	
	return 0;
}
int input_Value(void)
{
	int num=0;
	for(;;)
	{
		printf("���� �Է��ϼ��� 1~100����");
		scanf("%d",&num);
		if(num>=1&&num<=100) break;
	}
	return num;
}
int sum_Value(int num1 ,int num2)
{
	int sum=0;
	sum=num1+num2;
	return sum;
}
void printf_sum(int num1,int num2,int sum)
{
	printf("%d + %d = %d \n",num1,num2,sum);
}*/
/*
#include <stdio.h>
void input_Value(void);
void sum_Value(void);
void printf_sum(void);

int num1=0,num2=0,sum=0;//��ź�ҳ�� bss������ ����. ��������
int main(void)
{
	
							//1.�μ��� �Է��ϼ���.
	input_Value();
	//2.�μ��� �հ踦 ���Ѵ�.
	sum_Value();
	printf_sum();

	//3.����� ����Ѵ�.
	
	return 0;
}
void input_Value(void)
{
	for(;;)
	{																						//�������� 
		printf("���� �Է��ϼ��� 1~100����");
		scanf("%d %d",&num1,&num2);
		if((num1>=1&&num1<=100)&&(num2>=1&&num2<=100)) break;
	}
	return ;
}
void sum_Value(void)
{
	sum=num1+num2;
	return ;
}
void printf_sum(void)
{
	printf("%d + %d = %d \n",num1,num2,sum);

	return ;
}*/

