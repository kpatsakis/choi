void fun()
{
  char entity_6 = 'V';
  char* entity_7;
  char* entity_1;
  char entity_9[65] = "";
  memset(entity_9, 's', 65-1);
  entity_9[65-1]='0';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}