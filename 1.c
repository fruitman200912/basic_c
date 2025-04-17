#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    double t;

    double max_d = 0;
    int max_i = 0;

    int i_n = 0;

    for (int i = 0;i<n;i++)
    {
        scanf("%lf",&t);

        if (t == (int)t)
        {
            i_n=1;
            if (t < 0)
                max_i = max_i<-t?(int)t:max_i;
            else
                max_i = max_i<t?(int)t:max_i;
        }
        else
        {
            if (t < 0)
                max_d = max_d<-t?t:max_d;
            else
                max_d = max_d<t?t:max_d;
        }
    }

    if (max_d !=0)
        printf("실수: %.2lf\n",max_d);
    if (i_n==1)
        printf("정수: %d\n",max_i);

    return 0;
}












/*
    첫 줄에는 입력할 숫자의 개수n을 입력하고
    그이후 n개의 줄에는 숫자를 입력한다.
    이때 숫자의 자료형은 알 수 없다.
    입력이 끝난후엔 실수와 정수 중 각각 절대값이 가장큰 것을 출력한다.
    단 실수는 소숫점아래 2자리까지 출력한다.
    만약 실수 혹은 정수가 입력되지 않았다면 그자료형은 출력하지 않는다.

 */