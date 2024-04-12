void fun()
{
  int entity_0 = 45;
  char* entity_8;
  char entity_1[13] = "";
  char* entity_4;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'E', 13-1);
  entity_1[13-1]='0';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[0]='0';
  entity_0 = 92;
  memcpy(entity_8, entity_1, 13*sizeof(char));
}