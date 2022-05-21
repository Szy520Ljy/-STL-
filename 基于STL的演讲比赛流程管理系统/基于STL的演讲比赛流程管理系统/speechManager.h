#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>
using namespace std;
// ����ݽ�������
class SpeechManager
{
public:
	// ���캯��
	SpeechManager();
	// չʾ�˵�
	void show_Menu();
	// �˳�ϵͳ
	void exitSystem();
	// ��ʼ������������
	void initSpeech();
	// ����12��ѡ��
	void createSpeaker();
	// ��ʼ����
	void startSpeech();
	// ��ǩ
	void speechDraw();
	// ����
	void speechContest();
	// ��ʾ�÷�
	void showScore();
	// �������
	void saveRecord();
	// ��ȡ��¼
	void loadRecord();
	// ��ʾ�����¼
	void showRecord();
	// �ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpity;
	// ����ļ�
	void clearRecord();
	// ��������¼������
	map<int, vector<string>>m_Record;
	// �����һ�ֱ���ѡ�ֱ������
	vector<int>v1;
	// ��һ�ֽ���ѡ�ֱ������
	vector<int>v2;
	// ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;
	// ��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;
	// ��ű�������
	int m_Index;
	// ��������
	~SpeechManager();
};