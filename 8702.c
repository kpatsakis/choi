void fun()
{
  int entity_4 = 72;
  int entity_6 = 21;
  char entity_1[99] = "";
  entity_1 = NULL;
  char entity_2[48] = "";
  entity_2 = NULL;
  memset(entity_1, 'm', 99-1);
  entity_1[99-1]='';
  memset(entity_2, 'Q', 48-1);
  entity_2[48-1]='';
  entity_2[3] = 'F';
}