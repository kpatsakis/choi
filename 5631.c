void fun()
{
  int entity_8 = 76;
  entity_8 = 91;
  char entity_6[20] = "";
  entity_6 = NULL;
  memset(entity_6, 'v', 20-1);
  entity_6[20-1]='';
  entity_6[entity_8] = 'n';
}