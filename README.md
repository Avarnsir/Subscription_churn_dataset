
<div align="center">
  <h1>📊 C-CSV-Parser</h1>
  <p>A lightweight C program that reads and formats CSV datasets, inspired by Python Pandas' <code>df.head()</code>.</p>
</div>

<hr>

<h2>👥 Collaborators</h2>
<p>This project is proudly built in collaboration with <strong><a href="https://github.com/nehal-analytic-12" target="_blank">Nehal Kashyap</a></strong>.</p>

<h2>✨ Features</h2>
<ul>
  <li><strong>Header Extraction:</strong> Isolates and prints column names from a CSV file.</li>
  <li><strong>Tabular Formatting:</strong> Prints the dataset in a perfectly aligned, readable grid using fixed-width string formatting.</li>
  <li><strong>Data Peeking:</strong> Automatically extracts the first 5 rows (plus the header), mimicking standard data analysis tools.</li>
</ul>

<h2>🚀 Getting Started</h2>

<h3>Prerequisites</h3>
<p>You will need a standard C compiler (such as GCC) installed on your system.</p>

<h3>Compilation & Execution</h3>
<ol>
  <li>Clone this repository or download the source code files.</li>
  <li>Ensure your dataset (e.g., <code>ravenstack_accounts.csv</code>) is placed in the exact same directory as the C source file.</li>
  <li>Open your terminal and compile the code:</li>
</ol>

<pre><code>gcc read_csv.c -o read_csv</code></pre>

<ol start="4">
  <li>Run the compiled executable:</li>
</ol>
<ul>
  <li><strong>Linux/Mac:</strong> <code>./read_csv</code></li>
  <li><strong>Windows:</strong> <code>read_csv.exe</code></li>
</ul>

<h2>🛠️ Built With</h2>
<ul>
  <li><strong>C Language</strong> (Utilizing standard I/O and string manipulation libraries)</li>
</ul>

<hr>
