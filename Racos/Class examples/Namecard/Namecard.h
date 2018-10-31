class Namecard
{
	char* name;
	char* phone;
	char* addr;
	char* position;
public :
	Namecard();
	Namecard(char*, char*, char*, char*);
	~Namecard();
	void ShowData();
};