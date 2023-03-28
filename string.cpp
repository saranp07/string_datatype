#include"header.h"
STRING::STRING(const STRING &temp)
{
	cout<<"constructor copy"<<endl;
	p=new char [strlen(temp.p)+1];
	strcpy(p,temp.p);
}
STRING::STRING()
{
	cout<<"constructor default"<<endl;
	p=0;
}
STRING::STRING(const char *ptr)
{
	cout<<"constructor paramaterized"<<endl;
	p=new char [strlen(ptr)+1];
	strcpy(p,ptr);
}
STRING::~STRING()
{
	cout<<"destructor"<<endl;
	delete [] p;
}
char & STRING::operator[](int i)
{
	//p[i]=new char[i];
	return p[i];
}
STRING STRING::operator=(const STRING &ptr)//doubt if obj=obj1;
{
	if(p==0)
		p=new char[strlen(ptr.p)+1];
	strcpy(p,ptr.p);
	return *this;
}
istream& operator>>(istream& in,STRING &s)//behaviour of cin
{int i=0;
	char ch;
	FILE *fp=fopen("data.txt","w+");
	while(1)
	{
		cin.get(ch);
		if(ch!='\n')
		{
			fputc(ch,fp);
			i++;
		}
		else
			break;
	}
	rewind(fp);
	s.p=new char[i+1];
	i=0;
	while((ch=fgetc(fp))!=-1)
		s.p[i++]=ch;
	s.p[i]='\0';
	fclose(fp);
	remove("data.txt");
	return in;
}
ostream& operator<<(ostream& out,STRING &s)
{
	out<<s.p;
	return out;
}
STRING STRING::operator+(const STRING &s)
{
	STRING ret;
	ret.p=new char[strlen(p)+strlen(s.p)+1];
	strcat(ret.p,p);
	strcat(ret.p,s.p);
	return ret;
}
bool STRING::operator>(const STRING &obj)
{
	if(strcmp(p,obj.p)>0)
		return 1;
	else
		return 0;
}
bool STRING::operator<(const STRING &obj)
{
	if(strcmp(p,obj.p)<0)
		return 1;
	else
		return 0;
}
bool STRING::operator==(const STRING &obj)
{
	if(strcmp(p,obj.p)==0)
		return 1;
	else
		return 0;
}
bool STRING::operator!=(const STRING &obj)
{
	if(strcmp(p,obj.p)!=0)
		return 1;
	else
		return 0;
}
bool STRING::operator>=(const STRING &obj)
{
	if(strcmp(p,obj.p)>=0)
		return 1;
	else
		return 0;
}
bool STRING::operator<=(const STRING &obj)
{
	if(strcmp(p,obj.p)<=0)
		return 1;
	else
		return 0;
}
