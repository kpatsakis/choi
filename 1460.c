void fun()
{
  char entity_7[85] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  memset(entity_7, 'z', 85-1);
  entity_7[85-1]='';
  strcpy(entity_0, entity_7);
}