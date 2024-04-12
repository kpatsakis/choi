void fun()
{
  int entity_0 = 77;
  char entity_6 = 'o';
  char entity_8[86] = "";
  entity_8 = NULL;
  memset(entity_8, 'h', 86-1);
  entity_8[86-1]='';
  entity_0 = 100;
  entity_8[entity_0] = 'M';
}