#include <iostream>
#include <string>

int main(){
    std::string InputName = "", OutputAbbr = "";
    std::cin >> InputName;

    OutputAbbr += InputName[0];
    for (int i  = 1; i < InputName.length(); i++){
        if (InputName[i] == '-'){
            OutputAbbr += InputName[i + 1];
        }
    }
    std::cout << OutputAbbr << std::endl;
    return 0;
}