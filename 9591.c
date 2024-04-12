void fun()
{
  int entity_3 = 85;
  char entity_2[67] = "";
  entity_2 = NULL;
  char entity_6 = 'q';
  memset(entity_2, 'd', 67-1);
  entity_2[67-1]='';
  entity_2[68] = 'p';
}