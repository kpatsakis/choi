void fun()
{
  int entity_3 = 69;
  entity_3 = 95;
  char entity_6[12] = "";
  entity_6 = NULL;
  memset(entity_6, 'K', 12-1);
  entity_6[12-1]='';
  entity_6[entity_3] = 'o';
}