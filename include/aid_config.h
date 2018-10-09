#ifndef __AID_CONFIG_H__
#define __AID_CONFIG_H__

#include <map>
#include <string>

typedef struct aid_config_stru
{
	char para_descr[64];		//��������
	int  int_value1;			//���β���ֵ1
	int  int_value2;			//���β���ֵ2
	float float_value1;			//�����Ͳ���ֵ1
	float float_value2;			//�����Ͳ���ֵ2
	long  long_vaule1;			//�����β���ֵ1
	long  long_vaule2;			//�����Ͳ���ֵ2
	char  para_string1[64];		//�ַ�������ֵ1
	char  para_string2[64];		//�ַ�������ֵ2
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