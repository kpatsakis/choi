void fun()
{
  char* entity_5;
  char entity_6[44] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[60-1]='';
  memset(entity_6, 'L', 44-1);
  entity_6[44-1]='';
  memcpy(entity_5, entity_6, 44*sizeof(char));
}