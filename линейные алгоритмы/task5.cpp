#include <iostream>

void main()
{
    // ОКРУГЛЕННОЕ ВРЕМЯ
    float h, m, s;
    float m1, hr;
    std::cout << "Enter hour, minute, second: ";
    std::cin >> h >> m >> s;
    m1 = (m + s / 60);
    hr = h + (m + s / 60) / 60;
    std::cout << (int)(h + 0.5) << " hour " << (int)(m1 + 0.5) << " minute or " << (int)(hr+0.5) << " hour";
}

