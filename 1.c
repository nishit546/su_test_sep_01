#include <stdio.h>
int main(){

    char c;
    scanf("%c",&c);
if((c>='A'&&c<='Z') || (c>='a'&&c<='b')){
    printf("'%c' is an alphabet",c);
}
else if(c>=0&&c<=9){

    printf("'%c' it is a digit",c);
}
else{
    printf("'%c' it is a special symbol",c);
}
    return 0;
}