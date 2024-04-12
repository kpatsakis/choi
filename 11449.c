void fun()
{
  char entity_5[19] = "";
  char* entity_0;
  memset(entity_5, 'v', 19-1);
  entity_5[19-1]='0';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_5);
}