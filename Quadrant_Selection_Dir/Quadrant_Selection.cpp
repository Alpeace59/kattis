#include <iostream>

int main()
{
    int x = 0, y = 0, Q = 0;
    std::cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
            Q = 1;
        else
            Q = 4;
    }
    else
    {
        if (y > 0)
            Q = 2;
        else
            Q = 3;
    }
    std::cout << Q << std::endl;
    
    return 0;
}