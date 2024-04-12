void fun()
{
  char* entity_0;
  char* entity_5;
  char entity_9[73] = "";
  char entity_3[59] = "";
  char entity_7[89] = "";
  memset(entity_9, 'z', 73-1);
  entity_9[73-1]='0';
  memset(entity_7, 'K', 89-1);
  entity_7[89-1]='0';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[0]='0';
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'u', 59-1);
  entity_3[59-1]='0';
  memcpy(entity_5, entity_9, 73*sizeof(char));
}