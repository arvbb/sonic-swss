#pragma once

extern "C" {
#include "sai.h"
}

void on_fdb_event(uint32_t count, sai_fdb_event_notification_data_t *data);
void on_nat_event(uint32_t count, sai_nat_event_notification_data_t *data);
void on_port_state_change(uint32_t count, sai_port_oper_status_notification_t *data);
void on_bfd_session_state_change(uint32_t count, sai_bfd_session_state_notification_t *data);
void on_switch_shutdown_request();
