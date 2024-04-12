void fun()
{
  int entity_8 = 54;
  char* entity_0;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', entity_8-1);
  entity_9[entity_8-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  entity_8 = 83;
  strcpy(entity_0, entity_9);
}