void fun()
{
  int entity_9 = 25;
  char entity_6[5] = "";
  entity_6 = NULL;
  memset(entity_6, 'y', 5-1);
  entity_6[5-1]='';
  entity_6[entity_9] = 'N';
}