void fun()
{
  char entity_0 = 'M';
  char entity_2[77] = "";
  entity_2 = NULL;
  char entity_9[70] = "";
  entity_9 = NULL;
  char entity_6 = 'C';
  memset(entity_2, 'z', 77-1);
  entity_2[77-1]='';
  memset(entity_9, 'o', 70-1);
  entity_9[70-1]='';
  entity_2[39] = 'a';
}