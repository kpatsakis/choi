void fun()
{
  char* entity_5;
  char entity_6[6] = "";
  entity_6 = NULL;
  char entity_4 = 'R';
  memset(entity_6, 'P', 6-1);
  entity_6[6-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  strcpy(entity_5, entity_6);
}