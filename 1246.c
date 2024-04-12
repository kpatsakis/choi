void fun()
{
  int entity_5 = 92;
  char entity_7[85] = "";
  entity_7 = NULL;
  char entity_8[39] = "";
  entity_8 = NULL;
  memset(entity_7, 'I', 85-1);
  entity_7[85-1]='';
  memset(entity_8, 'W', 39-1);
  entity_8[39-1]='';
  entity_5 = 34;
  entity_8[entity_5] = 'r';
}