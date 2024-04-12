void fun()
{
  int entity_6 = 36;
  char entity_4[82] = "";
  entity_4 = NULL;
  memset(entity_4, 'x', 82-1);
  entity_4[82-1]='';
  entity_6 = 3;
  entity_4[entity_6] = 'A';
}