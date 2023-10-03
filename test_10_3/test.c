#include<stdio.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};
void Sawyer(struct stu* ps)
{
	printf("%s %d %s %s\n",(*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("%s %d %s %s\n",ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct stu s = {"xiao ming", 15, "nan", "11451452066"};
	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);
	int c = strlen("12345");
	printf("%d\n",c);
	Sawyer(&s);
	return 0;
}