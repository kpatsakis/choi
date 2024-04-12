void fun()
{
  int entity_8 = 43;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'h', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[12] = 'M';
}