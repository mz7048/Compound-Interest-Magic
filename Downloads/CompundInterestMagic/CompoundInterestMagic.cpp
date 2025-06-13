
#include <iostream>
using namespace std;
int main()
{
    float seedMoney;
    cout << "Input the Seed money: ";
    cin >> seedMoney;
    cout << seedMoney << '\n';
    int i = 1;
    while(true){
        
        float meanReverage;
        cout << "Input the mean return on " << i << " month\n";
        cin >> meanReverage;
        
        if(!meanReverage) break;
        
        seedMoney *= (meanReverage/100) + 1;
        cout << i++ << " month, Money:" << seedMoney << '\n';
    }
    
    cout << "Input 0 quit the program...";
    

    return 0;
}