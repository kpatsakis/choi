void fun()
{
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  memset(entity_7, 'I', 11-1);
  entity_7[11-1]='';
  strcpy(entity_6, entity_7);
}