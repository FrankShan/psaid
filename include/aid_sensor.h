#ifndef AIDSENSOR_H
#define AIDSENSOR_H

#include "aid_common.h"
#include "aid_topo.h"
#include "aid_sqldb.h"
#include "aid_rtdb.h"
#include "aid_rtdb.h"

#include <vector>

class CAidSensor
{
public:
	explicit CAidSensor();
	~CAidSensor();

	bool monitorAlarm();
	bool monitorMaintain();
	bool getBranchViolations(std::vector<long> &v_dev);
	bool getInterfaceViolations(std::vector<long> &v_sec);
private:
	bool registerAlarm();
	bool getFaultType();
	bool getRelaySigByLineId();
	bool getLineSpecsById();
	bool getWeatherByAreaId();
	bool notifyNewAlarm();
	bool getRelaySigByBayId();
	bool getLnViolations(std::vector<long> &v_dev);
	bool getXfViolations(std::vector<long> &v_dev);
};

#endif // AIDSENSOR_H
