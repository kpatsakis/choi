void fun()
{
  char entity_5[44] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_6;
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  memset(entity_5, 'k', 44-1);
  entity_5[44-1]='';
  strcpy(entity_2, entity_5);
}