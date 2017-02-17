#include "twitter.h"
#include <time.h>

// created by william 2017
int main(void){
	int TIME = 0;
	char command[20];

	while(scanf("%s", command) == 1){
		if ((strcmp(command, "tweet")) == 0){
			char tweet[141];
			scanf("%[^\n]s",tweet);
			if (strlen(tweet) <= 140){
				sendTweet(tweet+1);
			}
			else {
				printf("bad input\n");
			}

		}

		else if ((strcmp(command, "r")) == 0){
			TIME = 0;
			continue;
		}

		else if ((strcmp(command, "exit")) == 0){
			printf("Program now terminating...\n");
			exit(0);
		}

		else if ((strcmp(command, "time")) == 0){
			if (TIME == 0){
				printf("Timing now on\n");
				TIME = 1;
			}
			else {
				printf("Timing now off\n");
				TIME = 0;
			}
		}

		else if ((strcmp(command, "open")) == 0){
			char openWhat[20];
			scanf("%s",openWhat);

			if (strcmp(openWhat, "chrome") == 0){
				char site[30];
				scanf("%s",site);
				if (strcmp(site, "new") == 0){
					if (TIME) {
						clock_t begin = clock();
						openChrome("about:blank");
						clock_t end = clock();
						double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
						printf("time: %lfs\n",time_spent);
					} else {
						openChrome("about:blank");
					}

			}
				else if (TIME) {
					clock_t begin = clock();
					openChrome(site);
					clock_t end = clock();
					double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
					printf("time: %lfs\n",time_spent);
				} else {
					openChrome(site);
				}
			}

			else if(strcmp(openWhat, "telegram") == 0){
				if (TIME) {
					clock_t begin = clock();
					openTelegram();
					clock_t end = clock();
					double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
					printf("time: %lfs\n",time_spent);
				} else {
					openTelegram();
				}
			}

			else if(strcmp(openWhat, "overwatch") == 0){
				if (TIME) {
					clock_t begin = clock();
					openOverwatch();
					clock_t end = clock();
					double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
					printf("time: %lfs\n",time_spent);
				} else {
					openOverwatch();
				}
			}

			else if(strcmp(openWhat, "discord") == 0){
				if (TIME) {
					clock_t begin = clock();
					openDiscord();
					clock_t end = clock();
					double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
					printf("time: %lfs\n",time_spent);
				}
				else {
					openDiscord();
				}
			}

			else {
				printf("bad input\n");
			}
		}
		else {
			printf("bad input\n");
		}
	}
}


