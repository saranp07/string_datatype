#include"header.h"
void my_strcpy(STRING &des,STRING &src)
{
	int i;
	if(des.p==0)
		des.p=new char[strlen(src.p)+1];
	for(i=0;src.p[i];i++)
		des.p[i]=src.p[i];
	des.p[i]=src.p[i];
}
void my_strncpy(STRING &des,STRING &src,int c)
{
	int i;
	if(des.p==0)
		des.p=new char[c+1];
	for(i=0;i<c;i++)
		des.p[i]=src.p[i];
}
void my_strcmp(STRING &s1,STRING &s2)
{
	int i;
	for(i=0;s1.p[i];i++)
	{
		if(s1.p[i]!=s2.p[i])
			break;
	}
	if(s1.p[i]==s2.p[i])
		cout<<"Equal"<<endl;
	else
		cout<<"not equal"<<endl;
}
void my_strncmp(STRING &s1,STRING &s2,int c)
{
	int i;
	for(i=0;i<c;i++)
	{
		if(s1.p[i]!=s2.p[i])
			break;
	}
	if(i==c)
		cout<<"Equal"<<endl;
	else
		cout<<"not equal"<<endl;
}
void my_strcat(STRING &s1,STRING &s2)
{
	int i,j;
	i=strlen(s2.p);
	j=strlen(s1.p);
	s1.p=(char*)realloc(s1.p,i);
	for(i=0;s2.p[i];i++,j++)
	{
		s1.p[j]=s2.p[i];
	}
	s1.p[j]=s2.p[i];
}
void my_strncat(STRING &s1,STRING &s2,int c)
{
	int i,j;
	i=strlen(s2.p);
	j=strlen(s1.p);
	s1.p=(char*)realloc(s1.p,c);
	for(i=0;i<c;i++,j++)
	{
		s1.p[j]=s2.p[i];
	}
	s1.p[j]='\0';
}
void my_strrev(STRING &obj)
{
	int i,j;
	char ch;
	j=strlen(obj.p);
	for(j--,i=0;i<j;i++,j--)
	{
		ch=obj.p[i];
		obj.p[i]=obj.p[j];
		obj.p[j]=ch;
	}
}
void strupper(STRING &s)
{
	int i;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i]>='a'&&s.p[i]<='z')
			s.p[i]=s.p[i]-32;
	}
}
void strlower(STRING &s)
{
	int i;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i]>='A'&&s.p[i]<='Z')
			s.p[i]=s.p[i]+32;
	}
}
void my_strchr(STRING &s,char ch)
{
	int i;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i]==ch)
		{
			cout<<"character "<<ch<<" is present at "<<(&s.p+i)<<endl;
			return;
		}
	}
	cout<<"Character is not present"<<endl;
}
void my_strrchr(STRING &s,char ch)
{
	int i;
	i=strlen(s.p);
	for(i--;i>=0;i--)
	{
		if(s.p[i]==ch)
		{
			cout<<"character "<<ch<<" is present at "<<(&s.p+i)<<endl;
			return;
		}
	}
	cout<<"Character is not present"<<endl;
}
int my_strlen(STRING &s)
{
	int i;
	for(i=0;s.p[i];i++);
	cout<<"length is "<<i<<endl;
	return i;
}
void my_strstr(STRING &s,const char *ptr)
{
	int i=0,j;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i]==ptr[0])
		{
			for(j=1;ptr[j];j++)
			{
				if(s.p[i+j]!=ptr[j])
					break;
			}
			if(ptr[j]=='\0')
			{
				cout<<"sub string "<<ptr<<" is present"<<endl;
				return;
			}
		}

	}
	cout<<"sub string "<<ptr<<" is not present"<<endl;
}
