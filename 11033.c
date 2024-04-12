void fun()
{
  int entity_5 = 99;
  char entity_0[3] = "";
  char entity_6[51] = "";
  char* entity_4;
  char* entity_9;
  memset(entity_6, 'I', 51-1);
  entity_6[51-1]='0';
  memset(entity_0, 'i', 3-1);
  entity_0[3-1]='0';
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[0]='0';
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_9, entity_6, 51*sizeof(char));
}