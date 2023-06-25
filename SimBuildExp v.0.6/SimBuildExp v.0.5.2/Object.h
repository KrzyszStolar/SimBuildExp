#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Object
{
private:
	char Sprite;
	int Amount;
public:
	auto set_am(int ami)
	{
		Amount = ami;
	}
	auto get_am()
	{
		return Amount;
	}
	auto set_spr(int sprite)
	{
		Sprite = sprite;
	}
	auto get_spr()
	{
		return Sprite;
	}
	Object(char spri, int amo)
	{
		Sprite = spri;
		Amount = amo;
	}
	void show_mat(Object res1, Object res2);
	void collecting(string resource);
};