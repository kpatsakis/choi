void fun()
{
  char entity_2[15] = "";
  char entity_6[89] = "";
  char* entity_9;
  char entity_3 = 'W';
  char entity_7 = 'd';
  memset(entity_2, 'd', 15-1);
  entity_2[15-1]='0';
  memset(entity_6, 'k', 89-1);
  entity_6[89-1]='0';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_6);
}