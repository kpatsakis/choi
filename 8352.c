void fun()
{
  char entity_3[60] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(54*sizeof(char));
  entity_8[54-1]='';
  memset(entity_3, 'u', 60-1);
  entity_3[60-1]='';
  strcpy(entity_8, entity_3);
}