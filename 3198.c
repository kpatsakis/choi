void fun()
{
  char entity_2[33] = "";
  entity_2 = NULL;
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'R', 16-1);
  entity_9[16-1]='';
  memset(entity_2, 'K', 33-1);
  entity_2[33-1]='';
  entity_2[35] = 'O';
}