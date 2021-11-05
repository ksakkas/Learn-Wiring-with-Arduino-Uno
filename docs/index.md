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
 
<pre><code class="lang-c"><span class="hljs-selector-tag">hourFormat12</span>();    <span class="hljs-comment">// the hour now in 12 hour format</span>
<span class="hljs-selector-tag">isAM</span>();            <span class="hljs-comment">// returns true if time now is AM</span>
<span class="hljs-selector-tag">isPM</span>();            <span class="hljs-comment">// returns true if time now is PM</span>

<span class="hljs-selector-tag">now</span>();             <span class="hljs-comment">// returns the current time as seconds since Jan 1 1970</span>
</code></pre>


Οι λειτουργίες ώρας και ημερομηνίας μπορούν να λάβουν μια προαιρετική παράμετρο για την ώρα. Αυτό αποτρέπει
σφάλματα εάν ο χρόνος κυλήσει μεταξύ των στοιχείων. Για παράδειγμα, αν ξεκινήσει ένα νέο λεπτό
μεταξύ λήψης του λεπτού και του δευτερολέπτου, οι τιμές θα είναι ασυνεπείς. Χρησιμοποιώντας το
οι ακόλουθες λειτουργίες εξαλείφουν αυτό το πρόβλημα

<pre><code class="lang-c">time_t <span class="hljs-built_in">t</span> = <span class="hljs-built_in">now</span>(); // store the current <span class="hljs-built_in">time</span> in <span class="hljs-built_in">time</span> variable <span class="hljs-built_in">t</span>
<span class="hljs-built_in">hour</span>(<span class="hljs-built_in">t</span>);          // returns the <span class="hljs-built_in">hour</span> for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
<span class="hljs-built_in">minute</span>(<span class="hljs-built_in">t</span>);        // returns the <span class="hljs-built_in">minute</span> for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
<span class="hljs-built_in">second</span>(<span class="hljs-built_in">t</span>);        // returns the <span class="hljs-built_in">second</span> for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
<span class="hljs-built_in">day</span>(<span class="hljs-built_in">t</span>);           // the <span class="hljs-built_in">day</span> for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
<span class="hljs-built_in">weekday</span>(<span class="hljs-built_in">t</span>);       // <span class="hljs-built_in">day</span> of the week for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
<span class="hljs-built_in">month</span>(<span class="hljs-built_in">t</span>);         // the <span class="hljs-built_in">month</span> for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
<span class="hljs-built_in">year</span>(<span class="hljs-built_in">t</span>);          // the <span class="hljs-built_in">year</span> for the given <span class="hljs-built_in">time</span> <span class="hljs-built_in">t</span>
</code></pre>


Οι λειτουργίες για τη διαχείριση των υπηρεσιών χρονοδιακόπτη είναι:
 
<pre><code class="lang-c">setTime(t);                      // <span class="hljs-keyword">set</span> the <span class="hljs-keyword">system</span> <span class="hljs-keyword">time</span> <span class="hljs-keyword">to</span> the give <span class="hljs-keyword">time</span> t
setTime(hr,<span class="hljs-keyword">min</span>,sec,<span class="hljs-keyword">day</span>,mnth,yr); // alternative to above, yr is 2 or 4 digit yr
                                 // (2010 or 10 sets year to 2010)
adjustTime(adjustment);          // adjust system time by adding the adjustment value
timeStatus();                    // indicates if time has been <span class="hljs-keyword">set</span> <span class="hljs-keyword">and</span> recently synchronized
                                 // <span class="hljs-keyword">returns</span> one <span class="hljs-keyword">of</span> the <span class="hljs-keyword">following</span> enumerations:
timeNotSet                       // the <span class="hljs-keyword">time</span> has <span class="hljs-keyword">never</span> been <span class="hljs-keyword">set</span>, the clock started <span class="hljs-keyword">on</span> Jan <span class="hljs-number">1</span>, <span class="hljs-number">1970</span>
timeNeedsSync                    // the <span class="hljs-keyword">time</span> had been <span class="hljs-keyword">set</span> but a <span class="hljs-keyword">sync</span> attempt did <span class="hljs-keyword">not</span> succeed
timeSet                          // the <span class="hljs-keyword">time</span> <span class="hljs-keyword">is</span> <span class="hljs-keyword">set</span> <span class="hljs-keyword">and</span> <span class="hljs-keyword">is</span> synced
</code></pre>


Οι τιμές ώρας και ημερομηνίας δεν είναι έγκυρες εάν η κατάσταση είναι "timeNotSet". Διαφορετικά, μπορούν να χρησιμοποιηθούν τιμές αλλά
ο χρόνος επιστροφής μπορεί να έχει μετατοπιστεί εάν η κατάσταση είναι "timeNeedsSync".

<pre><code class="lang-c">setSyncProvider(getTimeFunction);  // <span class="hljs-keyword">set</span> the <span class="hljs-keyword">external</span> <span class="hljs-keyword">time</span> provider
setSyncInterval(<span class="hljs-built_in">interval</span>);         // <span class="hljs-keyword">set</span> the <span class="hljs-built_in">number</span> <span class="hljs-keyword">of</span> seconds <span class="hljs-keyword">between</span> re-<span class="hljs-keyword">sync</span>
</code></pre>


Υπάρχουν πολλές μακροεντολές ευκολίας στο αρχείο «time.h» για σταθερές χρόνου και μετατροπή
των χρονικών μονάδων.

Για να χρησιμοποιήσετε τη βιβλιοθήκη, αντιγράψτε τη λήψη στον κατάλογο της Βιβλιοθήκης.


 
 
</body>
</html>
