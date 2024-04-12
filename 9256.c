void fun()
{
  int entity_3 = 18;
  char entity_1[5] = "";
  entity_1 = NULL;
  char entity_2[27] = "";
  entity_2 = NULL;
  memset(entity_1, 'f', 5-1);
  entity_1[5-1]='';
  memset(entity_2, 'b', 27-1);
  entity_2[27-1]='';
  entity_2[65] = 'N';
}