void fun()
{
  int entity_1 = 24;
  entity_1 = 24;
  char* entity_9;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  memset(entity_0, 'o', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_9, entity_0);
}