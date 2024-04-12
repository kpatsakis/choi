void fun()
{
  int entity_6 = 87;
  char* entity_4;
  char entity_0[20] = "";
  char entity_8 = 'N';
  char entity_1 = 't';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'w', 20-1);
  entity_0[20-1]='0';
  entity_6 = 78;
  memcpy(entity_4, entity_0, 20*sizeof(char));
}