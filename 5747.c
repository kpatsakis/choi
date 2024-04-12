void fun()
{
  int entity_3 = 22;
  char entity_4[24] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', 24-1);
  entity_4[24-1]='';
  entity_4[entity_3] = 'p';
}