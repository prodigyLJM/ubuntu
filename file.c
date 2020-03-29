#include<stdio.h>
#include<stdlib.h>
int main(void){
	FILE * fp,*fp1;
	int a;
	if((fp=fopen("/root/hello.sh","a+"))==NULL){
		printf("failed in open the file\n");
		exit(1);
	}else{
		printf("successfully in open the file\n");
	}
	if((fp1=fopen("/root/hello1.sh","w+"))==NULL){
		printf("failed in open the file\n");
		exit(1);
	}else{
		printf("successfully in open the file\n");
	}
	while((a=fgetc(fp))!=EOF){
		fputc(a,fp1);
		putchar(a);
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}
