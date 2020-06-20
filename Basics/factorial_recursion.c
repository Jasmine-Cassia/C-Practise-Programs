#include<stdio.h>
long compute_fact(int n){
    if (n == 0)
      return 1;
    else
      return (n * compute_fact(n - 1));
}
int main(){
    int n;
    long fact;
    printf("Enter a number: \n");
    scanf("%d", &n);
    fact = compute_fact(n);
    printf("Factorial of %d is: %ld \n",n, fact);
    return 0;
}
