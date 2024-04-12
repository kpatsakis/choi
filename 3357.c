void fun()
{
  char entity_5[35] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[38-1]='';
  memset(entity_5, 'P', 35-1);
  entity_5[35-1]='';
  memcpy(entity_6, entity_5, 35*sizeof(char));
}