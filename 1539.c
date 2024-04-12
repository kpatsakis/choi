void fun()
{
  char* entity_0;
  char entity_8[35] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memset(entity_8, 'J', 35-1);
  entity_8[35-1]='';
  strcpy(entity_0, entity_8);
}