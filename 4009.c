void fun()
{
  int entity_9 = 95;
  char entity_3[17] = "";
  entity_3 = NULL;
  memset(entity_3, 'A', 17-1);
  entity_3[17-1]='';
  entity_3[entity_9] = 'm';
}