void fun()
{
  char* entity_5;
  char entity_6[26] = "";
  char entity_2[5] = "";
  entity_5 = (char*)malloc(95*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'q', 5-1);
  entity_2[5-1]='0';
  memset(entity_6, 'K', 26-1);
  entity_6[26-1]='0';
  memcpy(entity_5, entity_2, 5*sizeof(char));
}