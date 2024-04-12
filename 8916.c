void fun()
{
  int entity_9 = 7;
  char entity_1[36] = "";
  entity_1 = NULL;
  memset(entity_1, 'm', 36-1);
  entity_1[36-1]='';
  entity_1[entity_9] = 'a';
}