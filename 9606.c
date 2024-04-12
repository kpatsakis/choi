void fun()
{
  int entity_3 = 44;
  char entity_4[1] = "";
  entity_4 = NULL;
  memset(entity_4, 'L', 1-1);
  entity_4[1-1]='';
  entity_4[19] = 'F';
}