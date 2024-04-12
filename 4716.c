void fun()
{
  char entity_6 = 'A';
  char entity_1[69] = "";
  entity_1 = NULL;
  char entity_3 = 'm';
  char entity_5[31] = "";
  entity_5 = NULL;
  memset(entity_5, 'N', 31-1);
  entity_5[31-1]='';
  memset(entity_1, 'f', 69-1);
  entity_1[69-1]='';
  entity_5[63] = 'h';
}