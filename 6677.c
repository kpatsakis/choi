void fun()
{
  char* entity_0;
  char entity_7[40] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', 40-1);
  entity_7[40-1]='';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[48-1]='';
  strcpy(entity_0, entity_7);
}