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