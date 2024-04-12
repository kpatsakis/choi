void fun()
{
  int entity_1 = 14;
  char entity_9[73] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 73-1);
  entity_9[73-1]='';
  entity_9[entity_1] = 'l';
}