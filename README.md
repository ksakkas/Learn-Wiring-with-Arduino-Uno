<html>
<head>

</head>
<body>
<h1>Learn how to programming with Arduino Uno</h1>
<p> Τμήμα Πληροφορικής & Τηλεπικοινωνιών </p>
<p>Αρχιτεκτονική Υπολογιστών Εργαστήριο - 3ο Εξάμηνο</p>
<p> Κωνσταντίνος Σακκάς</p>
<p>Copyright © 2021 Κωνσταντίνος Σακκάς. Με την επιφύλαξη παντός δικαιώματος</p>
<hr>

<h3>Εισαγωγή στο Arduino Uno και στην Wiring</h3>
<ul>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/hello.ino">Hello World</a></li>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/print.ino">Η εντολή print</a></li>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/println.ino">Η εντολή println</a></li>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/if.ino">Η εντολή if</a></li>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/for.ino">Η εντολή for</a></li>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/while.ino">Η εντολή while</a></li>
<li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Code/Greek/blink.ino">Blink Led</a></li> 
</ul>
 
 <h3>Ασκήσεις Εργαστηρίου</h3>
<ul>
 <li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Lab/lab3_1.ino">Εμφάνιση Δεδομένων (3.1)</a></li>
 <li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Lab/lab3_2.ino">Εμφάνιση και Ανάγνωση Δεδομένων (3.2)</a></li>
 <li><a href="https://github.com/ksakkas/Learn-Wiring-with-Arduino-Mega/blob/master/Lab/lab3_3.ino">Εμφάνιση, Ανάγνωση Δεδομένων και χρήση led (3.3 - Θερμοκρασία)</a></li>

 </ul>
 
 <h3>Η Βιβλιοθήκη Time</h3>
 # Arduino Time Library


## Functionality

To use the Time library in an Arduino sketch, include TimeLib.h.

```c
#include <TimeLib.h>
```

The functions available in the library include

```c
hour();            // the hour now  (0-23)
minute();          // the minute now (0-59)
second();          // the second now (0-59)
day();             // the day now (1-31)
weekday();         // day of the week (1-7), Sunday is day 1
month();           // the month now (1-12)
year();            // the full four digit year: (2009, 2010 etc)
```

there are also functions to return the hour in 12-hour format

```c
hourFormat12();    // the hour now in 12 hour format
isAM();            // returns true if time now is AM
isPM();            // returns true if time now is PM

now();             // returns the current time as seconds since Jan 1 1970
```

The time and date functions can take an optional parameter for the time. This prevents
errors if the time rolls over between elements. For example, if a new minute begins
between getting the minute and second, the values will be inconsistent. Using the
following functions eliminates this problem

```c
time_t t = now(); // store the current time in time variable t
hour(t);          // returns the hour for the given time t
minute(t);        // returns the minute for the given time t
second(t);        // returns the second for the given time t
day(t);           // the day for the given time t
weekday(t);       // day of the week for the given time t
month(t);         // the month for the given time t
year(t);          // the year for the given time t
```

Functions for managing the timer services are:

```c
setTime(t);                      // set the system time to the give time t
setTime(hr,min,sec,day,mnth,yr); // alternative to above, yr is 2 or 4 digit yr
                                 // (2010 or 10 sets year to 2010)
adjustTime(adjustment);          // adjust system time by adding the adjustment value
timeStatus();                    // indicates if time has been set and recently synchronized
                                 // returns one of the following enumerations:
timeNotSet                       // the time has never been set, the clock started on Jan 1, 1970
timeNeedsSync                    // the time had been set but a sync attempt did not succeed
timeSet                          // the time is set and is synced
```

Time and Date values are not valid if the status is `timeNotSet`. Otherwise, values can be used but
the returned time may have drifted if the status is `timeNeedsSync`. 	

```c
setSyncProvider(getTimeFunction);  // set the external time provider
setSyncInterval(interval);         // set the number of seconds between re-sync
```

There are many convenience macros in the `time.h` file for time constants and conversion
of time units.

To use the library, copy the download to the Library directory.


 
 
</body>
</html>
