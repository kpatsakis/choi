void fun()
{
  char entity_8[100] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'M', 100-1);
  entity_8[100-1]='';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[36-1]='';
  strcpy(entity_6, entity_8);
}