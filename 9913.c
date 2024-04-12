void fun()
{
  int entity_2 = 5;
  char entity_8[3] = "";
  entity_8 = NULL;
  memset(entity_8, 't', 3-1);
  entity_8[3-1]='';
  entity_2 = 96;
  entity_8[entity_2] = 'n';
}