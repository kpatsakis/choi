void fun()
{
  char entity_1[29] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'M', 29-1);
  entity_1[29-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  strcpy(entity_6, entity_1);
}