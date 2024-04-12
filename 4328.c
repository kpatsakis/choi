void fun()
{
  char entity_4[35] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'P', 35-1);
  entity_4[35-1]='';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  strcpy(entity_6, entity_4);
}