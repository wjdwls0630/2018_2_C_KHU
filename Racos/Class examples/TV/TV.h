class TV
{
	char* itemName; //��ǰ��
	double size; //TV inch
	bool power; // ��������(on/off)
	int channel; // ä��
public:
	TV();
	~TV();
	TV(char* name, double size);
	void Power(); // TV�� �Ѱų� ���� ���
	void SetChannel(int channelNum); // Ư�� ä�η� �̵��ϴ� ���
	int GetChannel(); // ���� ä���� ������� ��ȯ�ϴ� ���
	void ChannelUp(); // ä���� ���̴� ���
	void ChannelDown(); // ä���� ���ߴ� ���
};