void fun()
{
  int entity_0 = 66;
  entity_0 = 66;
  char entity_6[75] = "";
  entity_6 = NULL;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[3-1]='';
  memset(entity_1, 'P', entity_0-1);
  entity_1[entity_0-1]='';
  memset(entity_6, 'x', 75-1);
  entity_6[75-1]='';
  strcpy(entity_9, entity_1);
}