UNI QUICK 🍽️ - Restaurant Management System
UNI QUICK is a console-based restaurant management system that allows users to sign up, log in, place food orders from various restaurants, and book tables. The application simulates a digital cafeteria experience at a university or organization.
Features
•	🔐 User Authentication (Signup/Login with password encryption)
•	🧾 Menu display and food ordering from multiple eateries:
   - Cafeteria
   - Pizza Fast
   - Fast Shawarma
   - Fast Dhabba
   - Fast Juice Bar
•	🪑 Table Booking (for select restaurants)
•	💳 Payment Simulation (Cash or Online with OTP validation)
•	💾 Inventory handling with file read/write for persistent menu and stock data
Project Structure
```
Inventory/
├── Cafeteria.txt
├── Pizza_Fast.txt
├── Fast_Dhabba.txt
├── Fast_Shawarma.txt
├── Fast_Juice_Bar.txt
main.cpp
Uniquick_User_Data.txt
```
> Ensure the Inventory directory exists with proper `.txt` files formatted as:
> ```
> Code Name Price Quantity
> ```
Requirements
•	Windows OS (due to use of <windows.h>, SetConsoleCursorPosition, and _getch())
•	C++ Compiler (preferably MinGW or MSVC)
•	Console with ANSI/Windows terminal support
How to Run
1.	Clone or download this repository.
2.	Place the `main.cpp` file and the `Inventory` folder in the same directory.
3.	Compile the code using:
   ```
   g++ main.cpp -o Uniquick.exe
   ```
4.	Run the executable:
   ```
   Uniquick.exe
   ```
Notes
- Passwords are hashed using `std::hash` and stored in `Uniquick_User_Data.txt`.
- All terminal outputs are color-coded and positioned using `goto_xy()` for a UI-like feel.
- The order process includes optional discount and billing.
- Table booking system simulates random availability.
Acknowledgments
Developed as a university-level project for simulation and learning purposes. All file operations are text-based for simplicity.
License
MIT License — use and modify freely for educational purposes.
