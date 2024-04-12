void fun()
{
  int entity_5 = 79;
  char entity_6[16] = "";
  entity_6 = NULL;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_6, 'm', 16-1);
  entity_6[16-1]='';
  memset(entity_8, 'Q', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 91;
  entity_8[99] = 'Z';
}