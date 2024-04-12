void fun()
{
  char entity_9[92] = "";
  char entity_7[13] = "";
  char* entity_6;
  char* entity_3;
  char entity_0[17] = "";
  memset(entity_9, 'Y', 92-1);
  entity_9[92-1]='0';
  memset(entity_7, 't', 13-1);
  entity_7[13-1]='0';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'A', 17-1);
  entity_0[17-1]='0';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_3, entity_0, 17*sizeof(char));
}