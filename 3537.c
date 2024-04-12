void fun()
{
  int entity_5 = 2;
  char* entity_9;
  char entity_0[69] = "";
  entity_0 = NULL;
  memset(entity_0, 'p', 69-1);
  entity_0[69-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  entity_5 = 77;
  strcpy(entity_9, entity_0);
}