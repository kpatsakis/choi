void fun()
{
  int entity_3 = 88;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_3-1);
  entity_2[entity_3-1]='';
  entity_2[39] = 'Q';
}