void fun()
{
  int entity_7 = 21;
  entity_7 = 16;
  char entity_4[35] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', 35-1);
  entity_4[35-1]='';
  entity_4[entity_7] = 'f';
}