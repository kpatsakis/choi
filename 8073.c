void fun()
{
  int entity_7 = 55;
  int entity_4 = 11;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'O', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[3] = 'Q';
}