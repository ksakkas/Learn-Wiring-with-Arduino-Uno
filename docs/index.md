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


 <h4> <b>Functionality</b></h4>
<br>
Για να χρησιμοποιήσετε τη βιβλιοθήκη Time σε ένα σκίτσο Arduino, συμπεριλάβετε το TimeLib.h.

 <br>
 
<div style="bacgkround-color:#f2f2f2;">
#include <TimeLib.h>
</div>

Οι συναρτήσεις που είναι διαθέσιμες στη βιβλιοθήκη περιλαμβάνουν
 
<pre><code class="lang-c"><span class="hljs-selector-tag">hour</span>();            <span class="hljs-comment">// the hour now  (0-23)</span>
<span class="hljs-selector-tag">minute</span>();          <span class="hljs-comment">// the minute now (0-59)</span>
<span class="hljs-selector-tag">second</span>();          <span class="hljs-comment">// the second now (0-59)</span>
<span class="hljs-selector-tag">day</span>();             <span class="hljs-comment">// the day now (1-31)</span>
<span class="hljs-selector-tag">weekday</span>();         <span class="hljs-comment">// day of the week (1-7), Sunday is day 1</span>
<span class="hljs-selector-tag">month</span>();           <span class="hljs-comment">// the month now (1-12)</span>
<span class="hljs-selector-tag">year</span>();            <span class="hljs-comment">// the full four digit year: (2009, 2010 etc)</span>
</code></pre>


Υπάρχουν επίσης συναρτήσεις για την επιστροφή της ώρας σε μορφή 12 ωρών
 
```c
hourFormat12();    // the hour now in 12 hour format
isAM();            // returns true if time now is AM
isPM();            // returns true if time now is PM

now();             // returns the current time as seconds since Jan 1 1970
```

Οι λειτουργίες ώρας και ημερομηνίας μπορούν να λάβουν μια προαιρετική παράμετρο για την ώρα. Αυτό αποτρέπει
σφάλματα εάν ο χρόνος κυλήσει μεταξύ των στοιχείων. Για παράδειγμα, αν ξεκινήσει ένα νέο λεπτό
μεταξύ λήψης του λεπτού και του δευτερολέπτου, οι τιμές θα είναι ασυνεπείς. Χρησιμοποιώντας το
οι ακόλουθες λειτουργίες εξαλείφουν αυτό το πρόβλημα

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

Οι λειτουργίες για τη διαχείριση των υπηρεσιών χρονοδιακόπτη είναι:
 
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

Οι τιμές ώρας και ημερομηνίας δεν είναι έγκυρες εάν η κατάσταση είναι "timeNotSet". Διαφορετικά, μπορούν να χρησιμοποιηθούν τιμές αλλά
ο χρόνος επιστροφής μπορεί να έχει μετατοπιστεί εάν η κατάσταση είναι "timeNeedsSync".

```c
setSyncProvider(getTimeFunction);  // set the external time provider
setSyncInterval(interval);         // set the number of seconds between re-sync
```

Υπάρχουν πολλές μακροεντολές ευκολίας στο αρχείο «time.h» για σταθερές χρόνου και μετατροπή
των χρονικών μονάδων.

Για να χρησιμοποιήσετε τη βιβλιοθήκη, αντιγράψτε τη λήψη στον κατάλογο της Βιβλιοθήκης.


 
 
</body>
</html>
