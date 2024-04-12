void fun()
{
  int entity_5 = 33;
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', 40-1);
  entity_2[40-1]='';
  entity_2[92] = 'D';
}