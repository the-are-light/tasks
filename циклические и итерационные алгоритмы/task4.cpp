#include <iostream>

void main()
{
    //Коммерция
    double k, p, r;
    std::cout << "Enter the loan amount, the percentage of annual payments in decimal format, and the annual profit: "; std::cin >> k >> p >> r;
    if (r <= k * p) std::cout << "The loan cannot be repaid";
    else std::cout <<"You will be able to repay the loan in "<< k / (r - k * p) << " years" ;

}