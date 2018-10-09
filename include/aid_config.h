#ifndef __AID_CONFIG_H__
#define __AID_CONFIG_H__

#include <map>
#include <string>

typedef struct aid_config_stru
{
	char para_descr[64];		//参数描述
	int  int_value1;			//整形参数值1
	int  int_value2;			//整形参数值2
	float float_value1;			//浮点型参数值1
	float float_value2;			//浮点型参数值2
	long  long_vaule1;			//长整形参数值1
	long  long_vaule2;			//长整型参数值2
	char  para_string1[64];		//字符串参数值1
	char  para_string2[64];		//字符串参数值2
} AID_CONFIG_STRU;


class CAidConfig
{
public:
	int readConfig();
	int getConfig(const std::string &para_name, AID_CONFIG_STRU &one_config_info);
private:
	std::map<std::string, AID_CONFIG_STRU>  AidConfigMap;
};

#endif