#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) :
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        pincodeField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow("<font color = 'red'>First Name", firstNameField);
    addRow("<font color = 'green'>Last Name", lastNameField);
    addRow("<font color = 'blue'>Address", addressField);
    addRow("<font color = 'violet'>Pincode", pincodeField);
    addRow("<font color = 'gray'>Phone Number", phoneNumberField);
    addRow("<font color = 'brown'>Email", emailField);
}

void QtContactForm::clear()
{
 firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    pincodeField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
