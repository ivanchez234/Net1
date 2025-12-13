#include <iostream>
#include <string>
struct bank
{
    int number;
    double summ;
    std::string name;
};
void change(bank& t, double p)
{
    t.summ = p;

}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int num{};
    double s{};
    std::string nam{};
    double s1{};
    std::cout << "Введите номер счёта: ";
    std::cin >> num;
    std::cout << "Введите имя владельца: ";
    std::cin >> nam;
    std::cout << "Введите баланс: ";
    std::cin >> s;
    bank person;
    person.name = nam;
    person.number = num;
    person.summ = s;
    std::cout << "Введите новый баланс: ";
    std::cin >> s1;
    change(person, s1);
    std::cout << "Ваш счёт: " << nam << ", " << num << ", " << s1;
    return 0;
}
