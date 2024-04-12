void fun()
{
  int entity_8 = 47;
  int entity_6 = 13;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_5, 'H', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 37;
  entity_5[4] = 't';
}