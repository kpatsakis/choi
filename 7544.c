void fun()
{
  int entity_9 = 91;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  memset(entity_0, 'H', entity_9-1);
  entity_0[entity_9-1]='';
  memcpy(entity_5, entity_0, entity_9*sizeof(char));
}