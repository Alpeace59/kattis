#include <iostream>

int reverseInt(int toRev, int res){
    if (toRev == 0)
        return res;
    if (toRev > 100){
        res++;
        return reverseInt(toRev - 100, res);
    }
    if (toRev > 10){
        res += 10;
        return reverseInt(toRev - 10, res);
    }
    if (toRev > 0){
        res += 100;
        return reverseInt(toRev - 1, res);
    }
}

int main(){
    int nrA = 0, nrB = 0;
    std::cin >> nrA >> nrB;
    nrA = reverseInt(nrA, 0);
    nrB = reverseInt(nrB, 0);
    if (nrA > nrB)
        std::cout << nrA << std::endl;
    else   
        std::cout << nrB << std::endl;
    return 0;
}