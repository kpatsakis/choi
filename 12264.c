void fun()
{
  int entity_7 = 25;
  int entity_0 = 1;
  char* entity_2;
  char* entity_4;
  char entity_9[27] = "";
  char entity_1[6] = "";
  memset(entity_9, 'N', 27-1);
  entity_9[27-1]='0';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'P', 6-1);
  entity_1[6-1]='0';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_4, entity_9);
}