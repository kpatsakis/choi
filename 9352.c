void fun()
{
  char entity_8[51] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memset(entity_8, 'C', 51-1);
  entity_8[51-1]='';
  strcpy(entity_0, entity_8);
}