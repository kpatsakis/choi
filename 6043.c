void fun()
{
  char* entity_0;
  char* entity_3;
  char entity_7[60] = "";
  entity_7 = NULL;
  memset(entity_7, 'b', 60-1);
  entity_7[60-1]='';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  strcpy(entity_3, entity_7);
}