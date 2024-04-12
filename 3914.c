void fun()
{
  int entity_8 = 25;
  entity_8 = 97;
  char entity_4[98] = "";
  entity_4 = NULL;
  char entity_6 = 'E';
  memset(entity_4, 'D', 98-1);
  entity_4[98-1]='';
  entity_4[entity_8] = 'b';
}