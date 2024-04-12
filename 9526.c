void fun()
{
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', 40-1);
  entity_2[40-1]='';
  entity_2[74] = 'u';
}