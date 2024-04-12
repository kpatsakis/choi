void fun()
{
  int entity_9 = 46;
  char entity_1[32] = "";
  entity_1 = NULL;
  memset(entity_1, 'U', 32-1);
  entity_1[32-1]='';
  entity_1[entity_9] = 's';
}