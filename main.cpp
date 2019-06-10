
#include <iostream>
#include "Savings.hpp"
#include "Checking.hpp"

int main(int argc, const char * argv[]) {
    
    Checking checking(1000, .5);
    Savings savings(5000, .1);
    char acct, action;
    double amt;
    
    do {
        do {
            std::cout << "(C)hecking OR (S)avings \t => ";
            std::cin >> acct;
            std::cout << "(d)deposit \t (w)ithdraw \t (p)rint statement => ";
            std::cin >> action;
            std::cout << "Enter amount => ";
            std::cin >> amt;
            
            switch (acct)
            {
                case 'c':
                case 'C':
                    switch(action)
                {
                    case 'd':
                    case 'D':
                        checking.deposit(amt);
                        break;
                        
                    case 'w':
                    case 'W':
                        checking.withdraw(amt);
                        break;
                        
                    case 'p':
                    case 'P':
                        checking.printStatement();
                        break;
                        
                    default:
                        std::cout << "Invalid action\n";
                }
                    break;
                case 's':
                case 'S':
                    switch(action)
                {
                    case 'd':
                    case 'D':
                        savings.deposit(amt);
                        break;
                        
                    case 'w':
                    case 'W':
                        savings.withdraw(amt);
                        break;
                        
                    case 'p':
                    case 'P':
                        savings.printStatement();
                        break;
                        
                    default:
                        std::cout << "Invalid action\n";
                }
                    break;
                    
            }
            std::cout << "Continue? (y/n) : ";
            std::cin >> action;
        } while (action == 'y' || action == 'Y');
        
        checking.printStatement();
        savings.printStatement();
        std::cout << "Quit program? (y/n) : ";
        std::cin >> action;
    } while (action == 'n'|| action == 'N');
    
    return 0;
}
