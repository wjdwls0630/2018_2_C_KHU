class Zergling
{
	int health;
	int power;
	int shield;
	int x; 
	int y; 
	char *name;

public:
	Zergling();
	Zergling(char* _name, int _he, int _po, int _shi, int _x, int _y);
	~Zergling();
	void Move(int _x, int _y);
	void Attack(Zergling &enemy);
	void Damage(Zergling &enemy);
	void Patrol();
	void Die();

	int GetPower();
	int GetShield();
	char* GetName();
	void SetName(char* _name);
	
	~Zergling();
};