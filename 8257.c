void fun()
{
  int entity_2 = 9;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', entity_2-1);
  entity_5[entity_2-1]='';
  entity_5[63] = 'M';
}