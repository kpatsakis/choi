void fun()
{
  int entity_9 = 85;
  entity_9 = 80;
  char entity_5[60] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', 60-1);
  entity_5[60-1]='';
  entity_5[entity_9] = 's';
}