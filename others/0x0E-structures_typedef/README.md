## Task

* [dog.h](./dog.h): Header file that defines a new type `struct dog` with the
  following elements:
    * `char *name`
    * `float age`
    * `char *owner`

- [1-init_dog.c](./1-init_dog.c): C function that initializes a variable of type `struct dog`.

- [2-print_dog.c](./2-print_dog.c): C function that prints a `struct dog`.
    * If an element of `d` is `NULL`, the function prints `(nil)` instead of the element.
    * If `d` is `NULL`, the function prints nothing.

- [dog.h](./dog.h): Header file that defines a new type `dog_t` as a new name for the
  type `struct dog`.

- [4-new_dog.c](./4-new_dog.c): C function that creates a dog.
    * Returns `NULL` if the function fails.

- [5-free_dog.c](./5-free_dog.c): C function that frees dogs.

All code are compile using the options: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`