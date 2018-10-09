#ifndef AIDCOMM_H
#define AIDCOMM_H

#include "aid_iminterface.h"
#include "aid_config.h"
#include "aid_riskanalysis.h"
#include "aid_exec.h"
#include "aid_forcedrecover.h"
#include "aid_onsiterecover.h"

class CAidComm
{
public:
	explicit CAidComm();
	~CAidComm();

	bool startListen(const std::string& ip);
	bool handleRequest(const int &kind);
	bool broadcastNotice(const std::string& notice);
	bool writeClient(const std::string& ip, const std::string& notice);
private:
	void registerClient();
	void getAllClient();
	void unregisterClient();
	void reportFaultThruIm();

	int m_i_port;
	std::vector<std::string> m_vec_str_ip;
	pthread_mutex_t * m_ptr_lock;	// OS-related?? CAidCommon??
};

#endif // AIDCOM_H
