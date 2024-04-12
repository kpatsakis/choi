void fun()
{
  int entity_5 = 7;
  char entity_9[44] = "";
  char* entity_7;
  char* entity_2;
  char entity_1[32] = "";
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'Q', 32-1);
  entity_1[32-1]='0';
  memset(entity_9, 'r', 44-1);
  entity_9[44-1]='0';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  entity_5 = 44;
  strcpy(entity_7, entity_9);
}