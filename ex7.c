#include <stdio.h>

int main(int argc, char* argv[])
{
  int distance = 100;
  float power = 2.34f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Alex";
  char last_name[] = "Coleman";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesokme super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c %s\n",
         first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f.\n",
         bugs, bug_rate);

  unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld bugs.\n",
         universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n",
         expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n",
         part_of_universe);

  // this makes no sense, just a demo of weird C ness
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("Which means you should care %d%%.\n",
        care_percentage);

  /* this section leads to compilation failure 
  char exp[] = "Z";
  int test_num = 2;
  int exp_outcome = exp * test_num;
  printf("Can we multiply a char (%s) by an int (%d), to give %d\n",
         exp, test_num, exp_outcome);
  */
  return 0;
}
