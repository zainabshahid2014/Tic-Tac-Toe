#include <iostream>
#include <cstdlib>
using namespace std;
void board(char box[9]);
void checkwin(char box[9] , char *mark , int *player , bool *check);
int main()
{
    int j = 1;
    bool check = false;
    int player = 1;
    char n;
    char mark;;
    char box[9] = {'1' , '2', '3' , '4', '5', '6', '7', '8', '9'};

    //main game.
    do
    {
        player = (player%2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        board(box);
        jump:
        cout << "\n\nplayer "<< player << ": Enter your choice: " ;
        cin >> n;

        //check if user have inputed a valid option.
        if(n < '1' || n > '9')
        {
            cout << "Enter a valid option.";
            goto jump;
        }

        // putting marks at designated places.
        for(int i = 0 ; i < 9 ; i++)
        {
            if( box[i] == n )
            {
                box[i] = mark;
                break;
            }
        }

        system("CLS");
        checkwin(box , &mark , &player , &check );

        if(j == 9)
        {
            board(box);
            cout << "The game have been draw!";
            check = true;
        }
        j++;
        player++;
    }while(!check);
}

void board(char box[9])
{
    // display of board.

    cout << "\n"<< "\t\t\t\t\t" << "TIC-TAC-TOE GAME:";
    cout << "\n\n\n";
    cout << "\t\t\t\t\t" << box[0] << " | " << box[1] << " | " << box[2] << "\n";
    cout << "\t\t\t\t\t" << "---------" << "\n";
    cout << "\t\t\t\t\t" << box[3] << " | " << box[4] << " | " << box[5] << "\n";
    cout << "\t\t\t\t\t" << "---------" << "\n";
    cout << "\t\t\t\t\t" << box[6] << " | " << box[7] << " | " << box[8] << "\n";
}

void checkwin(char box[9] , char *mark , int *player , bool *check)
{

        //Check who won.
        if(box[0] == box[1] && box[1] == box[2])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[3] == box[4] && box[4] == box[5])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[6] == box[7] && box[7] == box[8])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[0] == box[3] && box[3] == box[6])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[1] == box[4] && box[4] == box[7])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[2] == box[5] && box[5] == box[8])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[0] == box[4] && box[4] == box[8])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
        else if(box[2] == box[4] && box[4] == box[6])
        {
            board(box);
            *player = (*mark == 'X') ? 1 : 2;
            cout << "\n\n\t\t\tCongratulations! Player: " << *player << " have won.";
            *check = true;
        }
}
