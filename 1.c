void fun()
{
  char entity_1[1] = "";
  entity_1 = NULL;
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_5 = 'r';
  char entity_2 = 'w';
  memset(entity_1, 'p', 1-1);
  entity_1[1-1]='';
  memset(entity_3, 'G', 61-1);
  entity_3[61-1]='';
  entity_1[46] = 'a';
}