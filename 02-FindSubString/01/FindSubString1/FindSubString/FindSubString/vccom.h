#pragma once
#include ".\IFaString.h"
class FastString :public IFastString {
	int m_cch;
	char *m_psz; //����ԭʼ���ַ���
public:
	FastString(char*psz); //���캯��
	~FastString(void);
	virtual int __stdcall Length(void); //���ظ��ַ����ĳ���
	virtual int __stdcall Find(char*psz); //����ָ�����Ӵ�
};