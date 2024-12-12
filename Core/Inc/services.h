/*
 * services.h
 *
 *  Created on: Nov 9, 2024
 *      Author: anurag
 */

#ifndef INC_SERVICES_H_
#define INC_SERVICES_H_

#include "app_bluenrg.h"
#include "bluenrg_conf.h"
#include "bluenrg1_types.h"
#include "bluenrg1_gap.h"
#include "bluenrg1_aci.h"
#include "bluenrg1_hci_le.h"
#include "stdio.h"
#include "stdlib.h"

tBleStatus add_simple_service(void);
void APP_UserEvtRx(void *pData);
#endif /* INC_SERVICES_H_ */
