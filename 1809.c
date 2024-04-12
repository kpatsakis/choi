void fun()
{
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'V', 20-1);
  entity_8[20-1]='';
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[47-1]='';
  strcpy(entity_9, entity_8);
}