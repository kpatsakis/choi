void fun()
{
  char entity_2[60] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_0;
  memset(entity_2, 'm', 60-1);
  entity_2[60-1]='';
  entity_5 = (char*)malloc(38*sizeof(char));
  entity_5[38-1]='';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  strcpy(entity_0, entity_2);
}