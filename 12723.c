void fun()
{
  int entity_0 = 98;
  char entity_2[53] = "";
  char entity_8 = 'O';
  char* entity_6;
  char* entity_4;
  memset(entity_2, 'u', 53-1);
  entity_2[53-1]='0';
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 53*sizeof(char));
}