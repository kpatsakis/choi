void fun()
{
  int entity_5 = 88;
  char entity_8[9] = "";
  entity_8 = NULL;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_8, 'R', 9-1);
  entity_8[9-1]='';
  memset(entity_6, 'i', entity_5-1);
  entity_6[entity_5-1]='';
  entity_6[63] = 'q';
}