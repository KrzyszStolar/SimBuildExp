#include "SimBuildExp v.0.5.2.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

const int ROW = 500;
const int COL = 500;

vector<vector<char>> map_generator(int seed, vector<vector<char>> map)
{
    int i = 10;
    while (i < 390)
    {
        //generacja mapy, kod jest średni, ale działa 
        for (int n = 7; n = n + 21; n < 390)
        {
            if (n + i < 390)
            {
                map[seed + i + n - 1][seed + i] = 'T';
                map[seed + i + n - 2][seed + i] = 'T';
                map[seed + i + n + 1][seed + i] = 'T';
                map[seed + i + n][seed + i - 1] = 'T';
                map[seed + i + n][seed + i - 2] = 'T';
                map[seed + i + n][seed + i + 1] = 'T';
                map[seed + i - 1 + n][seed + i - 1] = 'T';
                map[seed + i + 1 + n][seed + i + 1] = 'T';
                map[seed + i - 1 + n][seed + i + 2] = 'T';
                map[seed + i - 1 + n][seed + i - 2] = 'T';
                map[seed + i + 3 + n][seed + i - 2] = 'T';
                map[seed + i - 4 + n][seed + i + 7] = 'T';
                map[seed + i - 5 + n][seed + i + 7] = 'T';
                map[seed + i + n][seed + i + 4] = 'T';
                map[seed + i - 2 + n][seed + i + 5] = 'T';
                map[seed + i + 1 + n][seed + i - 6] = 'T';
                map[seed + 7 + i - 1 + n][seed + i] = 'R';
                map[seed + 7 + i - 2 + n][seed + i] = 'R';
                map[seed + 7 + i + 1 + n][seed + i] = 'R';
                map[seed + 7 + i + n][seed + i - 1] = 'R';
                map[seed + 7 + i + n][seed + i - 2] = 'R';
                map[seed + 7 + i + n][seed + i + 1] = 'R';
                map[seed + 7 + i - 1 + n][seed + i - 1] = 'R';
                map[seed + 7 + i + 1 + n][seed + i + 1] = 'R';
                map[seed + 7 + i - 1 + n][seed + i + 2] = 'R';
                map[seed + 7 + i - 1 + n][seed + i - 2] = 'R';
                map[seed + 7 + i + 3 + n][seed + i - 2] = 'R';
                map[seed + 7 + i - 4 + n][seed + i + 7] = 'R';
                map[seed + 7 + i - 5 + n][seed + i + 7] = 'R';
                map[seed + 7 + i + n][seed + i + 4] = 'R';
                map[seed + 7 + i - 2 + n][seed + i + 5] = 'R';
                map[seed + 7 + i + 1 + n][seed + i - 6] = 'R';
            }
            else
            {
                break;
            }
        }
        i = i + 13;

    }
    return map;
}
void show_map(vector<vector<char>> matrix, int s_row, int e_row, int s_col, int e_col)
{
    {
        for (int i = s_row; i < e_row; i++)
        {
            for (int k = s_col; k < e_col; k++)
            {
                cout << matrix[i][k];
                cout << " ";
                if (k == e_col - 1)
                {
                    cout << "\n" << endl;
                }
            }
        }
    }
}
void show_mat(Object res1, Object res2)
{
    cout << "\nStone: " << res1.get_am() << endl;
    cout << "Wood: " << res2.get_am() << endl;
}
void collecting(vector<vector<char>> game_space, Player player, string resource)
{
    cur_map;
    cout << resource << endl;
}

