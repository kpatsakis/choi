void fun()
{
  int entity_3 = 75;
  char* entity_6;
  char* entity_8;
  char entity_0[76] = "";
  memset(entity_0, 'C', 76-1);
  entity_0[76-1]='0';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_0, 76*sizeof(char));
}