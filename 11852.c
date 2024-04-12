void fun()
{
  char entity_1[36] = "";
  char* entity_0;
  memset(entity_1, 'z', 36-1);
  entity_1[36-1]='0';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}