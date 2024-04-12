void fun()
{
  char* entity_7;
  char entity_3[15] = "";
  char entity_0[9] = "";
  char entity_2[75] = "";
  memset(entity_0, 'a', 9-1);
  entity_0[9-1]='0';
  memset(entity_2, 'Q', 75-1);
  entity_2[75-1]='0';
  memset(entity_3, 'k', 15-1);
  entity_3[15-1]='0';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 9*sizeof(char));
}