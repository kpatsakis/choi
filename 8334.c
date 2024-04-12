void fun()
{
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'K', 44-1);
  entity_7[44-1]='';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  strcpy(entity_1, entity_7);
}