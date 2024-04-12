void fun()
{
  int entity_1 = 55;
  int entity_3 = 0;
  char* entity_4;
  char entity_2[64] = "";
  char entity_7 = 'd';
  char* entity_9;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'p', 64-1);
  entity_2[64-1]='0';
  entity_4 = (char*)malloc(2*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_9, entity_2, 64*sizeof(char));
}