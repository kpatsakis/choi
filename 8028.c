void fun()
{
  int entity_6 = 99;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[89] = 'Q';
}