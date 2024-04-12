void fun()
{
  int entity_4 = 51;
  int entity_6 = 99;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'T', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[95] = 'c';
}