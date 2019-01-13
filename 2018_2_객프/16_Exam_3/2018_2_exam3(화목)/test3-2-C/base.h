#pragma once

//?????[���� 3-2-C-i] base class�� ���� �Ͻÿ�

class base {
public:
	Application(): outFileName("test3-2-C.txt"), inFileName("test3-2-C.txt") {}
	void Run();  // ���� ���α׷� ����
	void AddPhoto();	// Ű�����κ��� ���������� �Է¹޾Ƽ� ����Ʈ�� �߰�
	void DeletePhoto();	// �������� �Է¹޾Ƽ� �ش� ������ ����Ʈ���� ����
	void FindPhoto();	// �������� �Է¹޾Ƽ� �ش� ������ ã�Ƽ� �ڼ��� ������ ȭ�鿡 ����
	void FindPhotoByEvent(); // event ���� �Է¹޾Ƽ� ����Ʈ���� �ش� �̺�Ʈ���� ���� ���� ������ ã�Ƽ� ȭ�鿡 ����
	void DisplayList(); // ����Ʈ�� ������ ���� ���� ������ ȭ�鿡 ����
	int GetCommand();
	int ReadAllFromFile();  // ���� ���������� ���Ϸκ��� ����
	int WriteAllToFile(); // ���� ���� ������ ���Ͽ� ����
	int AddPhotoToList(PhotoType inItem); // ���������� �Է¹޾Ƽ� ����Ʈ�� �߰�
	void DisplayByEventUsingEL();
	void SearchByPhotoNameNEvent();
	void SearchByEventNContents();


private:
	//?????[���� 3-2-C-ii]
	string inFileName;
	string outFileName;
};
