void fun()
{
  int entity_4 = 47;
  char entity_5 = 'A';
  char entity_9[7] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 7-1);
  entity_9[7-1]='';
  entity_9[63] = 'D';
}