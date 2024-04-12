void fun()
{
  int entity_0 = 80;
  int entity_5 = 5;
  char entity_6[35] = "";
  entity_6 = NULL;
  memset(entity_6, 'i', 35-1);
  entity_6[35-1]='';
  entity_6[entity_0] = 'Z';
}