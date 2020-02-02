#include <iostream>
#include <vector>

int main(){
    std::vector<int> set, templateSet{1, 1, 2, 2, 2, 8}, output;
    int input = 0, index = 0;
    do{
        std::cin >> input;
        set.push_back(input);
        index++;
    }while (index < 6);

    for (int i = 0; i < 6; i++)
        output.push_back(templateSet[i] - set[i]);
    
    for (std::vector<int>::const_iterator k = output.begin(); k != output.end(); k++)
        std::cout << *k << ' ';
    
    
}

