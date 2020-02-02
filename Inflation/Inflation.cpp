#include <iostream>
#include <iomanip>
#include <vector>

void insertion_sort(std::vector<int>& data, int n);
int binary_search(std::vector<int>& data, int item, int low, int high);

int binary_search(std::vector<int>& data, int item, int low, int high){
    if (high <= low)
        return (item > data[low])? (low + 1): low;
    int mid = (low + high) / 2;

    if (item == mid)
        return mid + 1;
    
    if (item > data[mid])
        return binary_search(data, item, mid + 1, high);
    
    return binary_search(data, item, low, mid - 1);
}

void insertion_sort(std::vector<int>& data){
    int i, location, j, selected;

    for (i = 1; i < data.size(); i++){
        j = i - 1;
        selected = data[i];

        location = binary_search(data, selected, 0, j);

        while (j >= location){
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = selected;
    }
}

int main(){
    int input = 0, baloons = 0;
    std::vector<int> helium;
    
    // Getting the input.
    std::cin >> baloons;

    // Getting the input into the vector
    for (int k = 0; k < baloons; k++){
        std::cin >> input;
        helium.push_back(input);
    }

    // Binary insertion sort
    insertion_sort(helium);

    float max_cap = 1;
    for (int i = 1; i <= baloons; i++){
        float tmp_cap =  helium[i - 1] / float(i);

        // Checking if the ratio is greater than the size of the baloon.
        if (tmp_cap < max_cap)
            max_cap = tmp_cap;
        if (tmp_cap > 1)
            // Assigning negative one to indicate impossible.
            max_cap = -1;
    }
    
    // If max_cap is -1 then it is impossible. Otherwise print the max_cap.
    if (max_cap == -1)
        std::cout << "impossible" << std::endl;
    else
        std::cout << max_cap << std::endl;
}