void fun()
{
  int entity_6 = 86;
  entity_6 = 29;
  char entity_3[81] = "";
  entity_3 = NULL;
  memset(entity_3, 't', 81-1);
  entity_3[81-1]='';
  entity_3[entity_6] = 'd';
}