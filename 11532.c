void fun()
{
  char entity_4[6] = "";
  char entity_9[56] = "";
  char entity_3[19] = "";
  char* entity_8;
  char* entity_0;
  memset(entity_4, 'S', 6-1);
  entity_4[6-1]='0';
  memset(entity_9, 'c', 56-1);
  entity_9[56-1]='0';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'W', 19-1);
  entity_3[19-1]='0';
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 56*sizeof(char));
}