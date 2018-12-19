#pragma once
#include "list.h"
#include "photoType.h"
#include "base.h"
#include "event.h"
//?????[���� 3-2-C-ii]: derived class�� �����ϰ� �� class�� �� ����Ʈ�� �����Ͻÿ�. 
class Application {
public:
	Application(): outFileName("test.txt"), inFileName("test.txt") {}
	void Run();  // ���� ���α׷� ����
	void AddPhoto();	// Ű����κ��� ���������� �Է¹޾Ƽ� ����Ʈ�� �߰�
	void DeletePhoto();	// �������� �Է¹޾Ƽ� �ش� ������ ����Ʈ���� ����
	//?????[���� 3-2-A-v]  
	void FindPhoto();	// �������� �Է¹޾Ƽ� �ش� ������ ã�Ƽ� �ڼ��� ������ ȭ�鿡 ���
	void FindPhotoByEvent(); // event ���� �Է¹޾Ƽ� ����Ʈ���� �ش� �̺�Ʈ���� ���� ��� ������ ã�Ƽ� ȭ�鿡 ���
	//?????[���� 3-2-A-v]
	void DisplayList(); // ����Ʈ�� ����� ��� ���� ������ ȭ�鿡 ���
	int GetCommand(); // 
	int ReadAllFromFile();  // read all the records in file and store in vector arrays
	int WriteAllToFile(); // write all photo records to disk.
	//?????[���� 3-2-B-ii]
	int AddPhotoToList(PhotoType inItem); // ���������� �Է¹޾Ƽ� mater list�� event list�� �߰�
	//?????[���� 3-2-B-iii]
	void DisplayByEventUsingEL();
	void SearchByPhotoNameNEvent();
	void SearchByEventNContents();


private:
	//?????[���� 3-2-C-ii]
	string inFileName;
	string outFileName;
};