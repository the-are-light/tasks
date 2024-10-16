#include <iostream>

void main()
{
    //Коммерция
    setlocale(LC_ALL, "Russian");
    double k, p, r;
    std::cout << "Введите сумму кредита: "; std::cin >> k;
    std::cout << "Введите процентную ставку в десятичном формате: "; std::cin >> p;
    std::cout << "Введите вашу годовую прибыль: "; std::cin >> r;
    
    double total = k * (1 + p); // общая сумма кредита
    double remain = total - r; //кредит после первого года
    int years = 1;
    
    while (remain > 0) {
        remain -= r; years++;
    }

    if (years > 0) std::cout << "Кредит будет погашен через " << years << " лет";
    else std::cout << "Кредит выплачен";

}
