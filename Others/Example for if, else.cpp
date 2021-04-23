#include <stdio.h>
#include <iostream>
int main()
{
    int sr;
    printf("Enter your Season rating (from 1 to 5000): "),
    scanf("%d", &sr);
    
    if (0 < sr && sr < 1500) {
        printf("Your aiming skills is Bronze");
    } else if (1500 <= sr && sr < 2000) {
        printf("Your aiming skills is Silver");
    } else if (2000 <= sr && sr < 2500) {
        printf("Your aiming skills is Gold");
    } else if (2500 <= sr && sr < 3000) {
        printf("Your aiming skills is Platinum");
    } else if (3000 <= sr && sr < 3500) {
        printf("Your aiming skills is Diamond");
    } else if (3500 <= sr && sr < 4000) {
        printf("Your aiming skills is Master");
    } else if (4000 <= sr && sr <= 5000) {
        printf("Your aiming skills is Grandmaster");
    }
    system("pause");
    return 0;
}