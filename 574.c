void fun()
{
  int entity_6 = 88;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memset(entity_9, 'A', entity_6-1);
  entity_9[entity_6-1]='';
  entity_6 = 75;
  strcpy(entity_0, entity_9);
}