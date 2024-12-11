// N পর্যন্ত  মৌলিক সংখ্যা বের করার  একটি সি প্রোগ্রাম লিখ।
#include <stdio.h>

int isprime(int x);
int isprime(int x) {
   for(int i = 2; (i*i) <= x; i++) {
       if(x % i == 0) return 0;
   } 
   return 1;
}

int main() {

    int num, dot = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(num <= 0) printf("Enter a positive integer: ");
    else{
        printf("The prime numbers from 2 to %d are : ", num);
        
        for(int i = 2; i <= num; i++) {
            if(isprime(i)) {
                if(!dot) printf(", ");
                printf("%d", i);
                dot = 0;
            }
        }
    }

    return 0;
}