void fun()
{
  int entity_2 = 87;
  entity_2 = 13;
  char entity_6[72] = "";
  entity_6 = NULL;
  memset(entity_6, 't', 72-1);
  entity_6[72-1]='';
  entity_6[entity_2] = 'y';
}