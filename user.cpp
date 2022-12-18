#include "user.h"
#include <string>

using namespace std;

User::User(string login, string password, string username) : user_login{login}, user_password{password}, user_username{username}
{
    user_login = login;
    user_password = password;
    user_username = username;
}

User::~User() {
}

string User::show_login() const {return user_login;}

string User::show_username() const {return user_username;}


