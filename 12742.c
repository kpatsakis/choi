void fun()
{
  int entity_8 = 6;
  char entity_9[38] = "";
  char entity_1[64] = "";
  char entity_4 = 'P';
  char* entity_5;
  char* entity_2;
  memset(entity_9, 'i', 38-1);
  entity_9[38-1]='0';
  memset(entity_1, 'Y', 64-1);
  entity_1[64-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_2, entity_1, 64*sizeof(char));
}