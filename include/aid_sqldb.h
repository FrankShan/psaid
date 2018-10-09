#ifndef AIDSQLDB_H
#define AIDSQLDB_H

#include <string>
#include "aid_config.h"

class ResultSet
{
	ResultSet(const int& row, const int& column);
	~ResultSet();

	void setValue(const int& row, const int& column);
	std::string getValue(const int& row, const int& column) const;

	std::string nextC() const;
	std::string nextR() const;

private:
	void free();

	int row;
	int column;
	std::string *content2d;
};

class CAidSqldb
{
public:
	CAidSqldb();
	~CAidSqldb();

	bool initDb(int appsid);
	bool closeDb();
	bool execSql(const std::string& sql, ResultSet &rs);
	bool connectAndExecSql(const std::string& sql, ResultSet &rs, int appsid = 1);
};

#endif // AIDSQLDB_H
