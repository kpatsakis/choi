void fun()
{
  char entity_3 = 'H';
  char entity_6[7] = "";
  entity_6 = NULL;
  char entity_1[84] = "";
  entity_1 = NULL;
  memset(entity_1, 'o', 84-1);
  entity_1[84-1]='';
  memset(entity_6, 'j', 7-1);
  entity_6[7-1]='';
  entity_6[25] = 'm';
}