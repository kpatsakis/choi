void fun()
{
  char entity_7[55] = "";
  entity_7 = NULL;
  char entity_3[27] = "";
  entity_3 = NULL;
  char entity_2[47] = "";
  entity_2 = NULL;
  memset(entity_2, 'I', 47-1);
  entity_2[47-1]='';
  memset(entity_7, 'Y', 55-1);
  entity_7[55-1]='';
  memset(entity_3, 'J', 27-1);
  entity_3[27-1]='';
  entity_2[43] = 'x';
}