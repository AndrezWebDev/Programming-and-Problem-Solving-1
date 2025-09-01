// Keyboard Fundamentals

// ---------Keystroke to Signal------------

// When you activate a physical switch a small microprocessor (keyboard controller) will scan constantly the state of the switches

// When it detects the key press or release there is a set of actions that the controller performs

// 1) Debouncing- WHen the controller generates an electrical 'noise' signal that registers each intended key press.

// 2) Scans Codes- It won't send actual characters like A or B the keyboard sends a numerical code for each key pressed event.

// 3) Signal Transmission- Once scanned the code transmits it to the computers operating system

// -----------Keyboard Buffer Memory-------------

// - Once the code is received by the computer it is temporarily stored in the keyboard buffer memory

// Purpose- THis ensures no keystrokes are lost (How it works: everytime you time a character it gets copied to the buffer memory)

// ---------The Role of the Enter Key-------------

// As you are accumlate characters in the keyboard buffer the computer utsel won't receive any input until you press the Enter key.

// Signal to Program - The Enter key sends a signal to the program that the input is complete and ready to be processed.

// Buffer to Program - Only when the Enter key is pressed the buffer transfers the entire line of input to the program. Like for instance in C++ the function std::cin is used to read input from the keyboard only after the Enter key is pressed.

// ---------Character Representation: ASCII and Beyond-------------

// ASCII (American Standard Code for Information Interchange) - A old but the most fundemental character endcoding standards, which uses 7 bits to represent 128 characters. These includes letters, numbers, punctuation, and control characters, for example 'A' is represented as 65 in ASCII. and 1 is represented as 49 in ASCII.

// Extended ASCII - This extended the ASCII set to 256 characters, adding more international characters and special symbols.

// Unicode - This supports virtually all written languages and symbols worldwide, common encoding systems are UTF-8 (8-bit) and UTF-16 (16-bit) or UTF-32 (32-bit).

// Modifier Keys - These are keys that modify the behavior of other keys, like Shift, Ctrl, Alt, and the Windows key. They are used to create special characters like ™, §, or ©.



// ---------------------------------------------------------------------------

// Introduction to C++
// We will first learn in programming is how to make your program communicate with the user. In C++ we use inputs and outputs streams.

// ------------ What are Streams? ------------

// Streams - In C++ is a sequence of bytes

// Output Streams - This sends data from your programm to destination like our screens.

// Input Streams - This receives data from a source like our keyboards to bring into our programs.

// ------------ std::cout Standard Output Stream ------------

// std::cout (prounced 'see-out') the standard output stream in C++ which is used to display information on tou your screen.
// std:: - this indicates that cout is pard of the std namespace ( just a way to organize code in C++ top to avoid conflicts).
// '<<' (Insertion Operator)- These double left arrows says to insert data into the 'cout' stream, sending it to the console. You can also chain multiple '<<' operators to insert multiple pieces of data in a single statement.

// Check Example Section under: std::cout

// --------------std::cin Standard Input-------------
// Check Example Section under: std::cin

// std::cin (pronounced "see-in") - this is the standard input stream in C++ which is used to read data the user has typed.
// - std:: (prefix) like cout, cin also belongs to the std namespace
// - '>>' (Extraction Operator) these double arrow is called the extraction operator which extracts data from the 'cin' stream and places it into the variavble on its right,

// ----------------std::endl End Line and Flush---------------------
//std::endl (pronounces "end-line")- used to manipulate output streams that is performed in two actions
// - Inserts a NewLine Character: Moves the cursor to the beginning of the next line on the console(Kinda like pressing the enter key)
// - Flushes the Output Buffer: Forces any buffed output data to be immedieately written to the console. It is often beneficial
//   it can sometimes impact performance in very large programs



// ------------------------------------------------------------------------------------------------------

// ----------------------- Variables -----------------------------

// -------Intro to Variables--------
// Variables - in programming this is like a labeled box in your computers memory
// But before you use a variable you have to tell the computer two things:
// - The Type of data it will hold and then Name a variable which the process is called declaration

// ---------Delcaring and Assigning values-------------

// We will first start by declaring integer data types that is used for whole numbers

// Example:
// Declare an integer variable named 'score'
// - int score

// Assign the value 100 to the variable
// - score = 100;

// But you also can do both in one line which is called initialization
// - int lives = 3; (The (=) assignment operator takes the value on the right and puts it to the variable on the left


// -----------Printing Variable values -----------

// After a variable has a value to print it to the console using std::cout just like yu would with text.
// Then the << operator allows you to combine text and variables in the same line


// Example Section:

#include <iostream> // Required for cout abd cin

int main() {
    // Example of cout:
    std::cout << "Hello, C++ World!"; // Output a string to the console
    std::cout << "The number is: " << 42 <<std::endl; // Outputs a string and an integer to the

    // Example of cin:
    int age; // Declare integer variable
    std::cout << "Please enter your age here: ";
    std::cin >> age; // Reads user input age
    std::cout << "Awesome your " << age << " years old." <<std::endl;

    //Example of endl:
    std::cout << "First line." << std::endl; // Newline and flush
    std::cout << "Second line." <<std::endl;

    //Example of making a variable
    int score;
    score = 100;
    std::cout << "Your score is:" << score << std::endl;


    return 0;   // This return statement indicates that the program completed successful
}

