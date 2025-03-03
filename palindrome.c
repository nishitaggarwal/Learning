#include <stdio.h>
int main(){
    int i  = 121;
    int rev = 0,rem = 0;
    int n = 121;

    while(i!=0){
        rev = i%10 ;
        rem = (rem*10 )+rev;
        i/=10;
    }
    if(n == rem){
        printf("This is palindrome:- %d",rem);
    }
}