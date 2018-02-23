#ifndef __NAMECARD__
#define __NAMECARD__

enum COMP_POS {
	CLERK, SENIOR, ASSIST, MANAGER
};

class NameCard
{
private:
	char *Name, *Company, *Phone, *Pos;

public:
	NameCard(const char *name, const char *company, const char *phone, COMP_POS rank);
	NameCard(NameCard &copy);

	~NameCard();

	void ShowNameCardInfo();

};

#endif

