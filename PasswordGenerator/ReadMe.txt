###################
#                 #
#     PassGen     #
#  by TakSeBiegam #
#                 #
###################

Hello i'm TakSeBiegam, tooday i made, program which can help for your daily work.


--- Functions ---

The main assumption of the program is to generate specific characters or letters through auxiliary functions.

   * Auxiliary functions *
      - Turn on/off generate numbers (e.g.  |  1 2 3 4)
      - Turn on/off generate large letters (e.g. |  A B C D E F)
      - Turn on/off special symbols (e.g. |  % ^ # $ *)

Function generate(int, bool, bool, bool):
  This function is returning string, explanation input data:
      unsigned int - Number of letters to generate
      bool - true = turn on generate numbers / false = turn off generate numbers (default: false)
      bool - true = turn on generate large letters / false = turn off generate letters (default: false)
      bool - true = turn on generate special symbols / false = turn off generate special symbols (default: false
      
E.g. use of function


```Cpp

int main()
{
  int n = 10;
  std::string abc = "";
  abc = generate(n, true, true, false);
  
  return 0;
}


```
