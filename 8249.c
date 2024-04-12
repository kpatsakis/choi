void fun()
{
  int entity_4 = 51;
  char entity_9[28] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', 28-1);
  entity_9[28-1]='';
  entity_9[entity_4] = 'D';
}