#include<stdio.h>
#include<string.h>

int main(){
    char str[5][50],temp[50];
    printf("enter 5 words\n");
    for (int i=0;i<5;i++){
        fgets(str[i],sizeof(str[i]),stdin);
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;++j){
            if(strcmp(str[i],str[j])>0)

            //   strcmp returns value <0 if str[i] is less than str[j]
            //  strcmp returns value =0 if both are equal
            //  strcmp returns value > if str[i] is greater than str[j]
            
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("words in lexicographical order is\n");
    for(int i=0;i<5;++i){
        fputs(str[i],stdout);
    }
    return 0;
}