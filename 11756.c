void fun()
{
  char entity_7[46] = "";
  char entity_3 = 'm';
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'V', 46-1);
  entity_7[46-1]='0';
  memcpy(entity_6, entity_7, 46*sizeof(char));
}