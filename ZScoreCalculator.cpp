#include <iostream>
#include <cmath>

int main() {

    double mrk1;
    double mrk2;
    double mrk3;
    double z1;
    double z2;
    double z3;
    double pz;
    double mrk4;
    double mrk5;
    double mrk6;
    double mrk7;
    double mrk8;
    double mrk9;
    double z4;
    double z5;
    double z6;
    double z7;
    double z8;
    double z9;
    double bz;
    double cz;


    int subject;


    std::cout << "**************Z-Score calculator**************" << '\n';


    std::cout << "what's you subject stream? " <<'\n';
    std::cout <<  "( 1 - Physical science , 2 - bio science , 3 - commerce)" <<'\n';


    std::cin >> subject ;


    if (subject==1)
    {
        std::cout <<"Enter your mark for Combined Maths" << "\n";
        std::cin >> mrk1;
        std::cout << "Enter your mark for Physics" << '\n';
        std::cin >> mrk2;
        std::cout <<"Enter your marks for Chemistry" << '\n';
        std::cin >> mrk3;

        z1 = (mrk1-40)/18;
        z2 = (mrk2-38)/16;
        z3 = (mrk3-42)/17;

        pz = (z1+z2+z3)/3;

        std::cout <<"Your Z score for Combined Maths is " << z1 <<'\n';
        std::cout << "Your Z score for Physics is "<< z2 << '\n';
        std::cout << "Your Z score for Chemsitry is "<< z3 <<'\n';
        std::cout <<"        "<<'\n';
        std::cout <<"Your final Z score is " << pz <<'\n';
    }
   
    else if (subject==2)
    {
        std::cout <<"Enter your mark for Biology" << "\n";
        std::cin >> mrk4;
        std::cout << "Enter your mark for Physics" << '\n';
        std::cin >> mrk5;
        std::cout <<"Enter your marks for Chemistry" << '\n';
        std::cin >> mrk6;

        z4 = (mrk4-40)/16;
        z5 = (mrk5-38)/16;
        z6 = (mrk6-42)/17;

        bz = (z4+z5+z6)/3;

        std::cout <<"Your Z score for Biology is " << z4 <<'\n';
        std::cout << "Your Z score for Physics is "<< z5 << '\n';
        std::cout << "Your Z score for Chemsitry is "<< z6 <<'\n';
        std::cout <<"        "<<'\n';
        std::cout <<"Your final Z score is " << bz <<'\n';
    }

    else if (subject==3)
    {
        std::cout <<"Enter your mark for Accounting" << "\n";
        std::cin >> mrk7;
        std::cout << "Enter your mark for Busineess studies" << '\n';
        std::cin >> mrk8;
        std::cout <<"Enter your marks for Economics" << '\n';
        std::cin >> mrk9;

        z7 = (mrk7-40)/18;
        z8 = (mrk8-38)/16;
        z9 = (mrk9-42)/17;
        cz = (z7+z8+z9)/3;

        std::cout <<"Your Z score for Accounting is " << z7 <<'\n';
        std::cout << "Your Z score for Business Studies is "<< z8 << '\n';
        std::cout << "Your Z score for Economics is "<< z9 <<'\n';
        std::cout <<"        "<<'\n';
        std::cout <<"Your final Z score is " << cz <<'\n';
    }
    
    else {

    std::cout << "Please enter a subject your subject no (1-3)" << '\n';
    }
   
 






    std::cout << "**********************************************";

    std::cin.ignore();
    std::cin.get();



    return 0;
}