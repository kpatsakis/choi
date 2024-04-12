void fun()
{
  int entity_1 = 12;
  int entity_6 = 11;
  entity_1 = 13;
  char entity_2[13] = "";
  entity_2 = NULL;
  memset(entity_2, 'y', 13-1);
  entity_2[13-1]='';
  entity_2[entity_1] = 'Q';
}