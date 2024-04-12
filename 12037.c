void fun()
{
  int entity_6 = 3;
  int entity_4 = 26;
  char* entity_2;
  char entity_9 = 'W';
  char* entity_1;
  char entity_5[88] = "";
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'f', 88-1);
  entity_5[88-1]='0';
  strcpy(entity_1, entity_5);
}