void fun()
{
  int entity_4 = 6;
  char entity_5[95] = "";
  entity_5 = NULL;
  memset(entity_5, 'S', 95-1);
  entity_5[95-1]='';
  entity_4 = 47;
  entity_5[entity_4] = 'A';
}