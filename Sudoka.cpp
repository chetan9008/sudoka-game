#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
namespace variables
{
    int sudoka[9][9] = {
        4, 3, 5, 2, 6, 9, 7, 8, 1,
        6, 8, 2, 5, 7, 1, 4, 9, 3,
        1, 9, 7, 8, 3, 4, 5, 6, 2,

        8, 2, 6, 1, 9, 5, 3, 4, 7,
        3, 7, 4, 6, 8, 2, 9, 1, 5,
        9, 5, 1, 7, 4, 3, 6, 2, 8,

        5, 1, 9, 3, 2, 6, 8, 7, 4,
        2, 4, 8, 9, 5, 7, 1, 3, 6,
        7, 6, 3, 4, 1, 8, 2, 5, 0};

    int row, col;
    int choice;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    vector<int> v;

}
using namespace variables;
namespace functions
{
    void color(int c)
    {
        SetConsoleTextAttribute(console, c);
    }

    void gotoxy(int x, int y)
    {
        CursorPosition.X = x;
        CursorPosition.Y = y;
        SetConsoleCursorPosition(console, CursorPosition);
    }

    void display_board()
    {
        system("Color 5F");
        system("cls");
        gotoxy(55, 1);
        cout << "SUDOKA GAME";
        gotoxy(40, 2);
        cout << "_____________________________________";
        gotoxy(40, 3);
        cout << "| " << sudoka[0][0] << " | " << sudoka[0][1] << " | " << sudoka[0][2] << " | " << sudoka[0][3] << " | " << sudoka[0][4] << " | " << sudoka[0][5] << " | " << sudoka[0][6] << " | " << sudoka[0][7] << " | " << sudoka[0][8] << " |";
        gotoxy(40, 4);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 5);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 6);
        cout << "| " << sudoka[1][0] << " | " << sudoka[1][1] << " | " << sudoka[1][2] << " | " << sudoka[1][3] << " | " << sudoka[1][4] << " | " << sudoka[1][5] << " | " << sudoka[1][6] << " | " << sudoka[1][7] << " | " << sudoka[1][8] << " |";
        gotoxy(40, 7);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 8);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 9);
        cout << "| " << sudoka[2][0] << " | " << sudoka[2][1] << " | " << sudoka[2][2] << " | " << sudoka[2][3] << " | " << sudoka[2][4] << " | " << sudoka[2][5] << " | " << sudoka[2][6] << " | " << sudoka[2][7] << " | " << sudoka[2][8] << " |";
        gotoxy(40, 10);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 11);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 12);
        cout << "| " << sudoka[3][0] << " | " << sudoka[3][1] << " | " << sudoka[3][2] << " | " << sudoka[3][3] << " | " << sudoka[3][4] << " | " << sudoka[3][5] << " | " << sudoka[3][6] << " | " << sudoka[3][7] << " | " << sudoka[3][8] << " |";
        gotoxy(40, 13);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 14);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 15);
        cout << "| " << sudoka[4][0] << " | " << sudoka[4][1] << " | " << sudoka[4][2] << " | " << sudoka[4][3] << " | " << sudoka[4][4] << " | " << sudoka[4][5] << " | " << sudoka[4][6] << " | " << sudoka[4][7] << " | " << sudoka[4][8] << " |";
        gotoxy(40, 16);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 17);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 18);
        cout << "| " << sudoka[5][0] << " | " << sudoka[5][1] << " | " << sudoka[5][2] << " | " << sudoka[5][3] << " | " << sudoka[5][4] << " | " << sudoka[5][5] << " | " << sudoka[5][6] << " | " << sudoka[5][7] << " | " << sudoka[5][8] << " |";
        gotoxy(40, 19);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 20);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 21);
        cout << "| " << sudoka[6][0] << " | " << sudoka[6][1] << " | " << sudoka[6][2] << " | " << sudoka[6][3] << " | " << sudoka[6][4] << " | " << sudoka[6][5] << " | " << sudoka[6][6] << " | " << sudoka[6][7] << " | " << sudoka[6][8] << " |";
        gotoxy(40, 22);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 23);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 24);
        cout << "| " << sudoka[7][0] << " | " << sudoka[7][1] << " | " << sudoka[7][2] << " | " << sudoka[7][3] << " | " << sudoka[7][4] << " | " << sudoka[7][5] << " | " << sudoka[7][6] << " | " << sudoka[7][7] << " | " << sudoka[7][8] << " |";
        gotoxy(40, 25);
        cout << "|___|___|___|___|___|___|___|___|___|";
        gotoxy(40, 26);
        cout << "|   |   |   |   |   |   |   |   |   |";
        gotoxy(40, 27);
        cout << "| " << sudoka[8][0] << " | " << sudoka[8][1] << " | " << sudoka[8][2] << " | " << sudoka[8][3] << " | " << sudoka[8][4] << " | " << sudoka[8][5] << " | " << sudoka[8][6] << " | " << sudoka[8][7] << " | " << sudoka[8][8] << " |";
        gotoxy(40, 28);
        cout << "|___|___|___|___|___|___|___|___|___|";
    }
    bool check_row()
    {

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                v.push_back(sudoka[i][j]);
            }
            set<int> s(v.begin(), v.end());
            if (s.size() < v.size())
            {
                return true;
            }
            v.clear();
        }
        return false;
    }
    bool check_col()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                v.push_back(sudoka[j][i]);
            }
            set<int> s(v.begin(), v.end());
            if (s.size() < v.size())
            {
                return true;
            }
            v.clear();
        }
        return false;
    }
    bool check_array()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                v.push_back(sudoka[i][j]);
            }
        }
        set<int> s(v.begin(), v.end());
        if (s.size() < v.size())
        {
            return true;
        }
        v.clear();
        for (int i = 3; i < 5; i++)
        {
            for (int j = 3; j < 5; j++)
            {
                v.push_back(sudoka[i][j]);
            }
        }
        v.clear();
        set<int> s_1(v.begin(), v.end());
        if (s_1.size() < v.size())
        {
            return true;
        }

        for (int i = 6; i < 8; i++)
        {
            for (int j = 6; j < 8; j++)
            {
                v.push_back(sudoka[i][j]);
            }
        }
        v.clear();
        set<int> s_2(v.begin(), v.end());
        if (s_2.size() < v.size())
        {
            return true;
        }

        return false;
    }
    void check()
    {
        if (check_row() || check_col() || check_array())
        {
            gotoxy(55, 35);
            cout << "--------------------";
            gotoxy(55, 36);
            cout << "Game over You lose!";
            exit(0);
        }
        else
        {
            gotoxy(55, 35);
            cout << "--------------------";
            gotoxy(55, 36);
            cout << "Congratulations You wins";
            exit(0);
        }
    }
    void enter_value()
    {
        gotoxy(50, 31);
        cout << "Enter the row : ";
        cin >> row;
        if ((row != 1) && (row != 2) && (row != 3) && (row != 4) && (row != 5) && (row != 6) && (row != 7) && (row != 8) && (row != 9))
        {
            gotoxy(50, 35);
            cout << "Please enter valid row";
            gotoxy(50, 31);
            cout << "Enter the row : ";
            cin >> row;
        }
        gotoxy(50, 32);
        cout << "Enter the column : ";
        cin >> col;
        if ((col != 1) && (col != 2) && (col != 3) && (col != 4) && (col != 5) && (col != 6) && (col != 7) && (col != 8) && (col != 9))
        {
            gotoxy(50, 36);
            cout << "Please enter valid column";
            gotoxy(50, 32);
            cout << "Enter the column : ";
            cin >> col;
        }
        gotoxy(50, 33);
        cout << "Enter the number : ";
        cin >> choice;
        if ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5) && (choice != 6) && (choice != 7) && (choice != 8) && (choice != 9))
        {
            gotoxy(50, 37);
            cout << "Please enter number";
            gotoxy(50, 33);
            cout << "Enter the number : ";
            cin >> choice;
        }

        sudoka[row - 1][col - 1] = choice;
        display_board();
    }
    void check_empty()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (sudoka[i][j] == 0)
                {
                    return;
                }
            }
        }
        check();
    }

}
using namespace functions;
int main()
{
    while (1)
    {
        display_board();
        enter_value();
        check_empty();
    }
    return 0;
}
