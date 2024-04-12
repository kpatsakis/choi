void fun()
{
  int entity_4 = 61;
  char* entity_8;
  char entity_9[20] = "";
  char entity_7[24] = "";
  char entity_2 = 'p';
  char* entity_1;
  memset(entity_7, 'k', 24-1);
  entity_7[24-1]='0';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'o', 20-1);
  entity_9[20-1]='0';
  strcpy(entity_8, entity_7);
}