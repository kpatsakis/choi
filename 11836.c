void fun()
{
  char* entity_0;
  char entity_6[63] = "";
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'q', 63-1);
  entity_6[63-1]='0';
  strcpy(entity_0, entity_6);
}