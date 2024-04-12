void fun()
{
  int entity_1 = 15;
  char entity_4[44] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', 44-1);
  entity_4[44-1]='';
  entity_1 = 44;
  entity_4[entity_1] = 'b';
}