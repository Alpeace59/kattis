#include <iostream>
#include <string>

int main(){
    int strenght  = 0, strenght_Temp = 0;
    std::string pHand[5];
    std::cin >> pHand[0] >> pHand[1] >> pHand[2] >> pHand[3] >> pHand[4];
    for (int i = 0; i < 5; i++){
        for (int k = 4; k >= i; k--){
            if (pHand[i][0] == pHand[k][0])
                strenght_Temp++;
        }
        if (strenght_Temp > strenght)
            strenght = strenght_Temp;
        strenght_Temp = 0;
    }
    std::cout << strenght << std::endl;
    return 0;
}