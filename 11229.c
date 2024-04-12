void fun()
{
  char entity_4[43] = "";
  char* entity_0;
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'C', 43-1);
  entity_4[43-1]='0';
  strcpy(entity_0, entity_4);
}