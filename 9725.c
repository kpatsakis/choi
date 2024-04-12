void fun()
{
  int entity_1 = 45;
  char entity_4[21] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 21-1);
  entity_4[21-1]='';
  entity_4[44] = 'Q';
}