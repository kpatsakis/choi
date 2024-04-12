void fun()
{
  int entity_0 = 10;
  char entity_8[16] = "";
  char entity_1[16] = "";
  char* entity_4;
  char entity_9[35] = "";
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'I', 16-1);
  entity_1[16-1]='0';
  memset(entity_9, 'b', 35-1);
  entity_9[35-1]='0';
  memset(entity_8, 'P', 16-1);
  entity_8[16-1]='0';
  entity_0 = 35;
  memcpy(entity_4, entity_8, 16*sizeof(char));
}