#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   FILE *fpr;
    char name[100] = {"E:\\WordCount\\WordCount\\"};//存储路径名
    int ch;
    int word = 0;
    int total = 0;
    int count = 0;
    char para[4];
    strcat(name,argv[2]);
    if((fpr = fopen(name,"r")) == NULL)
    {
        printf("Can't open %s\n",name);
        exit(1);
    }
    if(strcmp(argv[1],"-c") == 0){
    	while((ch = fgetc(fpr)) != EOF)
	    {
	       total++;
	    }
	    printf("\n字符数 = %d\n",total);
	}else if(strcmp(argv[1],"-w")==0){
		while((ch = fgetc(fpr)) != EOF)
	    {
	       total++;
	        if(ch==' ' || ch == ',')
           		word=0;
	        else if(word==0)
	        {
	            word=1;
	            count++;
	        }
	    }
		printf("\n单词数 = %d\n",count);
	}
    return 0;
}
