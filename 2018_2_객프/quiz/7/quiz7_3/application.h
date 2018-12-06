#pragma once
#include "list.h"
#include "photoType.h"
class Application {
public:
	Application(): outFileName("test.txt"), inFileName("test.txt") {}
	void Run();  // ���� ���α׷� ����
	void AddPhoto();	// Ű����κ��� ���������� �Է¹޾Ƽ� ����Ʈ�� �߰�
	void DeletePhoto();	// �������� �Է¹޾Ƽ� �ش� ������ ����Ʈ���� ����
	void FindPhoto();	// �������� �Է¹޾Ƽ� �ش� ������ ã�Ƽ� �ڼ��� ������ ȭ�鿡 ���
	void FindPhotoByEvent(); // event ���� �Է¹޾Ƽ� ����Ʈ���� �ش� �̺�Ʈ���� ���� ��� ������ ã�Ƽ� ȭ�鿡 ���
	void DisplayList(); // ����Ʈ�� ����� ��� ���� ������ ȭ�鿡 ���
	int GetCommand(); // 
	int ReadAllFromFile();  // read all the records in file and store in vector arrays
	int WriteAllToFile(); // write all photo records to disk.

private:
	//?? [�׸� 3-1] PhotoType ��ü�� �����ϱ� ���� list variable "master"�� �����϶�. 
	string inFileName; // input file ��
	string outFileName; // output file ��
};