void fun()
{
  char* entity_4;
  char entity_7[88] = "";
  entity_7 = NULL;
  char entity_0[37] = "";
  entity_0 = NULL;
  memset(entity_0, 'h', 37-1);
  entity_0[37-1]='';
  memset(entity_7, 'x', 88-1);
  entity_7[88-1]='';
  entity_4 = (char*)malloc(79*sizeof(char));
  entity_4[79-1]='';
  strcpy(entity_4, entity_7);
}