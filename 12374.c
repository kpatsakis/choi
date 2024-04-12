void fun()
{
  int entity_0 = 28;
  int entity_3 = 77;
  char entity_8[6] = "";
  char* entity_2;
  char* entity_9;
  char entity_1[65] = "";
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'g', 65-1);
  entity_1[65-1]='0';
  memset(entity_8, 'R', 6-1);
  entity_8[6-1]='0';
  strcpy(entity_9, entity_1);
}