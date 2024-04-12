void fun()
{
  int entity_8 = 81;
  char entity_4[63] = "";
  entity_4 = NULL;
  memset(entity_4, 'L', 63-1);
  entity_4[63-1]='';
  entity_8 = 63;
  entity_4[entity_8] = 'V';
}