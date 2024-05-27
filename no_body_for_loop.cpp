#include <iostream>

int main()
{
    int arr[3] = {};
    std::cout << "Enter 3 numbers: ";
    std::cin >> arr[0] >> arr[1] >> arr[2];
    
    int my_max = arr[2];
    for (int i = 0; arr[i] > arr[i + 1] && arr[i] > my_max ? my_max = arr[i] : my_max = my_max, i < 2; i++);
    std::cout << "The biggest is: " << my_max;
    
    return 0;
}
