void fun()
{
  int entity_3 = 67;
  char entity_9[25] = "";
  entity_9 = NULL;
  memset(entity_9, 'e', 25-1);
  entity_9[25-1]='';
  entity_9[entity_3] = 'Q';
}