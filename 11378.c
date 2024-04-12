void fun()
{
  char entity_4[79] = "";
  char* entity_0;
  char* entity_8;
  char entity_9[23] = "";
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'c', 23-1);
  entity_9[23-1]='0';
  memset(entity_4, 'N', 79-1);
  entity_4[79-1]='0';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_9, 23*sizeof(char));
}