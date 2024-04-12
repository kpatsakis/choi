void fun()
{
  int entity_4 = 23;
  char entity_9[20] = "";
  entity_9 = NULL;
  memset(entity_9, 'O', 20-1);
  entity_9[20-1]='';
  entity_4 = 23;
  entity_9[entity_4] = 'v';
}