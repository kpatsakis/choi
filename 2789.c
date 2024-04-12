void fun()
{
  char entity_0[95] = "";
  entity_0 = NULL;
  char* entity_4;
  char* entity_6;
  entity_4 = (char*)malloc(5*sizeof(char));
  entity_4[5-1]='';
  memset(entity_0, 'n', 95-1);
  entity_0[95-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  strcpy(entity_6, entity_0);
}