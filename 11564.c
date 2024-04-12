void fun()
{
  char entity_1[20] = "";
  char* entity_6;
  char* entity_0;
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'H', 20-1);
  entity_1[20-1]='0';
  strcpy(entity_0, entity_1);
}