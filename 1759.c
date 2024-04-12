void fun()
{
  int entity_4 = 28;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'h', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[38] = 'I';
}