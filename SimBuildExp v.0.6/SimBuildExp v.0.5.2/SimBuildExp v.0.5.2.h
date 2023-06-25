// SimBuildExp v.0.5.2.h: plik dołączany dla standardowych systemowych plików dołączanych,
// lub pliki dołączane specyficzne dla projektu.

#pragma once

#include <iostream>
#include <vector>
#include <conio.h>
#include "Object.h"
#include "Achievements.h" 
#include "Player.h"
#include "Map.h"
#define left game_space[player.get_row()][player.get_col() - 1]
#define up game_space[player.get_row() - 1][player.get_col() ]
#define down game_space[player.get_row() + 1][player.get_col() ]
#define right game_space[player.get_row()][player.get_col() + 1]
#define curr game_space[player.get_row()][player.get_col()]
#define cur_map map.show_map(game_space, player.get_row() - 5, player.get_row() + 5, player.get_col() - 9, player.get_col() + 10)
#define drewno "Wydobyles 1 sztuke drewna"
#define kamien "Wydobyles 1 sztuke kamienia"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
const int ROW = 500;
const int COL = 500;


class SimBuild
{
public:
	void main_game()
	{
        int stop = 0;
        char move{};
        char build{};
        int opt{};
        int seed{};

        Map map;
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
        vector<vector<char>> generated_map = map.map_generator(seed, game_space);
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
                    cur_map;
                    rock.collecting(drewno);
                    break;
                }
                else if (up == rock.get_spr())
                {
                    system("cls");
                    up = ' ';
                    achi.set_rc(achi.get_rc() + 1);
                    rock.set_am(rock.get_am() + 1);
                    cur_map;
                    rock.collecting(kamien);
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
                    cur_map;
                    rock.collecting(drewno);
                    break;
                }
                else if (left == rock.get_spr())
                {
                    system("cls");
                    left = ' ';
                    achi.set_rc(achi.get_rc() + 1);
                    rock.set_am(rock.get_am() + 1);
                    cur_map;
                    rock.collecting(kamien);
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
                    cur_map;
                    rock.collecting(drewno);
                    break;
                }
                else if (down == rock.get_spr())
                {
                    system("cls");
                    down = ' ';
                    achi.set_rc(achi.get_rc() + 1);
                    rock.set_am(rock.get_am() + 1);
                    cur_map;
                    rock.collecting(kamien);
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
                    cur_map;
                    rock.collecting(drewno);
                    break;
                }
                else if (right == rock.get_spr())
                {
                    system("cls");
                    right = ' ';
                    achi.set_rc(achi.get_rc() + 1);
                    rock.set_am(rock.get_am() + 1);
                    cur_map;
                    rock.collecting(kamien);
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
                rock.show_mat(rock, tree);
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
                break;
            }

        }
	}

};