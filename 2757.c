void fun()
{
  int entity_9 = 41;
  entity_9 = 41;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'q', entity_9-1);
  entity_0[entity_9-1]='';
  entity_3 = (char*)malloc(15*sizeof(char));
  entity_3[15-1]='';
  strcpy(entity_3, entity_0);
}