void fun()
{
  int entity_4 = 7;
  char entity_8[25] = "";
  char* entity_9;
  char entity_6[18] = "";
  char* entity_1;
  char entity_2[61] = "";
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'L', 25-1);
  entity_8[25-1]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'b', 18-1);
  entity_6[18-1]='0';
  memset(entity_2, 'R', 61-1);
  entity_2[61-1]='0';
  entity_4 = 27;
  strcpy(entity_1, entity_2);
}