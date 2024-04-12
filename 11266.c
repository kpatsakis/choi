void fun()
{
  char* entity_1;
  char entity_0[44] = "";
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'G', 44-1);
  entity_0[44-1]='0';
  memcpy(entity_1, entity_0, 44*sizeof(char));
}