void fun()
{
  int entity_3 = 84;
  char entity_1 = 'Q';
  char entity_7[95] = "";
  entity_7 = NULL;
  memset(entity_7, 'T', 95-1);
  entity_7[95-1]='';
  entity_7[entity_3] = 'P';
}