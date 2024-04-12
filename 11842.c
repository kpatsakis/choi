void fun()
{
  char* entity_0;
  char entity_6[37] = "";
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'Z', 37-1);
  entity_6[37-1]='0';
  strcpy(entity_0, entity_6);
}