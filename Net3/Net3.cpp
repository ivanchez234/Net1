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
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    adress n1 = { "Москва","Арбат",12,8,13456 };
    adress n2 = { "Ижевск","Пушкина",59,143,953769 };
    std::cout << "Город: " << n1.town << std::endl;
    std::cout << "Улица: " << n1.name << std::endl;
    std::cout << "Номер дома: " << n1.home << std::endl;
    std::cout << "Номер квартиры: " << n1.flat << std::endl;
    std::cout << "Индекс: " << n1.index << std::endl;

    std::cout << std::endl;

    std::cout << "Город: " << n2.town << std::endl;
    std::cout << "Улица: " << n2.name << std::endl;
    std::cout << "Номер дома: " << n2.home << std::endl;
    std::cout << "Номер квартиры: " << n2.flat << std::endl;
    std::cout << "Индекс: " << n2.index << std::endl;

    return 0;
}