#include <stdio.h>
int main(){
   int a,b,c,d,e;
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int per=(a+b+c+d+e/500)*100;
    if(per>=90){
        printf("A+");
    }
    else if(per>=80){
        printf("A");
    }
    else if(per>=70){
        printf("B");
    }
    else if(per>=60){
        printf("C");
    }
    else if(per>=50){
        printf("D");

    }
    else if(per>=40){
        printf("E");
    }
    else {
        printf("fail");
    }
}