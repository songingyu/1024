//성년인 경우에는 "당신은 성인입니다," "입장료 = 15000원입니다."출력
//미성년인 경우에는 "당신은 미성년입니다." "입장료 = 9000원입니다."출력

#include<stdio.h>
 int main()
 {
 	int age,money = 15000;
    printf("나이를 입력하세요: ");
	scanf("%d",&age);
 	
 	if(age >=19)
 	{
 		printf("당신은 성인입니다.\n");
 		printf("입장료는 %d입니다.",money);
	 }
	 else
	 {
	 	money =9000;
	 	printf("당신은 미성년입니다.\n");
	 	printf("입장료는 %d입니다.",money);
	  } 
 	
 	
  } 