int main()
{
    int stop = 0;
    char move{};
    char build{};
    int opt{};
    int seed{};

    vector<vector<char>> game_space(ROW, vector<char>(COL, ' '));
    Player player(270, 170, '^');
    Achievements achi(0, 0, 0, 0);
    Object tree('T', 0);
    Object rock('R', 0);
    game_space[player.get_row()][player.get_col()] = player.get_spr();

    cout << "Sterowanie\nW,A,S,D - klawisze poruszania\nI,J,K,L - klawisze zbierania zasobow\nQ - osiagniecia gracza\nE - menu budowy\n\n";
    cout << "Podaj 2 cyfrowy seed: ";
    cin >> seed;
    system("cls");
    vector<vector<char>> generated_map = map_generator(seed, game_space);
    game_space = generated_map;
    cur_map;

    while (stop == 0)
    {
        move = _getch();
        build = _getch();

        //poruszanie się i zbieranie zasobów
        switch (move)
        {
            //system poruszania
        case 'w':
            if (up == ' ')
            {
                system("cls");
                curr = ' ';
                up = player.get_spr();
                player.set_row(player.get_row() - 1);
                achi.set_st(achi.get_st() + 1);
                cur_map;
                break;
            }
            else
            {
                break;
            }
        case 's':
            if (down == ' ')
            {
                system("cls");
                curr = ' ';
                down = player.get_spr();
                player.set_row(player.get_row() + 1);
                achi.set_st(achi.get_st() + 1);
                cur_map;
                break;
            }
            else
            {
                break;
            }
        case 'a':
            if (left == ' ')
            {
                system("cls");
                curr = ' ';
                left = player.get_spr();
                player.set_col(player.get_col() - 1);
                achi.set_st(achi.get_st() + 1);
                cur_map;
                break;
            }
            else
            {
                break;
            }

        case 'd':
            if (right == ' ')
            {
                system("cls");
                curr = ' ';
                right = player.get_spr();
                player.set_col(player.get_col() + 1);
                achi.set_st(achi.get_st() + 1);
                cur_map;
                break;
            }
            else
            {
                break;
            }

            //system zbierania zasobów
        case 'i':
            if (up == tree.get_spr())
            {
                system("cls");
                up = ' ';
                achi.set_rc(achi.get_rc() + 1);
                tree.set_am(tree.get_am() + 1);
                collecting(game_space, player, drewno);
                break;
            }
            else if (up == rock.get_spr())
            {
                system("cls");
                up = ' ';
                achi.set_rc(achi.get_rc() + 1);
                rock.set_am(rock.get_am() + 1);
                collecting(game_space, player, kamien);
                break;
            }
            break;
        case 'j':
            if (left == tree.get_spr())
            {
                system("cls");
                left = ' ';
                achi.set_rc(achi.get_rc() + 1);
                tree.set_am(tree.get_am() + 1);
                collecting(game_space, player, drewno);
                break;
            }
            else if (left == rock.get_spr())
            {
                system("cls");
                left = ' ';
                achi.set_rc(achi.get_rc() + 1);
                rock.set_am(rock.get_am() + 1);
                collecting(game_space, player, kamien);
                break;
            }
            break;
        case 'k':
            if (down == tree.get_spr())
            {
                system("cls");
                down = ' ';
                achi.set_rc(achi.get_rc() + 1);
                tree.set_am(tree.get_am() + 1);
                collecting(game_space, player, drewno);
                break;
            }
            else if (down == rock.get_spr())
            {
                system("cls");
                down = ' ';
                achi.set_rc(achi.get_rc() + 1);
                rock.set_am(rock.get_am() + 1);
                collecting(game_space, player, kamien);
                break;
            }
            break;
        case 'l':
            if (right == tree.get_spr())
            {
                system("cls");
                right = ' ';
                achi.set_rc(achi.get_rc() + 1);
                tree.set_am(tree.get_am() + 1);
                collecting(game_space, player, drewno);
                break;
            }
            else if (right == rock.get_spr())
            {
                system("cls");
                right = ' ';
                achi.set_rc(achi.get_rc() + 1);
                rock.set_am(rock.get_am() + 1);
                collecting(game_space, player, kamien);
                break;
            }
            break;
        }
        //system budowania
        switch (build)
        {
        case 'e':
            system("cls");
            cur_map;
            cout << "Menu Budowy" << endl;
            cout << "1.Mur" << endl;
            cout << "2.Plot" << endl;
            cout << "3.Gruby Mur" << endl;
            cout << "4.Zburz" << endl;
            show_mat(rock, tree);
            opt = _getch();
            switch (opt)
            {
            case '1':
                if (rock.get_am() >= 1)
                {
                    system("cls");
                    up = '"';
                    achi.set_pb(achi.get_pb() + 1);
                    rock.set_am(rock.get_am() - 1);
                    cur_map;
                    break;
                }
                else
                {
                    cout << "Brak kamienia" << endl;
                    break;
                }
            case '2':
                if (tree.get_am() >= 1)
                {
                    system("cls");
                    up = '/';
                    achi.set_pb(achi.get_pb() + 1);
                    tree.set_am(tree.get_am() - 1);
                    cur_map;
                    break;
                }
                else
                {
                    cout << "Brak drewna" << endl;
                    break;
                }

            case '3':
                if (rock.get_am() >= 1)
                {
                    system("cls");
                    up = '=';
                    achi.set_pb(achi.get_pb() + 1);
                    rock.set_am(rock.get_am() - 1);
                    cur_map;
                    break;
                }
                else
                {
                    cout << "Brak kamienia" << endl;
                    break;
                }
            case '4':
                system("cls");
                up = ' ';
                cur_map;
                break;
            }
            break;
        case 'q':
            system("cls");
            cur_map;
            cout << "Osiagniecia Gracza" << endl;
            cout << "Ilosc przebytych krokow: " << achi.get_st() << "/200" << endl;
            cout << "Zbuduj 20 budynkow: " << achi.get_pb() << "/20" << endl;
            cout << "Zbierz 30 surowcow: " << achi.get_rc() << "/30" << endl;
            cout << "Znajdz sekretny skarb: " << achi.get_tc() << "/1" << endl;
            break;
        }

    }
}