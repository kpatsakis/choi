void fun()
{
  int entity_1 = 24;
  entity_1 = 29;
  char entity_9[71] = "";
  char entity_4[2] = "";
  char* entity_7;
  memset(entity_9, 'J', 71-1);
  entity_9[71-1]='0';
  memset(entity_4, 'W', 2-1);
  entity_4[2-1]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}