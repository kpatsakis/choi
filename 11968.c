void fun()
{
  char* entity_6;
  char entity_2 = 'j';
  char entity_5[64] = "";
  char* entity_8;
  memset(entity_5, 'H', 64-1);
  entity_5[64-1]='0';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_5, 64*sizeof(char));
}