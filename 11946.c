void fun()
{
  char entity_7[93] = "";
  char* entity_0;
  memset(entity_7, 'V', 93-1);
  entity_7[93-1]='0';
  entity_0 = (char*)malloc(17*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_7);
}