#include<stdio.h>

int main()
{
	char ch;
	
	printf("(a,b,c) �߿� �ϳ��� �Է��ϼ���:");
	scanf("%c", &ch);
	
	switch(ch){
		case 'a':
			printf("a�� �Է��߽��ϴ�.");
			printf("����� �г����� apple�Դϴ�.\n");
			break;
		case 'b' : 
			printf("b�� �Է��߽��ϴ�.");
			printf("����� �г����� banana�Դϴ�.\n");
			break;
		case 'c' :
			printf("c�� �Է��߽��ϴ�.");
			printf("����� �г����� cherry�Դϴ�.\n");
			break;
		default :
			printf("(a,b,c) �߿� �ϳ��� �Է��ϼ���.\n");
	}
	
	
	return 0;
}
