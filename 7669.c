void fun()
{
  int entity_8 = 93;
  entity_8 = 93;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_7[41] = "";
  entity_7 = NULL;
  char entity_0 = 'l';
  char* entity_1;
  memset(entity_9, 'p', entity_8-1);
  entity_9[entity_8-1]='';
  memset(entity_7, 'J', 41-1);
  entity_7[41-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  strcpy(entity_1, entity_9);
}