 for (int i = 0; i <= c; i++)
    {
        printf("%d", arr[n][i]);
        if (i + 1 == c)
        {
            i = 0;
            n += 1;
        }
        if (n - 1 >= r)
        {
            break;
        }
    }