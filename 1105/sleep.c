#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int a;
	if(argc ==1){
		printf("에러\n");
		exit(1);
	}
	a = atoi(argv[1]);
	printf("지연 시간:%d\n",a);
	printf("Hello\n");
	sleep(a);
	printf("Bye\n");
}
