void fun()
{
  int entity_9 = 55;
  char entity_1[13] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 13-1);
  entity_1[13-1]='';
  entity_1[entity_9] = 'x';
}