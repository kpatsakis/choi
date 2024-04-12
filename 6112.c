void fun()
{
  char entity_1[91] = "";
  entity_1 = NULL;
  char entity_3 = 'm';
  char* entity_0;
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[79-1]='';
  memset(entity_1, 'F', 91-1);
  entity_1[91-1]='';
  strcpy(entity_0, entity_1);
}