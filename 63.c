void fun()
{
  char* entity_7;
  char entity_5[94] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  memset(entity_5, 'Y', 94-1);
  entity_5[94-1]='';
  strcpy(entity_7, entity_5);
}