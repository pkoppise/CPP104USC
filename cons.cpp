#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       // Default Constructor
       Area(): length(5), breadth(2){ }

       Area(int l, int b)
       {
           length = l;
           breadth = b;
       }

       int AreaCalculation() {  return (length * breadth);  }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp << endl;
       }
};

/*int main()
{
    Area A1;
    int area;

    area = A1.AreaCalculation();
    A1.DisplayArea(area);

    Area A2(7,8);
    area = A2.AreaCalculation();
    A2.DisplayArea(area);

    return 0;
}*/
