void fun()
{
  int entity_1 = 21;
  int entity_5 = 70;
  entity_1 = 43;
  char entity_9[41] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'C', 41-1);
  entity_9[41-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  strcpy(entity_0, entity_9);
}