#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length = 0, int breadth = 0)
        {
            this->length = length;
            this->breadth = breadth;
        }
        Rectangle& setLength(int a)
        {
            length = a;
            return *this;
        }
        Rectangle& setBreadth(int b)
        {
            breadth = b;
            return *this;
        }
        void Display()
        {
            cout << "Length = " << length << " Breadth = " << breadth << endl;
        }
};
int main ()
{
    Rectangle rect(10, 5);
    // Chained function calls. All calls modify the same object as the same object is returned by reference
    rect.setLength(20).setBreadth(30);
    rect.Display();
}
