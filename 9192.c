void fun()
{
  int entity_6 = 63;
  entity_6 = 40;
  char entity_1[48] = "";
  entity_1 = NULL;
  memset(entity_1, 'a', 48-1);
  entity_1[48-1]='';
  entity_1[entity_6] = 'n';
}