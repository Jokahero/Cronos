#ifndef __ALERT_MANAGER_HPP__
#define __ALERT_MANAGER_HPP__

#include "AAlert.hpp"

#include <QVector>

/*
 * \class AlertManager
 * \brief Manages alerts
 * 
 * Manages a list of alerts
 */
class AlertManager {
public:
	/*
	 * \brief Constructor
	 */
	AlertManager();
	
	/*
	 * \brief Destructor
	 */
	virtual ~AlertManager();

	/*
	 * \brief Adds an alert in the list
	 *
	 * \param alert Alert to add
	 */
	inline void addAlert(AAlert* alert);

	/*
	 * \brief Starts the alerts
	 *
	 * Starts all active alerts
	 */
	void start();

private:
	QVector<AAlert*>	_alerts;		///< \brief List of alerts

	void startAlertTimer(AAlert* alert);
};

inline void AlertManager::addAlert(AAlert* alert) {
	_alerts.push_back(alert);
}

#endif // __ALERT_MANAGER_HPP__
