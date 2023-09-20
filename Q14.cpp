/* Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle. */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter 11 to get area of circle\nenter 22 to get area of rectangle\nenter 33 to get area of square\nenter 44 to get area of triangle\n";
    cin>>n;
    switch(n)
    {
        case 11:
        int r;             //radius of circle
        float area1;        // area of ciecle in float
        cout<<"\nenter radius of circle= ";
        cin>>r;
        area1=3.14*r*r;          // formula for area of circle
        cout<<"\narea of circle is "<<area1;
        break;
        
        case 22:
        int l,b,area2;   //l and b are length and breadth of reactangle and area2 is area of reactangle
        cout<<"\nenter length and breadth of rectangle= ";
        cin>>l>>b;
        area2=l*b;                  // formula for area of rectangle
        cout<<"\narea of rectangle is= "<<area2;
        break;

        case 33:
        int s1,area3;               // s1 is the side of square and area3 is area of square
        cout<<"\nenter the side of square= ";
        cin>>s1;
        area3=s1*s1;                //formula for area of square
        cout<<"\narea of square is= "<<area3;
        break;

        case 44:
        int s2,h;                  // s2 and h are the side and height of traingle
        float area4;
        cout<<"\nenter the side and height of triangle s= ";
        cin>>s2>>h;
        area4=0.5*s2*h;            // formula for area of square
        cout<<"\narea of triangle is= "<<area4;
        break;

        default:
        cout<<"\nINVALID OPTION";    //invalid option if any number other than 11,22,33,44 is entered

    }
}
