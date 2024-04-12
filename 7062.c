void fun()
{
  int entity_8 = 19;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', entity_8-1);
  entity_9[entity_8-1]='';
  entity_9[14] = 'C';
}