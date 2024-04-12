void fun()
{
  int entity_5 = 19;
  entity_5 = 75;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', entity_5-1);
  entity_6[entity_5-1]='';
  entity_6[49] = 'M';
}