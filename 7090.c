void fun()
{
  int entity_9 = 88;
  char* entity_0;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', entity_9-1);
  entity_7[entity_9-1]='';
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[36-1]='';
  entity_9 = 55;
  strcpy(entity_0, entity_7);
}