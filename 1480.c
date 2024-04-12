void fun()
{
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[3-1]='';
  memset(entity_8, 'u', 70-1);
  entity_8[70-1]='';
  strcpy(entity_0, entity_8);
}