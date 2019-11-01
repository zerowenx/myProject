#include <studio.h>

typedef int(*FunType)(int, int);

int sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    print("lwtest sum :%d\n", sum);
    return sum;
}


int main()
{
    print("lwtest hello world.\n");
    return 0;
}