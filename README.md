Interactive Map-Based List Management Program
This is a C++ program for managing a list of items stored in a map using an interactive console menu. The program allows users to:

Insert new items into the map
Edit existing items
Search for an item by its index ID
View all items in the map
Features
Insert Items: Add new key-value pairs (index ID and item name) to the map.
Edit Items: Update the name of an item using its index ID.
Search Items: Search for an item using its index ID.
Print Items: Display all key-value pairs in the map.
Program Flow
Start with an Empty List: If the list is empty, the program prompts you to add items.
Choose an Operation: A menu is displayed, offering options to edit, search, print, or exit.
Perform Operations: Use the chosen option to interact with the map.
Exit: Exit the program when you're done.



Example Usage
Insert Items

mathematica
Copy code
The list is empty. Please insert items.
Enter the index ID: 101
Enter the item name: Apple
Do you want to add more items? (yes/no): yes
Enter the index ID: 102
Enter the item name: Banana
Do you want to add more items? (yes/no): no
Choose an Operation

markdown
Choose an operation:
1. Edit an item
2. Search for an item
3. Print the list
4. Exit
Enter your choice: 3
Output

101 Apple
102 Banana
Dependencies
A modern C++ compiler (C++11 or later).
Contribution
Contributions are welcome! Please follow these steps to contribute:

Fork the repository.
Create a new branch for your feature or bugfix.
Commit your changes and push to your branch.
Submit a pull request.
License
This project is licensed under the MIT License. See the LICENSE file for details.
