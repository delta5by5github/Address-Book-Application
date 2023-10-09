#include <iostream>
#include <string>
#include <vector>

class Contact {
private:
    std::string name;
    std::string phoneNumber;
    std::string emailAddress;

public:
    Contact(const std::string& name, const std::string& phoneNumber, const std::string& emailAddress);
    void editContact(const std::string& newName, const std::string& newPhoneNumber, const std::string& newEmailAddress);
    void displayContact() const;
};

class AddressBook {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& contact);
    void deleteContact(const std::string& contactName);
    void displayContacts() const;
};

Contact::Contact(const std::string& name, const std::string& phoneNumber, const std::string& emailAddress) {
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->emailAddress = emailAddress;
}

void Contact::editContact(const std::string& newName, const std::string& newPhoneNumber, const std::string& newEmailAddress) {
    // Implement the editContact method here
}

void Contact::displayContact() const {
    // Implement the displayContact method here
}

void AddressBook::addContact(const Contact& contact) {
    // Implement the addContact method here
}

void AddressBook::deleteContact(const std::string& contactName) {
    // Implement the deleteContact method here
}

void AddressBook::displayContacts() const {
    // Implement the displayContacts method here
}

int main() {
    AddressBook addressBook;

    while (true) {
        std::cout << "Address Book Menu:\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Delete Contact\n";
        std::cout << "3. Display Contacts\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Logic to add a new contact
                break;
            }
            case 2: {
                // Logic to delete a contact
                break;
            }
            case 3: {
                // Logic to display all contacts
                break;
            }
            case 4: {
                // Exit the program
                return 0;
            }
            default: {
                std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }

    return 0;
}
