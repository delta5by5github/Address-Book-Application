# Address Book Application

This is a simple C++ program for managing a basic address book. It allows users to add, delete, and display contacts within the address book.

## Table of Contents

- [Overview](#overview)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)

## Overview

This C++ program consists of two main classes: `Contact` and `AddressBook`. 

- The `Contact` class represents an individual contact with attributes such as name, phone number, and email address. It provides methods to create and edit contact details.

- The `AddressBook` class manages a collection of contacts. It allows users to add, delete, and display contacts stored within the address book.

## Usage

This program can be used to create and manage a list of contacts. It provides a simple command-line interface to perform the following actions:

- **Add Contact:** Add a new contact with a name, phone number, and email address.
- **Delete Contact:** Remove a contact by specifying their name.
- **Display Contacts:** View the list of all stored contacts.
- **Exit:** Terminate the program.

## Code Structure

The code is structured as follows:

- `Contact` class: Represents an individual contact with name, phone number, and email address. It provides methods for creating and editing contacts.
- `AddressBook` class: Manages a list of contacts using a vector. It offers methods to add, delete, and display contacts.
- `main()` function: Implements a basic command-line menu system to interact with the address book.

## How to Use

To use this program:

1. Compile the code using a C++ compiler (e.g., g++).
2. Run the compiled executable.
3. Use the provided menu to add, delete, and display contacts.

Note: The program currently contains placeholders for the logic of adding, deleting, and displaying contacts. You need to implement these functionalities within the respective methods in the `Contact` and `AddressBook` classes.

## Contributing

Contributions to improve and expand this address book application are welcome. Feel free to fork the repository, make improvements, and create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
