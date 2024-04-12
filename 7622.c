void fun()
{
  int entity_3 = 93;
  char entity_8[88] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', 88-1);
  entity_8[88-1]='';
  entity_8[entity_3] = 'r';
}