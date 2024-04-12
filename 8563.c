void fun()
{
  int entity_3 = 71;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'P', entity_3-1);
  entity_8[entity_3-1]='';
  entity_3 = 56;
  entity_8[21] = 'V';
}