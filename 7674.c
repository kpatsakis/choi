void fun()
{
  int entity_9 = 5;
  char entity_5[76] = "";
  entity_5 = NULL;
  memset(entity_5, 'P', 76-1);
  entity_5[76-1]='';
  entity_9 = 19;
  entity_5[entity_9] = 'z';
}