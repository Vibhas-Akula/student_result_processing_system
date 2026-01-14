<h1>Student Result Processing System</h1>
A Simple C-based application for processing of the student results, from a raw input file to a structured report consisting of the following columns:
<ol type = "1">
  <li>ID (Unique and Alphanumeric), validation to check for duplicates or special characters.</li>
  <li>NAME (Only Alphabets), validation to check for digits or special characters.</li>
  <li>MARKS (Split as the Major and Minor marks for 5 subjects as a pair of two values), validation to check whether the marks lie in the region [0, 100].</li>
</ol><hr>
<h1>Processing Procedure:</h1>
<ol type = "i">
  <li><b>Input and Validation:</b> Checking whether the ID, NAME, and MARKS are valid or not (satisfying the valid constraints).</li>
  <li><b>Computation:</b> Computation of the total marks for each subject for a student and assigning the respective grades.</li>
  <li><b>Output and Features:</b> Computing the class average percentage, highest and lowest percentages, and the grade category counts.</li>
  <li><b>Display Report:</b> Output the report in an output file with the necessary statistics.</li>
</ol>
