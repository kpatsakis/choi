void fun()
{
  int entity_1 = 25;
  char entity_6[36] = "";
  entity_6 = NULL;
  char entity_7 = 'm';
  char entity_2[38] = "";
  entity_2 = NULL;
  memset(entity_2, 'K', 38-1);
  entity_2[38-1]='';
  memset(entity_6, 'L', 36-1);
  entity_6[36-1]='';
  entity_6[68] = 'K';
}