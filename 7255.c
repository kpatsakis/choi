void fun()
{
  int entity_9 = 27;
  char entity_5[48] = "";
  entity_5 = NULL;
  memset(entity_5, 'T', 48-1);
  entity_5[48-1]='';
  entity_9 = 72;
  entity_5[entity_9] = 'w';
}