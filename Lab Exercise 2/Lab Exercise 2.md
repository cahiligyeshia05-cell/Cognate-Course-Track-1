<img width="2126" height="1307" alt="Screenshot 2026-05-21 at 17-37-32 Circuit design sevseg - Tinkercad" src="https://github.com/user-attachments/assets/36943a97-3cfc-44a2-b7f2-0b26ff9dfa5b" />

This lab exercise was particularly challenging at first because it introduced novel concepts and components like the two pushbuttons for decrement and increment operations and the 7 segment display for showing a single-integer output. It wasn't too difficult after all, since it's just the fundamentals. In terms of hardware, the diagram consisted of:
a) the breadboard,
b) Arduino Uno3,
c) two (2) pushbuttons,
d) 7 segment display,
e) two (2) 10-kilo ohms resistors, and
f) seven (7) 300 ohms resistors, as well as all the wires connecting them.
I may have went overboard color-coding the wires but the basic format remains the same. Red for the red terminal and black for the ground terminal. For the 7 segment display, I used red for the common terminals and, following a rainbow's colors, orange to pink for the remaining pins. The wiring instructions was something I was confused about, which was immediately clarified by other existing diagrams by TinkerCAD users on the net.

In terms of software, the code is straightforward as always. The top part before the void setup() and void loop() declared the diagram's existing elements like the array of pins, the decrement and increment button, and the starting integer (0) for the 7 segment display. A 10 by 7 matrix was utilized to store each number and the way they can be displayed.

void setup() looped through pins 2 to 8 connecting to A to G respectively. It also assigned the buttons for input, so that they can perform decrementation and incrementation. The starting display number is set to 0.
void displayNumber() ensured that the numbers don't go beyond 0 or 9 despite additional decrementation or incrementation.
void loop() performed the button operations which changed the 7 segment's displayed integer when the left button is pushed (decremented) or the right button is pushed (incremented).
