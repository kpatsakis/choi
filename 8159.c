void fun()
{
  int entity_3 = 43;
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', 59-1);
  entity_4[59-1]='';
  entity_4[entity_3] = 'f';
}