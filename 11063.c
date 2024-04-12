void fun()
{
  char* entity_0;
  char entity_4[72] = "";
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'I', 72-1);
  entity_4[72-1]='0';
  strcpy(entity_0, entity_4);
}