#include <iostream>
#include <fstream>


enum months
{
    Январь=1,
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
    Декабрь,


};


int main(){
    
int num;
std::cout<<"Введите номер месяца:\n";
std::cin>>num;

switch (num)
{
case 0:
    break;
case 1:
    std::cout<<static_cast<months>(1);
    
case 2:
    std::cout<<months::Февраль;
case 3:
    std::cout<<months::Март;
    break;
case 4:
    std::cout<<months::Апрель;
    break;
case 5:
    std::cout<<months::Май;
    break;
case 6:
    std::cout<<months::Июнь;
    break;
case 7:
    std::cout<<months::Июль;
    break;
case 8:
    std::cout<<months::Август;
    break;
case 9:
    std::cout<<months::Сентябрь;
    break;
case 10:
    std::cout<<months::Октябрь;
    break;
case 11:
    std::cout<<months::Ноябрь;
    break;
case 12:
    std::cout<<months::Декабрь;
    break;
default:
    std ::cout<<"Неправильный номер!";
    break;
}




return 0;
}