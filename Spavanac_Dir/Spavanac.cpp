#include <iostream>

int main()
{
    int H = 0, M = 0, rest = 0;
    std::cin >> H >> M;

    rest = M - 45;
    if (rest < 0){
        if (H == 0)
            H = 23;
        else
            H -= 1;
        M = 60 + rest;
    }
    else   
        M -= 45;
    std::cout << H << " " << M << std::endl;
    return 0;
}
