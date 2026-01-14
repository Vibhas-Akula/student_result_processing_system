<h1>Student Result Processing System</h1>
A Simple C-based application for processing of the student results, from a raw input file to a structured report consisting of the following columns:
<ol type = "1">
  <li>ID (Unique and Alphanumeric), validation to check for duplicates or special characters.</li>
  <li>NAME (Only Alphabets), validation to check for digits or special characters.</li>
  <li>MARKS (Split as the Major and Minor marks for 5 subjects as a pair of two values), validation to check whether the marks lie in the region [0, 100].</li>
</ol><hr>
<h1>Processing Procedure</h1>
<ol type = "i">
  <li><h3>Input and Validation:</h3> Checking whether the ID, NAME, and MARKS are valid or not (satisfying the valid constraints).</li>
  <li><h3>Computation:</h3> Computation of the total marks for each subject for a student and assigning the respective grades.</li>
  <li><h3>Output and Features:</h3> Computing the class average percentage, highest and lowest percentages, and the grade category counts.</li>
  <li><h3>Display Report:</h3> Output the report in an output file with the necessary statistics.</li>
</ol>
<h1>SYSTEM FILES</h1>
<ul type = "disc">
  <li><h3>input_and_validate.c:</h3><br>
    void read_details(char* id, char* name, int* marks);<br>
    void validate_id(char* id);<br>
    void validate_name(char* name);<br>
    void validate_marks(int* marks);
  </li>
  <li><h3>computation.c:</h3><br>
    void compute_percentages();<br>
    void compute_grades();<br>
    void compute_cgpa();
  </li>
  <li><h3>output_feature.c:</h3><br>
    float class_average();<br>
    float lowest_percentage();<br>
    float highest_percentage();<br>
    void grade_category_counts();<br>
    void display_report(char* output_file);
  </li>
</ul>
