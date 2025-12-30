#include <iostream>
#include <string>

struct adress
{
    std::string town;
    std::string name;
    int home;
    int flat;
    int index;
};

void printAddress(const adress& address)
{
    std::cout << "Город: " << address.town << std::endl;
    std::cout << "Улица: " << address.name << std::endl;
    std::cout << "Номер дома: " << address.home << std::endl;
    std::cout << "Номер квартиры: " << address.flat << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    adress n1 = { "Москва", "Арбат", 12, 8, 13456 };
    adress n2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    
    printAddress(n1);

    std::cout << std::endl;

    printAddress(n2);

    return 0;
}