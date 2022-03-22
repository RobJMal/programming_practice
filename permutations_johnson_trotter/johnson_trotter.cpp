#include <iostream>
#include <vector>

// Prints out elements inside vector
void PrintVector(std::vector<int> vect)
{
    for (int x: vect)
    {
        std::cout << x << " ";
    }
    std::cout << "" << std::endl;
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

    
    
    return 0;
}