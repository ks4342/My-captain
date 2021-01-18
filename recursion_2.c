int lcm(int, int);

int main()
{
    int a, b, result;
    int prime[100];
    printf("Input first number: %d \t Input second number: %d ",12 ,30);
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d = %d\n", a, b, result);
    return 0;
}

int lcm(int a, int b)
{
    static int common = 1;

    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
