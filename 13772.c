void fun()
{
  int entity_3 = 27;
  int entity_2 = 0;
  int entity_5 = 85;
  entity_3 = 27;
  char entity_7[entity_3] = "";
  char entity_9[54] = "";
  char* entity_6;
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'J', entity_3-1);
  entity_7[entity_3-1]='0';
  memset(entity_9, 'v', 54-1);
  entity_9[54-1]='0';
  strcpy(entity_6, entity_7);
}