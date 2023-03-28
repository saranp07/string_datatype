#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class STRING
{
char *p;
public:
STRING();
STRING(const char *ptr);
STRING(const STRING &temp);
~STRING();
char & operator[](int);
STRING operator=(const STRING &ptr);
STRING operator+(const STRING &);
friend istream& operator>>(istream& in,STRING &);
friend ostream& operator<<(ostream& out,STRING &);
bool operator>(const STRING &obj);
bool operator<(const STRING &obj);
bool operator==(const STRING &obj);
bool operator!=(const STRING &obj);
bool operator>=(const STRING &obj);
bool operator<=(const STRING &obj);
friend void my_strcpy(STRING &,STRING &);
friend void my_strncpy(STRING &des,STRING &src,int c);
friend void my_strcmp(STRING &s1,STRING &s2);
friend void my_strncmp(STRING &s1,STRING &s2,int);
friend void my_strcat(STRING &s1,STRING &s2);
friend void my_strncat(STRING &s1,STRING &s2,int);
friend void my_strrev(STRING &);
friend void strupper(STRING &s);
friend void strlower(STRING &s);
friend void my_strchr(STRING &,char);
friend void my_strrchr(STRING &,char);
friend int my_strlen(STRING &s);
friend void my_strstr(STRING &s,const char *ptr);
};
