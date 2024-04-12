void fun()
{
  int entity_5 = 92;
  entity_5 = 100;
  char entity_3[34] = "";
  entity_3 = NULL;
  memset(entity_3, 'h', 34-1);
  entity_3[34-1]='';
  entity_3[entity_5] = 'y';
}