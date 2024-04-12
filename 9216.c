void fun()
{
  char entity_4[14] = "";
  entity_4 = NULL;
  char entity_8 = 'g';
  char entity_1[89] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_4, 'Y', 14-1);
  entity_4[14-1]='';
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[75-1]='';
  memset(entity_1, 'a', 89-1);
  entity_1[89-1]='';
  strcpy(entity_6, entity_4);
}