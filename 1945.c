void fun()
{
  int entity_5 = 13;
  entity_5 = 93;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'P', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[18] = 'a';
}