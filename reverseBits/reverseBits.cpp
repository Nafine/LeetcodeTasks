uint32_t reverseBits(int n)
{
    uint32_t result = 0;

    for (size_t i = 0; i < sizeof(n) * 8; ++i)
    {
        result <<= 1;

        result += n & 1;

        n >>= 1;
    }

    return result;
}