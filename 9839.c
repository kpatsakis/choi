void fun()
{
  int entity_6 = 56;
  char entity_7[33] = "";
  entity_7 = NULL;
  memset(entity_7, 'i', 33-1);
  entity_7[33-1]='';
  entity_7[entity_6] = 'Z';
}