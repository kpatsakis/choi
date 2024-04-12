void fun()
{
  int entity_4 = 42;
  char entity_8[65] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 65-1);
  entity_8[65-1]='';
  entity_4 = 99;
  entity_8[entity_4] = 'y';
}