#include <stdio.h>

int main() /*가장 먼저 실행되는 함수*/
{
    int n =0;
    float b = 1.4f; /*float 값도 double 로 봐서 F뒤에 붙여줌*/

    printf("정수와 실수값 입출력\n");
    printf("정수값을 입렵하세요 n: ");
    scanf("%d",&n);
    printf("입력받은 값: %d",n);

    printf("\n실수값을 입력하세요 b : ");
    scanf("%f",&b);
    printf("입력받은 실수값은 %f",b);
    /*scanf 에서 double은 %lf으로 받아야함.
    소수점 표현은 %.4f 이런식으로 표현*/
 
    const double PI = 3.14; /*앞으로 변핳일이 없는 변수는 상수로!*/
    return 0;
}