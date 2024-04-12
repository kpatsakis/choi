void fun()
{
  char entity_9[38] = "";
  char entity_7[76] = "";
  char* entity_1;
  char entity_6 = 'm';
  char entity_4[27] = "";
  memset(entity_9, 'k', 38-1);
  entity_9[38-1]='0';
  memset(entity_7, 'N', 76-1);
  entity_7[76-1]='0';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'A', 27-1);
  entity_4[27-1]='0';
  memcpy(entity_1, entity_9, 38*sizeof(char));
}