
bool isUgly(int n) 
    {       

        if (n < 1) return false;

        bool divided;

        while(n >= 5)
        {
            divided = false;

            if (n % 2 == 0)
            {
                n /= 2;
                divided = true;
            }
            if (n % 3 == 0)
            {
                n /= 3;
                divided = true;
            }
            if (n % 5 == 0)
            {
                n /= 5;
                divided = true;
            }

            if (!divided) break;
        }

        return (n == 1 || n % 2 == 0 ? true : (n % 3 == 0 ? true : (n % 5 == 0 ? true : false)));
    }