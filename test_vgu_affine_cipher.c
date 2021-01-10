#include <stdio.h>
#include <string.h>

 
int gcd(int a, int b); 

int main(){
    char a[10];
    char e; 
    int b, c; 

    printf("Please input the plaintext: "); 
    scanf("%s", &a); 

    printf("\nPlease enter e for encryption or d for decryption: "); 
    scanf("%s", &e); 

    printf("\nPlease enter coefficients: \n"); 
    scanf("%d%d", &b, &c); 

    while(gcd(b, 26) == 1){
        if(e == 'e'){
         for(int i = 0; i < strlen(a); i++){
            a[i] = ((b*((int)(a[i])-65) + c) % 26) + 65; 
            printf("%c", a[i]);
            }
        }else if( e == 'd'){
		 for(int i = 0; i < strlen(a); i++){
			a[i] = (int)((b*((int)(a[i])-65) - c) % 26) + 65; 
			printf("%c", a[i]); 
			}
        }else{
            printf("Invalid"); 
        }
    }
    return 0; 
}

int gcd(int a, int b){
    while(b == 0)
        return a; 
    return (b, a % b); 
}