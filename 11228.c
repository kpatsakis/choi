void fun()
{
  char* entity_9;
  char entity_0[81] = "";
  char entity_8[3] = "";
  char entity_1[51] = "";
  char* entity_7;
  memset(entity_0, 'L', 81-1);
  entity_0[81-1]='0';
  memset(entity_1, 'o', 51-1);
  entity_1[51-1]='0';
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'D', 3-1);
  entity_8[3-1]='0';
  memcpy(entity_9, entity_0, 81*sizeof(char));
}