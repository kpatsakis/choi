void fun()
{
  int entity_1 = 57;
  entity_1 = 4;
  char* entity_4;
  char entity_7[28] = "";
  char entity_3[89] = "";
  char* entity_0;
  memset(entity_7, 'R', 28-1);
  entity_7[28-1]='0';
  memset(entity_3, 'b', 89-1);
  entity_3[89-1]='0';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}