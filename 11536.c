void fun()
{
  char* entity_2;
  char* entity_0;
  char entity_4[23] = "";
  memset(entity_4, 'L', 23-1);
  entity_4[23-1]='0';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[0]='0';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 23*sizeof(char));
}