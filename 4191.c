void fun()
{
  int entity_9 = 96;
  entity_9 = 96;
  char entity_2 = 'f';
  char* entity_0;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'H', entity_9-1);
  entity_6[entity_9-1]='';
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  strcpy(entity_0, entity_6);
}