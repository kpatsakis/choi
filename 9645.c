void fun()
{
  char* entity_4;
  char entity_7 = 'T';
  char entity_6[85] = "";
  entity_6 = NULL;
  memset(entity_6, 'Q', 85-1);
  entity_6[85-1]='';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[1-1]='';
  strcpy(entity_4, entity_6);
}