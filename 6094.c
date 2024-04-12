void fun()
{
  char entity_3 = 'P';
  char entity_4[69] = "";
  entity_4 = NULL;
  char entity_1[76] = "";
  entity_1 = NULL;
  memset(entity_4, 'b', 69-1);
  entity_4[69-1]='';
  memset(entity_1, 'D', 76-1);
  entity_1[76-1]='';
  entity_4[50] = 'T';
}