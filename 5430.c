void fun()
{
  int entity_5 = 14;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'w', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[100] = 'P';
}