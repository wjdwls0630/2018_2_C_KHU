class TV
{
	char* itemName; //제품명
	double size; //TV inch
	bool power; // 전원상태(on/off)
	int channel; // 채널
public:
	TV();
	~TV();
	TV(char* name, double size);
	void Power(); // TV를 켜거나 끄는 기능
	void SetChannel(int channelNum); // 특정 채널로 이동하는 기능
	int GetChannel(); // 현재 채널이 몇번인지 반환하는 기능
	void ChannelUp(); // 채널을 높이는 기능
	void ChannelDown(); // 채널을 낮추는 기능
};