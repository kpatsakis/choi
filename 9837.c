void fun()
{
  int entity_2 = 8;
  char entity_0[15] = "";
  entity_0 = NULL;
  memset(entity_0, 'o', 15-1);
  entity_0[15-1]='';
  entity_0[entity_2] = 'k';
}