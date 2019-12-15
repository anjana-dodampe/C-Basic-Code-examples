//Constructors
#include <iostream>
#include <iomanip>            //Header providing parametric manipulators

using namespace std;
class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date(int = 12, int = 14, int = 2019);
};

Date::Date(int mm, int dd, int yyyy)
{
    month = mm;
    day = dd;
    year = yyyy;
    cout<<"Created a new data object with data values"<<month<<","<<day<<","<<year<<endl;
}

int main()
{
    Date a;
    Date b(6, 12, 2019);
    Date c(4, 1, 2002);

    return 0;
}
