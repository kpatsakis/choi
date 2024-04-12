void fun()
{
  int entity_9 = 76;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'Q', entity_9-1);
  entity_5[entity_9-1]='';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  entity_9 = 83;
  memcpy(entity_0, entity_5, entity_9*sizeof(char));
}