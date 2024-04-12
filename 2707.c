void fun()
{
  int entity_2 = 50;
  char entity_8[31] = "";
  entity_8 = NULL;
  char entity_5 = 'T';
  memset(entity_8, 'e', 31-1);
  entity_8[31-1]='';
  entity_8[75] = 'E';
}