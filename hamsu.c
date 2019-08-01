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
		printf("정수");
		scanf("%d",&num);
		printf("정수");
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
int max(int a, int b)                    // 함수의 정의(11 형태)
{    
        if(a > b)
            return a;
        else
            return b;
}
int min(int a , int b)
{
	if(a<b)
		return a;																		//예제 9-2번
	else
		return b;
}
int input_data(int a)
{
	int i=0;
	for(;;)
	{
		printf("%d번째 숫자 입력하세요",a);
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
		z = min(i,j);//함수의 호출

        printf("%d와 %d 중 큰 수는 %d입니다. \n", i, j, k);
        printf("%d와 %d 중 작은수는 %d입니다. \n",i,j,z);
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

double divide(double x, double y)										//예제 9-3
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
		printf("실수 입력");
		scanf("%lf",&val);
		if(val>=1&&val<=100) break;	
	}
		return val;
}
void output(double x)
{
	printf("나눗셈 결과:%lf \n",x);
}
void information(void)
{
	printf("---프로그램 시작--- \n");
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
	printf("---프로그램 시작---\n");
	
	result=sum();
	output(result);

	return 0;
}
int sum(void)
{
	int i=0,total=0,num=0;
	num=input();													// 240p 예제9-4

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
		printf("정수 한개를 입력하세요");
		scanf("%d",&val);	
		if(val>=1&&val<=100) break;
	}
	return val;
}
void output(int x)
{
	printf("결과 : %d \n",x);
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
	printf("절댓값은 : %d입니다. \n",result);							//266p연습문제1번
	
	return 0;
}
int input(void)
{
	int num=0;
	for(;;)
	{
		printf("정수를 입력하세요");
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
		printf("%d * %d = %d \n",num1,num2,result);													//266p연습문제3번
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
	//1.컴퓨터 임의의 값													//가위바위보
	comValue=computer_random_value();
	//2.사용자 입력값

	userValue=user_select_value();
	//3.컴퓨터값과 사용자값을 대결한 결과값 출력
	match_result(comValue,userValue);
																			//5~49까지 구한다
																			//2.컴퓨터는 사용자에게 알리지 않고 가위 바위 보를 임의로 선택한다.

																			//->랜덤처리방법선택을 진행한다.
		
																			///3.사용자는 프로그램 입력안내 메세지에 따라서 3개중에 한개를 선택한다.

																			//->안내메세지 :printf
		
																			//->3개중에 한개선택:scanf

																				//4.사용자의 선택이 끝나면 누가 무엇을 선택하였고 누가 이겼는지 비겼는지 알려준다.
																				//printf("%d \n",rand()%(21154-4727+1)+4727);		              //랜덤 공식 rand()(%최고값-최솟값+1)+최솟값
		
																						//1~3
																				//(3-1+1)+1
		
																				//279~ 5433
				
																				//rand()%(5433-279+1)+279
																				//srand( )아무값이나 주면 초기화된다. 근데 srand(time(NULL))을 주면 초기화된다.
																				//((끝값)-(첫값)+1)+첫값	
	



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
		printf("선택하시오(1.가위2.바위3.보) :");
		scanf("%d",&userValue);
	
	}while(userValue<1 || userValue>3);

	return userValue;
}
void match_result(int comValue,int userValue)
{
		switch(userValue-comValue)
	{
	case 0: printf("비겼습니다."); break;
	case 1: 
	case -2: printf("이겼습니다!! \n"); break;
	case -1: printf("사용자님 졌어요ㅠ \n"); break;
	default :printf("도대체 무슨 값을 입력했어요 \n");break;
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
	//1.키보드로부터 정수입력
	num=input();
	//2. 1부터 num까지 합을 구한다.
	sum1 = sum(num);
	//3. 합계를 출력한다.

	printf("1부터 %d까지의 합은 : %d \n",num,sum1);

	return 0;
}
//1.키보드로부터 정수를 한개 입력받는다.(int number)(scanf())
//2.1부터 입력된 정수값까지 합계를 구한다.(1~n(n이100이라면):1~100까지 합을 구한다.)
//for문을 활용해서 합계를 구한다 (sum=sum+i)	
//3.합계를 출력한다.(printf)
int input(void)
{
	int num=0;

	printf("한개의 정수값을 입력하세요 :");
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
	printf("월 번호를 입력하시오(1-12)");
	scanf("%d",&num);
	
	switch(num)
	{
	case 1:
		printf("January 1월 \n"); break;
	case 2:
		printf("Feburary 2월 \n"); break;
	case 3:
		printf("March 3월 \n"); break;
	case 4:
		printf("April 4월 \n"); break;
	case 5:
		printf("May 5월 \n"); break;
	case 6:
		printf("June 6월 \n"); break;					//프린트 6번
	case 7:
		printf("July 7월 \n"); break;
	case 8:
		printf("August 8월 \n"); break;
	case 9:
		printf("September 9월 \n"); break;
	case 10:
		printf("October 10월 \n"); break;
	case 11:
		printf("November 11월 \n"); break;
	case 12:
		printf("December 12월 \n"); break;
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

	printf("키와 체중을 입력하시오");
	scanf("%d %d",&cm,&kg);
	result=(cm-100)*0.9;

	if(kg <result-2)
	{
		printf("저체중입니다 \n");
	}
	else if(kg>=(result-2)&&kg<=(result+2))
	{
		printf("표준입니다 \n");				//프린트 7번
	}
	else
	{
		printf("과체중입니다. \n");
	}
	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	int time=0,age=0;

	printf("현재 시간과 나이를 입력하시오(시간,나이)");
	scanf("%d %d",&time,&age);

	if(time<=17 &&(age>12&&age<65))
	{
		printf("요금은 34000원입니다. \n");						//프린트 8번
	}
	else 
	{
		if(time<17&&(age>=3&&age<=12||age>=65))
		{
			printf("요금은 25000원입니다. \n");
		}
		else
		{
			printf("요금은 10000원입니다. \n");
		}
	}

	

	


	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	double x=0.0, result=0.0;

	printf("x의값을 입력하시오");
	scanf("%lf",&x);

	if(x<=0)
	{
		result=(x*x*x)-9*x+2;
		printf("f(x)의 값은 %lf \n",result);				프린트9번
	}
	else if(x>0)
	{
		result=7*x+2;
		printf("f(x)의 값은 %lf \n",result);
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
		printf("수를 입력하세요");
		scanf("%d",&num);
	
	}while(num<1||num>100);															//예제 9-7변형 문제

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
							//1.두수를 입력하세요.
	num1=input_Value();
	num2=input_Value();
	//2.두수의 합계를 구한다.
	sum=sum_Value(num1, num2);
	printf_sum(num1,num2,sum);

	//3.결과를 출력한다.
	
	return 0;
}
int input_Value(void)
{
	int num=0;
	for(;;)
	{
		printf("수를 입력하세요 1~100까지");
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

int num1=0,num2=0,sum=0;//방탄소년단 bss영역에 들어간다. 전역변수
int main(void)
{
	
							//1.두수를 입력하세요.
	input_Value();
	//2.두수의 합계를 구한다.
	sum_Value();
	printf_sum();

	//3.결과를 출력한다.
	
	return 0;
}
void input_Value(void)
{
	for(;;)
	{																						//전역변수 
		printf("수를 입력하세요 1~100까지");
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

