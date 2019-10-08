#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){

	 int count1=0,count2=0;
	 char c,c2,buffer1[80],buffer2[80];
	 FILE *fp1,*fp2;

	 if(argc!=3){
	 fprintf(stderr,"사용법: %s 파일\n",argv[0]);

	 return 1;
	 }

	 fp1=fopen(argv[1],"r");

	 if(fp1==NULL){

	 fprintf(stderr,"파일 %s 열기 오류",argv[1]);
	 return 2;
	 }

	 fp2=fopen(argv[2],"r");

	 while((((c=getc(fp1)))&&((c2=getc(fp2))))!=EOF){
	 if(c=='\n')
	 count1++;
	 if(c!=c2)
	 break;
	 }

	 fp1=fopen(argv[1],"r");
	 fp2=fopen(argv[2],"r");

	 while((fgets(buffer1,30,fp1)!=NULL)&&(fgets(buffer2,30,fp2)!=NULL)){
	 if(count1==count2)
	 break;
	 count2++;
	 }

	 count2++;
 printf("%d번쨰 행이 다르다. \n %s파일:%s %s파일:%s",count2,argv[1],buffer1,argv[2],buffer2);


	 fclose(fp1);
	 fclose(fp2);

	 return 0;
 }
