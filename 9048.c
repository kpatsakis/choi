void fun()
{
  int entity_0 = 50;
  char entity_5[77] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', 77-1);
  entity_5[77-1]='';
  entity_5[entity_0] = 'O';
}