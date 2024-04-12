void fun()
{
  int entity_6 = 57;
  char* entity_1;
  char entity_0[69] = "";
  char* entity_9;
  char entity_8 = 's';
  char* entity_2;
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'P', 69-1);
  entity_0[69-1]='0';
  memcpy(entity_1, entity_0, 69*sizeof(char));
}