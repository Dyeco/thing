#include <iostream>
#include <string>

std::string X = "X Value: ";
std::string Z = "Z Value: ";

std::string A, B;

const float eight = 8;

int main()
{
    //std::cout << "Hello World!\n";

    std::cout << "uuuuhhhh" << std::endl;

    std::cout << X << std::endl;
    std::cin >> A;

    std::cout << A << std::endl;

    std::cout << Z << std::endl;
    std::cin >> B;

    std::cout << B << std::endl;

    float FloatA = stof(A);

    float FloatB = stof(B);

    float newA = FloatA * eight;

    float newB = FloatB * eight;

    std::cout << "New X Value: " << newA << std::endl;

    std::cout << "New Y Value: " << newB << std::endl;


    return 0;
}

