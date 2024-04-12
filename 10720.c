void fun()
{
  char* entity_1;
  char entity_2[51] = "";
  char* entity_3;
  char entity_7[76] = "";
  memset(entity_2, 't', 51-1);
  entity_2[51-1]='0';
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'w', 76-1);
  entity_7[76-1]='0';
  entity_7[100] = 'm';
}