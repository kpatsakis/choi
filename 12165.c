void fun()
{
  int entity_7 = 47;
  int entity_3 = 26;
  char* entity_2;
  char* entity_1;
  char entity_4[13] = "";
  char entity_5[0] = "";
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'W', 13-1);
  entity_4[13-1]='0';
  memset(entity_5, 'Y', 0-1);
  entity_5[0-1]='0';
  strcpy(entity_2, entity_4);
}