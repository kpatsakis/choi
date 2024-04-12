void fun()
{
  int entity_9 = 78;
  char* entity_5;
  char entity_0[48] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_0, 'S', 48-1);
  entity_0[48-1]='';
  strcpy(entity_5, entity_0);
}