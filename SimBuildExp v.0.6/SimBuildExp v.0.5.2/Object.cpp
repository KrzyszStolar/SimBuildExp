#include "Object.h"


void Object::show_mat(Object res1, Object res2)
{
    cout << "\nStone: " << res1.get_am() << endl;
    cout << "Wood: " << res2.get_am() << endl;
}
void Object::collecting(string resource)
{
    cout << resource << endl;
}