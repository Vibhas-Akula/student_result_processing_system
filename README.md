<h1>Student Result Processing System</h1>
A Simple C-based application for processing of the student results, from a raw input file to a structured report consisting of the following columns:
<ol type = "1">
  <li>ID (Unique and Alphanumeric), validation to check for duplicates or special characters.</li>
  <li>NAME (Only Alphabets), validation to check for digits or special characters.</li>
  <li>MARKS (Split as the Major and Minor marks for 5 subjects as a pair of two values), validation to check whether the marks lie in the region [0, 100].</li>
</ol><hr>
<h1>Processing Procedure</h1>
<ol type = "i">
  <li><h3>Input and Validation:</h3> Checking whether the ID, NAME, and MARKS are valid or not (satisfying the valid constraints). Invalid Inputs are re-prompted towards the user.</li>
  <li><h3>Computation:</h3> Computation of the total marks for each subject for a student and assigning the respective grades.</li>
  <li><h3>Output and Features:</h3> Computing the class average percentage, highest and lowest percentages, and the grade category counts.</li>
  <li><h3>Display Report:</h3> Output the report in an output file with the necessary statistics.</li>
</ol><hr>
<h1>Student Results</h1>
The results are stored in <a href = "https://github.com/Vibhas-Akula/student_result_processing_system/blob/main/students_results.txt">student_results.txt</a> file.
<hr>
<h1>Makefile Commands (Optional)</h1> 
<h3>make all:</h3> builds all the target object files and executables.<br>
<h3>make clean:</h3> removes the object files and executables.
