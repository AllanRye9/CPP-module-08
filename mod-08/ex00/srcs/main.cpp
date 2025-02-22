#include "../include/ easyfind.hpp"

int main() {
    Data<int> d2;
    
    // Add some data to d2 for testing
    d2.data.push_back(10);
    d2.data.push_back(5);
    d2.data.push_back(10);

    d2.easyfinder(d2, 5);

    return 0;
}