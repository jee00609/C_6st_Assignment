#include<stdio.h>

void asciiToInteger(char *str);

int main ()
{
	char number[10];


	printf("숫자를 입력하시오":\n");
	gets(number);
	printf("\n");

	asciiToInteger(number);

	printf("\n");

	return 0;
}

void asciiToInteger(char *str)
{

    int result = 0;
	int i=0;


        if (*str >= '0' && *str <= '9')
		{ 
			

            result =*str - '0';

        }        


	for(i=0;i<result;i++)
	{
		printf("%d",result);
	}

}
