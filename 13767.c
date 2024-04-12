void fun()
{
  int entity_1 = 7;
  int entity_6 = 62;
  entity_1 = 1;
  char* entity_0;
  char entity_4[38] = "";
  memset(entity_4, 'N', 38-1);
  entity_4[38-1]='0';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 38*sizeof(char));
}