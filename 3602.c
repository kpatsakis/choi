void fun()
{
  int entity_5 = 5;
  entity_5 = 69;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'h', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[42] = 'e';
}