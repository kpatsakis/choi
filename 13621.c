void fun()
{
  int entity_1 = 88;
  int entity_8 = 75;
  char* entity_7;
  char entity_4[entity_1] = "";
  char entity_9 = 'F';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'T', entity_1-1);
  entity_4[entity_1-1]='0';
  entity_1 = 19;
  strcpy(entity_7, entity_4);
}