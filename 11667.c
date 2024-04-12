void fun()
{
  char* entity_9;
  char entity_0[52] = "";
  char entity_5[14] = "";
  char entity_2[20] = "";
  char* entity_3;
  memset(entity_5, 'u', 14-1);
  entity_5[14-1]='0';
  entity_9 = (char*)malloc(91*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'A', 20-1);
  entity_2[20-1]='0';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'n', 52-1);
  entity_0[52-1]='0';
  memcpy(entity_3, entity_5, 14*sizeof(char));
}