void fun()
{
  int entity_6 = 60;
  entity_6 = 28;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'y', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[59] = 'c';
}