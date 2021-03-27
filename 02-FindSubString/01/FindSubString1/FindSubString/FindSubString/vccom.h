#pragma once
#include ".\IFaString.h"
class FastString :public IFastString {
	int m_cch;
	char *m_psz; //保存原始的字符串
public:
	FastString(char*psz); //构造函数
	~FastString(void);
	virtual int __stdcall Length(void); //返回该字符串的长度
	virtual int __stdcall Find(char*psz); //查找指定的子串
};