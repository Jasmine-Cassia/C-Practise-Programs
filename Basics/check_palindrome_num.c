#include<stdio.h>
int main(){
    int n, temp, sum = 0, r;
    printf("Enter a number: \n");
    scanf("%d", &n);
    temp = n;
    while(n > 0){
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (sum == temp)
    printf("Palindrome number");
    else
    printf("Not a Palindrome number");
    return 0;
}
