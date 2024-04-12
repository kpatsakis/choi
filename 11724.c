void fun()
{
  char entity_2[24] = "";
  char* entity_9;
  char entity_4[65] = "";
  char entity_8[67] = "";
  memset(entity_8, 'M', 67-1);
  entity_8[67-1]='0';
  memset(entity_4, 'k', 65-1);
  entity_4[65-1]='0';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'F', 24-1);
  entity_2[24-1]='0';
  memcpy(entity_9, entity_4, 65*sizeof(char));
}