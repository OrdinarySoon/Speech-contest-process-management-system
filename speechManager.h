#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <numeric>
#include <functional>
#include <string>
#include <fstream>

// �ݽ�������
class SpeechManager
{
public:
	// ���캯��
	SpeechManager();

	// ��ʼ������
	void initSpeech();

	// չʾ�˵�
	void show_Menu();

	// �˳��˵�
	void exitSystem();

	// ����ѡ�� ���� 12��
	vector<int> v1;

	// ��һ�ֽ������� 6��
	vector<int> v2;

	// ʤ��ǰ��������
	vector<int> vVictory;

	// ��ű�� �Լ���Ӧ�ľ���ѡ�� ����
	map<int, Speaker> m_Speaker;

	// ��ű�������
	int m_Index;

	// ��ʼ������12��ѡ��
	void createSpeaker();

	// ��ʼ���� - �������̿���
	void startSpeech();

	// ��ǩ
	void speechDraw();

	// ����
	void speechContest();

	// ��ʾ�������
	void showScore();

	// �����¼
	void saveRecord();

	// ��ȡ��¼
	void loadRecord();

	// �ļ�Ϊ�յı�־
	bool fileIsEmpty;

	// �����¼
	map<int, vector<string>> m_Record;

	// ��ʾ����÷�
	void showRecord();

	// ��ռ�¼
	void clearRecord();

	// ��������
	~SpeechManager();
};