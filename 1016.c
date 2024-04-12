void fun()
{
  int entity_5 = 30;
  entity_5 = 66;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[53] = 'c';
}