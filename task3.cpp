#include <iostream>
using namespace std;

char slot[3][3]={{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};

bool game_on=true;

void board(){
    system("cls");
    cout<<"\t Welcome to Tic-Tac-Toe Game"<<endl;
    cout<<"Player 1 -----> X"<<endl;
    cout<<"Player 2 -----> O"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t  "<<slot[0][0]<<"  |   "<<slot[0][1]<<"  |  "<<slot[0][2]<<"  "<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t_____|______|______"<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t  "<<slot[1][0]<<"  |   "<<slot[1][1]<<"  |  "<<slot[1][2]<<"  "<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t_____|______|______"<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<"\t\t  "<<slot[2][0]<<"  |   "<<slot[2][1]<<"  |  "<<slot[2][2]<<"  "<<endl;
    cout<<"\t\t     |      |     "<<endl;
    cout<<endl;
    cout<<endl;
}
void reset_board() {
    char newSlot[3][3] = {{'1', '2', '3'},
                          {'4', '5', '6'},
                          {'7', '8', '9'}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            slot[i][j] = newSlot[i][j];
        }
    }

    game_on = true;
}
bool play_again() {
    char choose;
    cout << "Do you want to play again? (Y/N): ";
    cin >> choose;
    return (choose == 'Y' || choose == 'y');
}
void check_win()
{
    if (slot[0][0]=='X' && slot[0][1]=='X' && slot[0][2]=='X'||
        slot[1][0]=='X' && slot[1][1]=='X' && slot[1][2]=='X'||
        slot[2][0]=='X' && slot[2][1]=='X' && slot[2][2]=='X'||
        slot[0][0]=='X' && slot[1][0]=='X' && slot[2][0]=='X'||
        slot[0][1]=='X' && slot[1][1]=='X' && slot[2][1]=='X'||
        slot[0][2]=='X' && slot[1][2]=='X' && slot[2][2]=='X'||
        slot[0][0]=='X' && slot[1][1]=='X' && slot[2][2]=='X'||
        slot[0][2]=='X' && slot[1][1]=='X' && slot[2][0]=='X')
    {
        game_on=false;
        cout<<"Player 1 wins"<<endl;
    }
    else if (slot[0][0]=='O' && slot[0][1]=='O' && slot[0][2]=='O'||
        slot[1][0]=='O' && slot[1][1]=='O' && slot[1][2]=='O'||
        slot[2][0]=='O' && slot[2][1]=='O' && slot[2][2]=='O'||
        slot[0][0]=='O' && slot[1][0]=='O' && slot[2][0]=='O'||
        slot[0][1]=='O' && slot[1][1]=='O' && slot[2][1]=='O'||
        slot[0][2]=='O' && slot[1][2]=='O' && slot[2][2]=='O'||
        slot[0][0]=='O' && slot[1][1]=='O' && slot[2][2]=='O'||
        slot[0][2]=='O' && slot[1][1]=='O' && slot[2][0]=='O')
        {
            game_on=false;
            cout<<"Player 2 wins"<<endl;
        }
}
void check_draw()
{
    bool draw = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (slot[i][j] != 'X' && slot[i][j] != 'O')
            {
                draw = false;
                break;
            }
        }
        if (!draw)
        {
            break;
        }
    }
    if (draw)
    {
        game_on = false;
        cout << "It's a draw." <<endl;
    }
}


int main()
{
    char turn='X';
    int choice;


    board();
    while (true)
    {
        reset_board();
        board();
         while (game_on)
    {
         if (turn=='X')
         {
        cout<<"Player 1 [X] turn: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            slot[0][0]='X';
            board();
            turn='O';
            break;
        case 2:
            slot[0][1]='X';
            board();
            turn='O';
            break;
        case 3:
            slot[0][2]='X';
            board();
            turn='O';
            break;
        case 4:
            slot[1][0]='X';
            board();
            turn='O';
            break;
        case 5:
            slot[1][1]='X';
            board();
            turn='O';
            break;
        case 6:
            slot[1][2]='X';
            board();
            turn='O';
            break;
        case 7:
            slot[2][0]='X';
            board();
            turn='O';
            break;
        case 8:
            slot[2][1]='X';
            board();
            turn='O';
            break;
        case 9:
            slot[2][2]='X';
            board();
            turn='O';
            break;
        default:
            cout<<"Invalid choice."<<endl;
        }
        check_win();
        check_draw();
        if (game_on==false)
        {
            break;
        }
    }
         if (turn=='O')
    {
        cout<<"Player 2 [O] turn: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            slot[0][0]='O';
            board();
            turn='X';
            break;
        case 2:
            slot[0][1]='O';
            board();
            turn='X';
            break;
        case 3:
            slot[0][2]='O';
            board();
            turn='X';
            break;
        case 4:
            slot[1][0]='O';
            board();
            turn='X';
            break;
        case 5:
            slot[1][1]='O';
            board();
            turn='X';
            break;
        case 6:
            slot[1][2]='O';
            board();
            turn='X';
            break;
        case 7:
            slot[2][0]='O';
            board();
            turn='X';
            break;
        case 8:
            slot[2][1]='O';
            board();
            turn='X';
            break;
        case 9:
            slot[2][2]='O';
            board();
            turn='X';
            break;
        default:
            cout<<"Invalid choice."<<endl;
        }
        check_win();
        check_draw();
        if (game_on==false)
        {
            break;
        }

    }
    }
    if (!play_again()) {
            cout << "Thanks for playing! Goodbye." << endl;
            break;
        }
    }
}

