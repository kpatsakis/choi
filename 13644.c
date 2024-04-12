void fun()
{
  int entity_7 = 40;
  char* entity_6;
  char entity_5[61] = "";
  char entity_9[76] = "";
  char entity_1 = 'J';
  char entity_4[entity_7] = "";
  memset(entity_5, 'C', 61-1);
  entity_5[61-1]='0';
  memset(entity_9, 'h', 76-1);
  entity_9[76-1]='0';
  memset(entity_4, 'F', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[0]='0';
  entity_7 = 85;
  strcpy(entity_6, entity_4);
}