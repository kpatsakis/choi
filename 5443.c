void fun()
{
  int entity_9 = 51;
  entity_9 = 22;
  char* entity_5;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memcpy(entity_5, entity_0, entity_9*sizeof(char));
}