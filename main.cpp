#include <iostream>
#include <algorithm>

#include "Player.h"

using namespace std;


int main()
{
    Player* player = new Player();
    string input;

    for_each(
             player->GettracksList()->begin(),
             player->GettracksList()->end(),
             [](string trackname){
                    cout << trackname << endl;
                }
             );

    while(input !="exit"){
        cout << "Input command: " ;
        cin >> input;
        cout << input << endl;
    }
    cout << "End of Main" << endl;
    return 0;
}
