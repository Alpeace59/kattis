#include <iostream>
#include <math.h>

int main(){
    int N = 0, W = 0, H = 0, L = 0;
    float max_Length = 0;
    std::cin >> N >> W >> H;
    
    max_Length = sqrt(pow(W, 2) + pow(H, 2));
    while(N--){
        std::cin >> L;
        if (L <= max_Length)
            std::cout << "DA" << std::endl;
        else
            std::cout << "NE" << std::endl;
    }
    return 0;
}