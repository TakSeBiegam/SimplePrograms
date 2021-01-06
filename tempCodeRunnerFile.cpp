#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int set_password_lenght(){
    int pass_len = 0;
    cout << "Password lenght: ";
    cin >> pass_len;
    cin.ignore();
    while(pass_len < 0 || pass_len > 20){
        cout << endl;
        cout << "Password must be longer than 0 and shorter than 20" << endl;
        cout << "Password lenght: ";
        cin >> pass_len;
        cin.ignore();
        cout << endl;
    }

    cout << "password lenght: " << pass_len << endl;
    return pass_len;
}

void controls_for_sepcial_sybols(bool &is_numbers,bool &is_uppercase,bool &is_special_symbols){
    char wybor;
    cout << "Password should have numbers ? y/n" << endl;
    cin >> wybor;
    switch (wybor)
    {
    case 'y':
        is_numbers = true;
        break;
    default:
        break;
    }

    cout << "Password should have uppercase ? y/n" << endl;
    cin >> wybor;
    switch (wybor)
    {
    case 'y':
        is_uppercase = true;
        break;
    default:
        break;
    }

    cout << "Password should have special symbols ? y/n" << endl;
    cin >> wybor;
    switch (wybor)
    {
    case 'y':
        is_special_symbols = true;
        break;
    default:
        break;
    }
}

void create_password(int password_len){
    srand(time(NULL));
    bool is_numbers = false;
    bool is_uppercase = false;
    bool is_special_symbols = false;
    bool destroyer_infinity_loop = false;
    controls_for_sepcial_sybols(is_numbers, is_uppercase, is_special_symbols);
    int choose_symbol_kind;
    int temp_var;
    for (size_t i = 0; i < password_len; i++)
    {
        temp_var = 0;
        do{
            choose_symbol_kind = rand()%4+1;
            destroyer_infinity_loop = false;
            if(is_numbers == false && choose_symbol_kind == 2){
                destroyer_infinity_loop = true;
            }
            if(is_uppercase == false && choose_symbol_kind == 3){
                destroyer_infinity_loop = true;
            }
            if(is_special_symbols == false && choose_symbol_kind == 4){
                destroyer_infinity_loop = true;
            }
        }while(destroyer_infinity_loop);
        switch(choose_symbol_kind)
        {
        case 1:
            temp_var = rand()%25+97;
            cout << (char)temp_var;
            break;
        case 2:
            temp_var = rand()%9+48;
            cout << (char)temp_var;
            break;
        case 3:
            temp_var = rand()%25+65;
            cout << (char)temp_var;
            break;
        case 4:
            temp_var = rand()%13+33;
            cout << (char)temp_var;
            break;
        default:
            cout << "WE HAVE PROBLEM" << endl;
            break;
        }
    }
}

int main(){
    int password_lenght = 0;
    password_lenght = set_password_lenght();
    create_password(password_lenght);
    cout << endl;
    system("pause");
    return 0;
}