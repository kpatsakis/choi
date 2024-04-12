void fun()
{
  char entity_7[76] = "";
  char* entity_4;
  char* entity_9;
  char entity_2[25] = "";
  entity_9 = (char*)malloc(58*sizeof(char));
  entity_9[0]='0';
  entity_4 = (char*)malloc(5*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'r', 76-1);
  entity_7[76-1]='0';
  memset(entity_2, 'I', 25-1);
  entity_2[25-1]='0';
  strcpy(entity_9, entity_2);
}