#ifndef HEADER_H
#define HEADER_H
#define maxPatient 100

typedef struct {
    int id;
    char name[50];
    char gender[10];
    int age;
    int reservationSlot;
} patient;

extern const char* slots[5];
extern int reserved[5];
extern patient patients[maxPatient];
extern int patientCounter;

// Function declarations
int isIDExist(int id);
void add_patient(void);
void edit_patient(void);
void reserve(void);
void cancelReservation(void);
void View_Patient(void);
void viewReservations(void);
void save_patients_to_file(void);

#endif