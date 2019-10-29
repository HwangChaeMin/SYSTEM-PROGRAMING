#include <stdio.h>
void main(){
	int a,b;
	char c;

	printf("반복 횟수 입력:");
	scanf("%d",&a);

	for(int i=0;i<a;i++){
		printf("문자와 숫자 입력:");
		//getchar(); buffer 제거
		scanf(" %c %d",&c,&b);
		printf("당신은 %c와 %d를 입력했습니다.",c,b);
		for(int j=0;j<b;j++){
			printf("%c",c);
		}
		printf("\n");
	}
}
