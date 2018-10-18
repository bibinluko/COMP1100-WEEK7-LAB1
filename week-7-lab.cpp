#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand( time(NULL) );

    int cash=500, bid=0, num;
    system("cls");
    cout << "*******************************************************************************" << endl;
    cout << "************************     BINARY ROULETTE     ******************************" << endl;
    cout << "*******************************************************************************" << endl << endl;
    cout << "   Primary Balance Amount              :   $ " << cash << endl << endl;
    cout << "*******************************************************************************" << endl;
    
    while (cash>0)
    {
            
            cout << "\n\n\n   Choose your number                  :   " ;
            cin >> num;
            if (num==0 || num==1)
            {
                cout << "   Enter your bid amount               :   ";
                cin >> bid;

                if (cash>=bid && bid>0)
                {
                    int random = rand() % 2;
                
                    cout << "\n\n*******************************************************************************" << endl;
                    cout << "   ROULETTE SELECTION                  :   "   << random << endl;
                    cout << "*******************************************************************************" << endl << endl;
                    if (random == num)
                    {
                        cout << "You WIN this Game !" << endl;
                        cout << "Your money doubled !" << endl;
                        cash=cash+bid+bid;    
                        cout << "*******************************************************************************" << endl << endl;
                        cout << "   Balance Amount                      :   $ " << cash << endl << endl;
                        cout << "*******************************************************************************" << endl;
                    }
                    else
                    {
                        cout << "\n\nYou LOOSE this Game !" << endl;
                        cash=cash-bid;    
                        cout << "*******************************************************************************" << endl << endl;
                        cout << "   Balance Amount                      :   $ " << cash << endl << endl;
                        cout << "*******************************************************************************" << endl;
                    }
                

                }
                else
                {
                    if(bid<=0)
                    {
                    cout << "\n\nYou Can't Bet $ "<<bid << "\nCashing Out !"<< endl;
                    break;
                    } 
                
                    cout << "\n\n\nLow balance ! \nCashing Out !" << endl;
                    break;
                }
            }
            else
            {
               cout << "\n\n\nCashing Out !" << endl;
               break;
            }
    }
    
    
    cout << "*******************************************************************************" << endl << endl;
    cout << "                                       GAME OVER ! " << endl << endl;
    cout << "*******************************************************************************" << endl;
    
    system("pause");
    
    return 0;
}