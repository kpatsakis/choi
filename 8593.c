void fun()
{
  int entity_1 = 86;
  char entity_8[59] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 59-1);
  entity_8[59-1]='';
  entity_1 = 68;
  entity_8[entity_1] = 'u';
}