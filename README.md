# 🚗 Uber C++ Program - Lahore Edition

![C++](https://img.shields.io/badge/C++-17-blue.svg) ![License](https://img.shields.io/badge/License-MIT-green.svg) ![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)

A complete command-line ride-hailing system simulation built in C++ with a focus on Lahore, Pakistan. This program simulates Uber-like functionality with real locations, multiple vehicle types, and dynamic pricing.

## 📋 Table of Contents
- [Features](#features)
- [Program Overview](#program-overview)
- [Installation](#installation)
- [Usage](#usage)
- [Screenshots](#screenshots)
- [Documentation](#documentation)
- [Code Structure](#code-structure)
- [Contributing](#contributing)
- [License](#license)

## ✨ Features

### 🎯 Core Features
- **Location-Based System**: 10 famous Lahore locations with real distances from University of Central Punjab (UCP)
- **Multiple Vehicle Types**: 5 vehicle options (Economy, Premium, SUV, Bike, Auto) with different rates
- **Dynamic Pricing**: Automatic surge pricing based on driver availability
- **Driver Management**: View driver profiles with ratings and vehicle information
- **Fare Calculator**: Estimate fares for different vehicle types
- **User-Friendly Interface**: Clean console interface with formatted menus

### 📍 Lahore Locations Included
- Emporium Mall (8.5 km)
- Liberty Market (6.2 km)
- Fortress Stadium (9.1 km)
- Packages Mall (7.8 km)
- DHA Phase 5 (5.5 km)
- Gulberg Main Market (4.8 km)
- Johar Town (3.2 km)
- Wapda Town (4.5 km)
- Model Town (6.8 km)
- Allama Iqbal Airport (12.3 km)

### 🚘 Vehicle Types & Pricing
| Vehicle Type | Rate per km | Driver | Use Case |
|--------------|-------------|--------|----------|
| Bike | PKR 25.0 | Bilal | Quick, economical rides |
| Auto | PKR 35.0 | Hassan | Short distance rides |
| Economy | PKR 55.0 | Ali | Standard car rides |
| Premium | PKR 85.0 | Ahmed | Comfortable sedan rides |
| SUV | PKR 120.0 | Usman | Group or luxury rides |

## 🖥️ Program Overview

### Main Menu
```
#################################################
#                                               #
#                    U B E R                    #
#                                               #
#################################################
#  [1] Book a Ride                              #
#  [2] Calculate Fare                           #
#  [3] View Available Drivers                   #
#  [4] Exit                                     #
#################################################
```

### Features Breakdown
1. **Book a Ride**: Complete booking process with location selection, driver choice, and fare calculation
2. **Calculate Fare**: Estimate fares for different vehicle types without booking
3. **View Available Drivers**: See all drivers with their ratings and vehicle details
4. **Exit**: Gracefully exit the program

## 🔧 Installation

### Prerequisites
- C++ Compiler (GCC, Clang, or MSVC)
- Terminal/Command Prompt

### Compilation
```bash
# Clone the repository
git clone https://github.com/yourusername/uber-cpp.git
cd uber-cpp

# Compile the program
g++ -o uber uber.cpp

# Run the program
./uber  # Linux/macOS
uber.exe  # Windows
```

### Quick Start
```bash
# One-liner compilation and execution
g++ -o uber uber.cpp && ./uber
```

## 🚀 Usage

### 1. Booking a Ride
```
[1] Book a Ride
   ↓
Enter your name
   ↓
Select destination from Lahore locations
   ↓
Choose driver from available list
   ↓
View ride details and confirm
   ↓
Ride booked successfully!
```

### 2. Calculating Fare
```
[2] Calculate Fare
   ↓
Select destination
   ↓
Choose surge pricing option
   ↓
View estimated fares for all vehicle types
```

### 3. Viewing Drivers
```
[3] View Available Drivers
   ↓
See all drivers with:
   - Name
   - Vehicle type
   - Rate per km
   - Star ratings
```

## 📸 Screenshots

### Main Menu
```
#################################################
#                                               #
#                    U B E R                    #
#                                               #
#################################################
#  [1] Book a Ride                              #
#  [2] Calculate Fare                           #
#  [3] View Available Drivers                   #
#  [4] Exit                                     #
#################################################
Enter choice: 
```

### Ride Booking
```
================ RIDE DETAILS =================
 Pickup  : University of Central Punjab, Lahore
 Dropoff : Packages Mall
 Distance: 7.8 km
 Rider   : John
 Driver  : Ahmed
 Vehicle : Premium
 Rate    : PKR 85 per km
 Surge   : 1x
 Fare    : PKR 663
================================================
```

## 📚 Documentation

### Complete Documentation
Visit the [full documentation](documentation.html) for detailed information about:
- Complete source code with explanations
- Variable documentation
- Location details and distances
- Pricing structure
- Program flow and logic

### Key Variables
```cpp
char riderName[50];              // Rider's name
string locations[10];           // Lahore locations
double distances[10];           // Distances from UCP
char driverNames[5][20];        // Driver names
string carTypes[5];             // Vehicle types
double ratesPerKm[5];           // Rates per km
double ratings[5];              // Driver ratings
double surgeMultiplier;         // Dynamic pricing
```

## 🏗️ Code Structure

### File Structure
```
uber-cpp/
├── uber.cpp              # Main program source code
├── documentation.html    # Complete HTML documentation
├── README.md            # This documentation file
└── images/              # Screenshots and diagrams
```

### Program Flow
```
Start → Main Menu → User Choice
       ↙          ↓          ↘
   Book Ride  Calculate Fare  View Drivers  Exit
       ↓            ↓              ↓         ↓
   Get Name    Select Loc     Show Info    End
       ↓            ↓              ↓
   Select Loc   Check Surge    Return to Menu
       ↓            ↓
   Check Surge  Show Fares
       ↓            ↓
   Show Drivers Return to Menu
       ↓
   Select Driver
       ↓
   Calculate Fare
       ↓
   Confirm Ride
       ↓
   Return to Menu
```

## 🚀 Advanced Features

### Surge Pricing Logic
- **Automatic**: Activates when available drivers < 3
- **Manual**: User can enable in fare calculator
- **Multiplier**: 1.5x (50% increase)
- **Purpose**: Encourages more drivers during high demand

### Input Validation
- Validates destination selection (1-10)
- Validates driver selection (1-5)
- Checks for invalid menu choices
- Prevents negative or zero distances

### Error Handling
```cpp
if (locationChoice < 1 || locationChoice > 10) {
    cout << "\n[ ERROR ] Invalid destination selection\n";
    continue;
}
```

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

### Reporting Issues
1. Check existing issues to avoid duplicates
2. Provide detailed description of the bug
3. Include steps to reproduce
4. Add screenshots if applicable

### Suggesting Features
1. Explain the feature and its benefits
2. Provide implementation ideas if possible
3. Consider if it aligns with project goals

### Pull Requests
1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

### Development Guidelines
- Follow C++ best practices
- Add comments for complex logic
- Maintain consistent formatting
- Update documentation if needed

## 📊 Project Statistics

### Code Metrics
- **Lines of Code**: ~300
- **Functions**: 1 main function
- **Files**: 2 (source + documentation)
- **Complexity**: Beginner to Intermediate

### Learning Outcomes
This project helps understand:
- C++ arrays and strings
- Console I/O operations
- Control structures (loops, conditionals)
- Basic algorithmic thinking
- Program flow management
- User interface design for CLI

## 🎓 Educational Value

### Concepts Covered
- **Data Structures**: Arrays, Strings, Character Arrays
- **Control Flow**: While loops, If-else statements, Switch cases
- **I/O Operations**: cin, cout, formatted output
- **Mathematics**: Distance calculations, fare computation
- **User Interface**: Menu systems, formatted displays

### Ideal For
- C++ beginners looking for practical projects
- Students learning array manipulation
- Developers exploring console applications
- Anyone interested in ride-hailing algorithms

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

```
MIT License

Copyright (c) 2024 Your Name

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
```

## 🙏 Acknowledgments

- University of Central Punjab (UCP) for inspiration
- Uber for the ride-hailing concept
- Lahore city for location references
- C++ community for best practices

## 📧 Contact

**Your Name**  
- GitHub: [@yourusername](https://github.com/yourusername)
- Email: your.email@example.com
- LinkedIn: [Your Name](https://linkedin.com/in/yourprofile)

## ⭐ Support

If you find this project helpful, please consider:
- Giving it a ⭐ on GitHub
- Sharing it with others
- Contributing improvements
- Reporting issues you find

---

<div align="center">
  <p>Made with ❤️ for the C++ community</p>
  <p>🚗 Happy Coding! 🚗</p>
</div>

## 🚀 Quick Links

- [View Source Code](uber.cpp)
- [Open Documentation](documentation.html)
- [Report an Issue](https://github.com/yourusername/uber-cpp/issues)
- [Request a Feature](https://github.com/yourusername/uber-cpp/issues)

---

**Note**: This is an educational project simulating ride-hailing functionality. It is not affiliated with or endorsed by Uber Technologies Inc.
