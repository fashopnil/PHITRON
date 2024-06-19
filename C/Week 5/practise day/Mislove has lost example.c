 // ll =long long
    ll n, l, r, nxt = 1, mn = 0, mx = 0;
    cin >> n >> l >> r;
    ll num[21];
    num[0] = 1;
    for (ll i = 1; i <= 20; i++)
    {
        nxt *= 2;
        num[i] = nxt;
    }
    // for (ll i = 0;i < 20;i++)
    //     printf("%d ", num[i]);
    // printf("\n");
    for (ll i = 1; i <= l - 1; i++)
    {
        mn += num[i];
        // printf("%d ", mn);
    }
    printf("\n");
    for (ll i = 1; i <= n - l + 1; i++)
    {
        mn += num[0];
        // printf("%d ", mn);
    }
    mx += num[0];
    ll i = r - 1, cntr = n - 1;
    while (cntr > 0)
    {
        if (i < 1)
        {
            mx += num[r - 1];
            // printf("%d ", num[r - 1]);
        }
        else
        {
            mx += num[i];
            // printf("%d ", num[i]);
        }
        i--, cntr--;
    }