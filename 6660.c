void fun()
{
  int entity_6 = 32;
  char entity_3[95] = "";
  entity_3 = NULL;
  char entity_2 = 'Q';
  memset(entity_3, 'R', 95-1);
  entity_3[95-1]='';
  entity_6 = 23;
  entity_3[entity_6] = 'W';
}