#pragma once
/*
TagIssueģ���Ƿ���tag��ģ�飬���ܣ���ÿ��ʱ�����ڷ���һ��tagֵ������˿ڣ�
�������˿ڵ�ֵû�б����ߣ�validֵ��û�б����㣩����ô��ģ�鲻�������ݵ�
����˿ڣ�֪����һ�η����ֵ������
*/
#include <iostream>
#include <vector>
typedef unsigned int uint32_t;
class TagIssue
{
public:
	TagIssue();
	~TagIssue();
	//output
	bool out_v;
	uint32_t out;
	uint32_t out_t;//����ӿ�
	std::vector<int> tag_container;
	uint32_t pointor;

	//func	
	void tag_issue();
private:
	void tag_container_init();

};