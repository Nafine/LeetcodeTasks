

bool isBadVersion(int n)
{
	
	//доделать
    return n > 3;
}

int firstBadVersion(int n)
{
    int left = 0, right = n, mid;

    while (left < right)
    {
        mid = left + (right - left) / 2;

        if (isBadVersion(mid)) right = mid;

        else left = mid + 1;
    }

    return left;
}