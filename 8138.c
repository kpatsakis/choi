void fun()
{
  int entity_8 = 50;
  int entity_6 = 18;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'U', entity_6-1);
  entity_0[entity_6-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  strcpy(entity_9, entity_0);
}