#include <iostream>
#include <algorithm>

#include "Player.h"
#include "State.h"

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
//        cout << "playing track: "<<player->Getplaying()+1<< endl;
        cout << "Input command: " ;
        cin >> input;
 //       cout << input << endl;

        if(input == "play"){
            player->Getstate()->onPlay();
        }
        else if(input=="stop"){
            player->Getstate()->onStop();
        }
        else{
            cout << "unknown command" << endl;
        }
    }
    cout << "End of Main" << endl;
    return 0;
}
