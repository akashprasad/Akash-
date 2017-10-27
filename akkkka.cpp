# Akash-
#include<iostream>
using namespace std;

int Strlen(char* str) {
	int length = 0;
	while (*(str+length) != '\0') {
		++length;
	}

	return length;
}

void Strcpy(char* destination, char* source) {
	while (*source != '\0') {
		*(destination) = *(source);
		++destination;
		++source;
	}
	*destination = '\0';
}

char* Strcat(char* destination, char* source) {
	while (*destination != '\0')
		destination++;

	while (*source != '\0') {
		*destination = *source;
		++destination;
		++source;
	}

	return destination;
}

int Strcmp(char* str1, char* str2) {
	int s1=0;
	for (int i=0; i<Strlen(str1); ++i)
		s1 += *(str1+i);

	int s2=0;
	for (int i=0; i<Strlen(str2); ++i)
		s2 += *(str2+i);

	return s1 - s2;
}

int Strchr(char* str1, char ch) {
	for (int i=0; i<Strlen(str1); ++i) {
		if (*(str1+i) == ch) {
			return i;
		}

		if (i == Strlen(str1)-1) {
			return 0;
		}
	}
}

char* Strstr(char* str1, char* str2) {
	int flag = 0;
	for (int i=0; i<Strlen(str1); ++i) {
		flag = 0;
		for (int j=0; j<Strlen(str2); ++j) {
			if (*(str1+i+j) == *(str2+j)) {
				++flag;
			} else break;

			if (flag = Strlen(str2)) {
				cout << str1+i << endl;
				return 0;
			}
		}
	}

	return 0;
}


int main() {
	char str1[50] = "Akash ";
	char str2[50] = "Prasad";
	char str3[50];

	char gk[50] = "I am a student of niser";
	cout <<"Using strlen : "<< Strlen(gk) << endl;
	cout <<"Using strcmp : "<< Strcmp(str1, str2) << endl;
 	cout <<"Using strchr  : "<<Strchr(str1, 'D') << endl;
    cout<<"Using strcat : "<<Strcat(str1,str2)<<endl;
	cout<<"Using strstr : "<<Strstr(str1,str2);


	return 0;
}
