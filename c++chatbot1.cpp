#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>   //untuk dapat memanggil void function srand()

int main()
{
 //var string array buat response bot
 std::string Response[] = {
                           "I HEARD YOU!",
		           "SO, YOU ARE TALKING TO ME.",
	                   "CONTINUE, I’M LISTENING.",
		           "VERY INTERESTING CONVERSATION.",
		           "TELL ME MORE..."
			  };

 //generate random number by current time
 srand((unsigned) time(NULL));

 //var string input dari user + response dari chat bot
 std::string sInput    = "";
 std::string sResponse = "";

 while (1)
       {
        std::cout << "Masukan kalimat anda : ";
        std::getline(std::cin, sInput);            //cari inputan dari user
        int nSelection = rand() % 5;               //angka pemilihan array response bot
        sResponse      = Response[nSelection];     //pilih nomer array string response bot
        std::cout << sResponse << std::endl;       //ucapkan response bot
       }

 return 0;   //tandai program dengan code 0 --> program berakhir dengan success
}


//cara compile --> g++ c++chatbot1.cpp -o c++chatbot1 --> gcc tidak dapat membaca class std

//program masih ada kelemahan, responsenya bisa berulang kalimat yang sama berturut-turut
