void fun()
{
  char* entity_6;
  char entity_0[94] = "";
  memset(entity_0, 'e', 94-1);
  entity_0[94-1]='0';
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_0);
}