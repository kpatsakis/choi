void fun()
{
  int entity_7 = 40;
  entity_7 = 40;
  char* entity_0;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_2 = 't';
  entity_0 = (char*)malloc(5*sizeof(char));
  entity_0[5-1]='';
  memset(entity_9, 'z', entity_7-1);
  entity_9[entity_7-1]='';
  strcpy(entity_0, entity_9);
}