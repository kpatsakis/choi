void fun()
{
  char entity_7 = 'B';
  char* entity_2;
  char entity_6[81] = "";
  char entity_4[19] = "";
  memset(entity_4, 'E', 19-1);
  entity_4[19-1]='0';
  memset(entity_6, 'S', 81-1);
  entity_6[81-1]='0';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_4, 19*sizeof(char));
}