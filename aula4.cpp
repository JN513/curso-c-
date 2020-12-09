#include <iostream>

int main(){
    while (true){
        int n;
        scanf("%d",&n);
        if (n == 0) break;
        if(n % 2 == 0) printf("PAR\n");
        else printf("IMPAR\n");
    }
    
    return 0;
}