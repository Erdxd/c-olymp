long long dsum(long long n)
{
    long long sum = 0;
    while (true)
    {
        if (n == 0)
        {
            break;
        }
        long long a = n % 10;
        sum = sum + a;
        n = n / 10;
    }
    return sum;
}