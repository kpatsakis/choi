void fun()
{
  int entity_5 = 93;
  int entity_7 = 85;
  entity_5 = 84;
  char entity_4[9] = "";
  entity_4 = NULL;
  char entity_8[67] = "";
  entity_8 = NULL;
  memset(entity_4, 'c', 9-1);
  entity_4[9-1]='';
  memset(entity_8, 'H', 67-1);
  entity_8[67-1]='';
  entity_8[entity_5] = 'P';
}