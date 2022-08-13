#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
string name1,name2;


void Draw()
{
    system("cls");
    cout << "Tic Tac Toe v1.0" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"|"<< matrix[i][j] << "|";
        }
        cout << endl;
    }
}

void playerName()

{
	
	cout<<"Player 'X' name: ";
	cin>>name1;
	cout<<"Player 'O' name: ";
	cin>>name2;
}


void Input()
{
   
   
    int a;
   
   if(player == 'X')
   {
	cout << "It's " << name1 << " turn. " <<"Press the number of the field: ";
    cin >> a;
 
    if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
}
 else
{

    cout << "It's " << name2 << " turn. " <<"Press the number of the field: ";
    cin >> a;
 
    if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
	}
	 else if (a == 7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
}
}
void TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
char Win()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
 
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
 
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
 
    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
 
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
 
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
 
    return '/';
}
int main()
{
	playerName();
    n = 0;
    Draw();
    while (1)
    {
        n++;
        Input();
        Draw();
        if (Win() == 'X')
        {
            cout <<name1<< " win!!!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout <<name2<< " win!!!" << endl;
            break;
        }
        else if (Win() == '/' && n == 9)
        {
            cout << "It's a draw!" << endl;
            break;
        }
        TogglePlayer();
    }
    system("pause");
    return 0;
}
