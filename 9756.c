void fun()
{
  int entity_5 = 5;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_8[41] = "";
  entity_8 = NULL;
  memset(entity_7, 'o', entity_5-1);
  entity_7[entity_5-1]='';
  memset(entity_8, 'h', 41-1);
  entity_8[41-1]='';
  entity_7[85] = 'w';
}