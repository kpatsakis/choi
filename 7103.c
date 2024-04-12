void fun()
{
  int entity_1 = 10;
  entity_1 = 90;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'Y', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[38] = 'B';
}