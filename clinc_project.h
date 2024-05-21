#ifndef CLINC_PROJECT_H
#define CLINC_PROJECT_H
#include "STD_TYPES.h"
void addPatient();
void editPatient (u8 pID);
void reserveSlot(u8 idIn);
void cancel_slot(u8 patient_id);
void viewPatient(u8 patient_ID);
void viewResLog();
#endif // !CLINC_PROJECT_H
