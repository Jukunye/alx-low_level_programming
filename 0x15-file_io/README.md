# Tasks

  * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text file and
  prints it to the `POSIX` standard output.
  * The parameter `letters` is the number of letters the function should read and print.
  * If the file is `NULL` or cannot be opened or read - returns `0`.
  * If the `write` call fails or does not write the expected number of bytes - returns `0`.
  * Otherwise - returns the actual number of bytes the function can read and print.