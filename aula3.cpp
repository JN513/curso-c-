#include <iostream>

int main(){
// == , x>y , x<y != >= <=
    int a,b;
    scanf("%d%d",&a,&b);

    if(a > b) printf("A maior que B\n");
    else if (a < b) printf("B maior que A\n");
    else printf("A e igual a B\n");

    return 0;
}