void fun()
{
  int entity_0 = 42;
  char entity_5[54] = "";
  entity_5 = NULL;
  char entity_8[23] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', 23-1);
  entity_8[23-1]='';
  memset(entity_5, 'V', 54-1);
  entity_5[54-1]='';
  entity_8[entity_0] = 'b';
}