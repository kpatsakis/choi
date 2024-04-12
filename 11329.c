void fun()
{
  char* entity_0;
  char entity_8[75] = "";
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'Y', 75-1);
  entity_8[75-1]='0';
  strcpy(entity_0, entity_8);
}