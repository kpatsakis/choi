void fun()
{
  int entity_6 = 54;
  char entity_7[63] = "";
  entity_7 = NULL;
  memset(entity_7, 'G', 63-1);
  entity_7[63-1]='';
  entity_7[entity_6] = 'V';
}