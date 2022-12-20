#include <iostream>
#include <cstdlib>
#include <ctime>

int picks(int x){
	std::srand(std::time(nullptr));
	if (x==4){return 1+std::rand()%10;}
	else if(x==1){return 1+std::rand()% 4;}
	else if(x==2){return 1+std::rand()% 6;}
	else if(x==3){return 1+std::rand()% 8;}
	else if(x==5){return 1+std::rand()% 12;}
	else if(x==6){return 1+std::rand()% 20;}
	else{return 1+std::rand()% 100;}
}
int main(){
	int x;
	std::cout << "What Dices do you need\n d4 == 1 \n d6 == 2 \n d8 == 3 \n d10 == 4 \n d12 == 5 \n d20 == 6 \n d100 == 7 \n";
	std::cin >> x;
	std::cout << picks(x) << "\n" << main();
}
