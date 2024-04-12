void fun()
{
  int entity_2 = 56;
  char entity_4[87] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', 87-1);
  entity_4[87-1]='';
  entity_4[35] = 'C';
}