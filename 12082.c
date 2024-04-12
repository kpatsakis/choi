void fun()
{
  int entity_9 = 87;
  char* entity_8;
  char* entity_0;
  char* entity_5;
  char entity_4[41] = "";
  char entity_2 = 'N';
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'G', 41-1);
  entity_4[41-1]='0';
  strcpy(entity_0, entity_4);
}