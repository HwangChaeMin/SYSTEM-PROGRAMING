#include <stdio.h>
#include <unistd.h>

	int main(int argc, char *argv[]){
	
	int count=0,count2=0,count3=0;
	char c,buffer[80];

	FILE *fp1;

	if(argc!=2){
	fprintf(stderr,"사용법: %s 파일\n",argv[0]);
	return 1;
	}
	fp1=fopen(argv[1],"r");
	if(fp1==NULL){
	fprintf(stderr,"파일 %s 열기 오류",argv[1]);
	return 2;
	}

	while((c=fgetc(fp1))!=EOF){
	if(c==' '){
	count2++;
	}
	if(c=='\n'){
	count2++;
	count3++;
	}
	count++;
	}

	printf("글자 수 : %d 단어 수: %d 라인 수 : %d\n",count,count2,count3);

	fclose(fp1);
	return 0;
}
