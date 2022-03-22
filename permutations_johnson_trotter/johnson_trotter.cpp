#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>

// Prints out elements inside vector
void PrintVector(std::vector<int> vect)
{
    for (int x: vect)
    {
        std::cout << x << " ";
    }
    std::cout << "" << std::endl;
}

void JohnsonTrotter(std::vector<int> vect)
{
    // Greatest mobile number 
    int k = * std::max_element(vect.begin(), vect.end());

    std::vector<int> left_pointing_numbers, right_pointing_numbers;
    left_pointing_numbers = vect;   // Numbers start out as pointing to left 

    PrintVector(vect);  // initilized vector is permutation 


    // Finding index of k 
    std::vector<int>::iterator itr = std::find(vect.begin(), vect.end(), k);
    int k_index = std::distance(vect.begin(), itr);

    if (std::find(left_pointing_numbers.begin(), left_pointing_numbers.end(), k) != left_pointing_numbers.end())
    {
        // Swap to the left 
        std::swap(vect[k_index - 1], vect[k_index]);
    }
    else if (std::find(right_pointing_numbers.begin(), right_pointing_numbers.end(), k) != right_pointing_numbers.end())
    {
        // Swap to the right 
        std::swap(vect[k_index], vect[k_index + 1]);
    }
    
    PrintVector(vect);


}

int main()
{
    int n = 3; 
    std::vector<int> perm_vect;

    // Initilizing vector 
    for (int i = 0; i < n; i++)
    {
        perm_vect.push_back(i + 1);
    }

    JohnsonTrotter(perm_vect);
    
    return 0;
}