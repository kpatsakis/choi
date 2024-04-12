void fun()
{
  int entity_1 = 96;
  char* entity_3;
  char entity_5[32] = "";
  char* entity_9;
  char* entity_4;
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[0]='0';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 't', 32-1);
  entity_5[32-1]='0';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_4, entity_5, 32*sizeof(char));
}