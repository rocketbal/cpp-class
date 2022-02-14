#include<iostream>
#include <algorithm>
using namespace std;

class Rectangle
{
    // data hiding with private elements
    private:
        int length;
        int breadth;
        int a;
        int *p;


    public:
        //unparamaterized constructor
        Rectangle()
        {
            length = 1;
            breadth = 1;
            a = 1;
        }

        //paramaterized constructor
        Rectangle(int l=1, int b=1, int a=1)
        {
            setLength(l);
            setBreadth(b);
            a = a;
            p = new int[a];
            std::fill_n(p, a, 1);
        }

        Rectangle(Rectangle &t){
            a = t.a;
            p = new int[a];

        }
        // Rectangle(Rectangle &rect)
        // {
        //     length = rect.length();
        //     breadth=rect.breadth();
        // }
        //Property Functions
        //Mutators:
        // Check if the input variable is valid
        void setLength(int l){
            if(l>=0){
                length=l;
            }
            else{
                std::cout<<"Length cannot be negative";
                exit(0);
            }
        }

        //check if the input variable is valid
        // before assignment
        void setBreadth(int b){
            if (b>=0){
                breadth=b;
            }
            else{
                std::cout<<"Breadth cannot be negative";
                exit(0);
            }
        }
        // Accessors:
        void getLength(){
            std::cout << "Length value is: "<< length<<endl;
        }

        void getbreadth(){
            std::cout << "Breadth value is: "<< breadth<<endl;
        }

        void getParray(){
            std::cout<<"Values in array p: "<<p<<endl;
        }

        //facilitator function
        int area(){
            return length * breadth;
        }

        //inquiry

        //destructors
};


int main()
{
    Rectangle r1(2,2,2);
    Rectangle r2(r1);
    std::cout<<r1.area()<<endl;

    return 0;

}