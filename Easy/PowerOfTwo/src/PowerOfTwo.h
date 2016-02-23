class PowerOfTwo {
public:
    bool isPowerOfTwo(int n)
    {
        while (n>0)
        {
            if ((n & 0x1) == 1)
                break;
            n >>= 1;
        }
        
        return (n == 1);
    }
};
