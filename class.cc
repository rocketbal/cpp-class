#include<iostream>
using namespace std;

class Rectangle
{
    // data hiding with private elements
    private:
        int length;
        int breadth;


    public:
        //unparamaterized constructor
        Rectangle()
        {
            length = 1;
            breadth = 1;
        }

        //paramaterized constructor
        Rectangle(int l=1, int b=1)
        {
            setLength(l);
            setBreadth(b);
        }
        // Rectangle(Rectangle &rect)
        // {
        //     length = rect.length();
        //     breadth=rect.breadth();
        // }

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
        int area(){
            return length * breadth;
        }
};


int main()
{
    Rectangle r1(2,2);
    std::cout<<r1.area()<<endl;

    return 0;

}