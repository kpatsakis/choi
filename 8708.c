void fun()
{
  int entity_2 = 10;
  entity_2 = 22;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'z', entity_2-1);
  entity_4[entity_2-1]='';
  entity_4[79] = 'Q';
}