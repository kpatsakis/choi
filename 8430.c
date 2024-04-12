void fun()
{
  int entity_5 = 65;
  entity_5 = 4;
  char entity_8[59] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 59-1);
  entity_8[59-1]='';
  entity_8[entity_5] = 'v';
}