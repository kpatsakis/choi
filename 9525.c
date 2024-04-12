void fun()
{
  int entity_7 = 74;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'W', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 40;
  entity_5[100] = 'l';
}