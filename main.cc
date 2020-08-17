#include <iostream>
#include "rpn.hpp"

int main()
{
    std::cout << rpn::CalculateExpr("1+(2*(3+4*(2+3))-29)/2+(1+2*5)") << std::endl;
    std::cout << rpn::CalculateExpr("1+(2*(3+4*(2+3^3^3)^2)-29)/2+(1+2^5)") << std::endl;

    std::cout << rpn::CalculateExpr("(3*2)^3^3/10") << std::endl;

    std::cout << rpn::CalculateExpr("3^3^3") << std::endl;
    std::cout << rpn::MakeRpn("10 + 5 * (20 - 5 - 10) + 8 - 10 / 2") << std::endl;

    return 0;
}