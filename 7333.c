void fun()
{
  int entity_4 = 86;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[15] = 'w';
}