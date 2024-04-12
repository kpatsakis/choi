void fun()
{
  char entity_0[29] = "";
  char* entity_4;
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'u', 29-1);
  entity_0[29-1]='0';
  strcpy(entity_4, entity_0);
}