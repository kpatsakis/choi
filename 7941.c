void fun()
{
  int entity_1 = 70;
  char entity_9[10] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', 10-1);
  entity_9[10-1]='';
  entity_9[entity_1] = 'H';
}