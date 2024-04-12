void fun()
{
  int entity_3 = 17;
  char entity_0 = 'f';
  char entity_8[98] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 98-1);
  entity_8[98-1]='';
  entity_8[93] = 's';
}