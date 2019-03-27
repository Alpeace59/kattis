#include <iostream>
#include <math.h>
#include <string>

int main(){
    int X = 0, N = 0;
    std::string InputP = "", pPow = "";

    std::cin >> N;
    for (int i = 0; i < N; i++){
        std::cin >> InputP;
        pPow = InputP[InputP.length() - 1];
        InputP.pop_back();
        X += pow(std::stoi(InputP), std::stoi(pPow));
    }
    std::cout << X << std::endl;
    return 0;
}