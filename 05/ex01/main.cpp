#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Terry("Terry", 150);

    try
    {
        Bureaucrat Bob("Bob", 1);
        Terry.GradeUp();
        Bob.GradeUp();
        Terry.GradeUp();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Terry;
}