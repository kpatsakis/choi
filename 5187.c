void fun()
{
  int entity_0 = 37;
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_3, 'f', 40-1);
  entity_3[40-1]='';
  entity_3[entity_0] = 'I';
}