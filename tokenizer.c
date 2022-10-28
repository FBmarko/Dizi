#include<stdio.h>
#include<string.h>
int main() {
	char dosyaadi[100];
	char c[500];
	char ch;
	int i=0;
	FILE *dosya;
	FILE *fp;
	printf("Dosya adini giriniz:");
	gets(dosyaadi);
	fp=fopen(dosyaadi,"r");
	if(fp==NULL){
		printf("Dosya Bulunamadi...!!!");
		return 0;
	}
	printf("Dosyanin Asil Hali:\n");
	 do {
        ch = fgetc(fp);
        printf("%c", ch);

       
    } while (ch != EOF);
    fclose(fp);
	dosya=fopen(dosyaadi,"r");
	while(!feof(dosya)){
	c[i]=(fgetc(dosya));
	i++;
}
	printf("Dosyanin Kelimelestirilmis Hali:\n");
	char* piece=strtok(c,","" ""("")""[""]");
	while(piece!= NULL){	
	printf("%s\n",piece);
	piece = strtok(NULL,","" ""("")""[""]");
}
	fclose(dosya);
	return 0;	
}
