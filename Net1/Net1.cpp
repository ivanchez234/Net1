#include <iostream>
#include <string>
enum class mounths
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int n{};
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> n;

        if (n == 0)
        {
            std::cout << "До свидания" << std::endl;
        }

        switch (static_cast<mounths>(n))
        {
        case mounths::Январь:
            std::cout << "Январь" << std::endl;
            break;
        case mounths::Февраль:
            std::cout << "Февраль" << std::endl;
            break;
        case mounths::Март:
            std::cout << "Март" << std::endl;
            break;
        case mounths::Апрель:
            std::cout << "Апрель" << std::endl;
            break;
        case mounths::Май:
            std::cout << "Май" << std::endl;
            break;
        case mounths::Июнь:
            std::cout << "Июнь" << std::endl;
            break;
        case mounths::Июль:
            std::cout << "Июль" << std::endl;
            break;
        case mounths::Август:
            std::cout << "Август" << std::endl;
            break;
        case mounths::Сентябрь:
            std::cout << "Сентябрь" << std::endl;
            break;
        case mounths::Октябрь:
            std::cout << "Октябрь" << std::endl;
            break;

        case mounths::Ноябрь:
            std::cout << "Ноябрь" << std::endl;
            break;


        case mounths::Декабрь:
            std::cout << "Декабрь" << std::endl;
            break;




        }
    } while (n != 0);
}

