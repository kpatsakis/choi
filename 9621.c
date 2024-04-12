void fun()
{
  int entity_7 = 54;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memset(entity_9, 'x', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 84;
  strcpy(entity_0, entity_9);
}