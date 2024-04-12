void fun()
{
  char entity_7[22] = "";
  char* entity_1;
  char entity_2[100] = "";
  char* entity_9;
  memset(entity_7, 'l', 22-1);
  entity_7[22-1]='0';
  memset(entity_2, 'P', 100-1);
  entity_2[100-1]='0';
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_2);
}