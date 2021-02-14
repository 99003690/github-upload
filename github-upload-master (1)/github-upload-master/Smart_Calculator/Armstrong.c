int binary_decimal(int n)
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;


    binary_val = n;
    while (n > 0)
    {
        rem = n % 10;
        decimal_val = decimal_val + rem * base;
        n = n / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
    return decimal_val;

}
