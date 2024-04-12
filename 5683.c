void fun()
{
  int entity_3 = 49;
  int entity_5 = 61;
  char entity_0[82] = "";
  entity_0 = NULL;
  char entity_9[75] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_0, 'x', 82-1);
  entity_0[82-1]='';
  memset(entity_9, 'J', 75-1);
  entity_9[75-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  entity_3 = 52;
  strcpy(entity_1, entity_9);
}