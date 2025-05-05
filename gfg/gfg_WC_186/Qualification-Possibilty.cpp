bool isPossible(string &s)
{
    // code here
    int cnt = 0;
    for (char ch : s)
    {
        if (ch == 'W')
            cnt++;
    }

    int n = s.size();

    if (n <= 14)
    {
        int remaining = 14 - n;
        if (cnt + remaining >= 8)
            return true;
        else
            return false;
    }
    else
    {
        if (cnt >= 8)
            return true;
        else
            return false;
    }
}