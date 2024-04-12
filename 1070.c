void fun()
{
  int entity_7 = 19;
  int entity_9 = 30;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'f', entity_9-1);
  entity_4[entity_9-1]='';
  entity_4[2] = 'U';
}