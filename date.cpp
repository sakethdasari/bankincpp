#include "date.h"
void Date::setdate()
{
    std::cin>>day>>month>>year;
}
void Date::getdate()
{
    std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
}


