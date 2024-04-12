void fun()
{
  int entity_2 = 62;
  int entity_5 = 53;
  int entity_1 = 40;
  char entity_6[88] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 88-1);
  entity_6[88-1]='';
  entity_6[entity_5] = 'l';
}