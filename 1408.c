void fun()
{
  int entity_5 = 47;
  int entity_8 = 66;
  entity_5 = 67;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_3 = 'I';
  memset(entity_9, 'P', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[99] = 'd';
}