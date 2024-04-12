void fun()
{
  int entity_0 = 50;
  char entity_4[95] = "";
  entity_4 = NULL;
  memset(entity_4, 'b', 95-1);
  entity_4[95-1]='';
  entity_4[entity_0] = 'Q';
}