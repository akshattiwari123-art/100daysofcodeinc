#include <stdio.h>

int main(){
    float P,R,T,SI,CI;

    printf("Enter principal ,Rate, Time: ");
    scanf("%d %d %d",&P, &R, &T);

    SI=(P*R*T)/100;
    CI=P*(pow((1+R/100),T)) -P;

    printf("simple interest =%f\n",SI);
    printf("principle innterest=%f\n",CI);
return 0;
}