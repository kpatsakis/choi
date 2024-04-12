void fun()
{
  int entity_1 = 14;
  char* entity_8;
  char entity_2[90] = "";
  char* entity_9;
  char entity_5[58] = "";
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'O', 58-1);
  entity_5[58-1]='0';
  memset(entity_2, 'A', 90-1);
  entity_2[90-1]='0';
  strcpy(entity_8, entity_2);
}