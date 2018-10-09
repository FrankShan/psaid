#ifndef AIDRTDB_H
#define AIDRTDB_H

#include "aid_config.h"

#include <string>
#include <map>

const int AP_SCADA = 100000;

class CAidRtdb
{
public:
	explicit CAidRtdb(std::string domain = "", int app_no = AP_SCADA);
	~CAidRtdb();
	bool getRecordById(const long& key_id, std::map<std::string, std::string>& map_str_str);

private:
	bool checkID(const long& key_id);
	bool openRtdb();
	bool closeRtdb();

	std::string m_str_domain;

	int m_i_app_no;
};

#endif // AIDRTDB_H
