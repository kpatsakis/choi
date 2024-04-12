void fun()
{
  int entity_5 = 29;
  entity_5 = 75;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'A', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[65] = 'i';
}