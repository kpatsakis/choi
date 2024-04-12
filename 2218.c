void fun()
{
  char* entity_7;
  char entity_9[80] = "";
  entity_9 = NULL;
  char entity_4[57] = "";
  entity_4 = NULL;
  memset(entity_9, 'w', 80-1);
  entity_9[80-1]='';
  memset(entity_4, 'Q', 57-1);
  entity_4[57-1]='';
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  entity_4[33] = 'p';
}