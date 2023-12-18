//catenation without stringcat
# include<string.h>
# include<stdio.h>
int main(){
char s1[30],s2[20];

printf("Enter the first string \n");

gets(s1);

printf("Enter the second string \n");

gets(s2);

int l = strlen(s1);
int i;

for(i=0;i<sizeof(s2);i++){
    s1[l+i]=s2[i];
}

puts(s1);
}