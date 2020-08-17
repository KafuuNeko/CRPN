#pragma one
#include <string>

namespace rpn
{

std::string MakeRpn(const std::string &math_exp);
double CalculateRpn(const std::string &rpn_exp);
double CalculateExpr(const std::string &expr);

}