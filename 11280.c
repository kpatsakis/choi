void fun()
{
  char entity_4[4] = "";
  char entity_8[75] = "";
  char entity_1 = 'E';
  char* entity_7;
  char entity_2 = 'p';
  memset(entity_8, 'h', 75-1);
  entity_8[75-1]='0';
  entity_7 = (char*)malloc(93*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 't', 4-1);
  entity_4[4-1]='0';
  memcpy(entity_7, entity_4, 4*sizeof(char));
}