void fun()
{
  char* entity_8;
  char entity_0[89] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_0, 'A', 89-1);
  entity_0[89-1]='';
  strcpy(entity_8, entity_0);
}