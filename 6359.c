void fun()
{
  int entity_9 = 66;
  entity_9 = 20;
  char entity_7[7] = "";
  entity_7 = NULL;
  memset(entity_7, 'T', 7-1);
  entity_7[7-1]='';
  entity_7[entity_9] = 'v';
}