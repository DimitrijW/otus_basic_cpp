#include <iostream>
#include <iomanip>


int main(int argc, char * argv [])
{
    // 1. Pointer to a single variable
    int a = 1;
    int * x = nullptr;
    x = &a;
    std::cout << "1. address: " << x << " value = " << *x << std::endl;

    // 2. Arrays
    const std::size_t n = 10; 
    int arr1[n] = {1,2,3,4,5,6,7,8,9,0};
    for (int i = 0; i < n; ++i)
    {
        arr1[i] += 1 + i;
        std::cout << std::setw(6) << arr1[i];
    }
    std::cout << std::endl;

    // 3. Address arithmetic. Array's name is 0-shift address 
    int * pa = arr1;
    std::cout << "original address:  " << &arr1[0] << std::endl;
    std::cout << "address from name: " << pa << std::endl;

    // 4. Address arithmetic.
    for (int i = 0; i < n; ++i)
    {
        *(pa + i) = 100 + i;
        std::cout << std::setw(4) << arr1[i];
    }
    std::cout << std::endl;

    // pa = nullptr;

    // const int * const p1 = &a;
    // const int *       p2 = &a;
    //       int * const p3 = &a;
    //       int *       p4 = &a;

    //  //p1 = arr1;
    //  //*p2 =234;
    //  p2 = arr1;
    // *p3 = 3456;

    return 0;
}
