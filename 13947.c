void fun()
{
  int entity_1 = 58;
  entity_1 = 2;
  char entity_5[58] = "";
  char entity_6 = 'J';
  char entity_7[63] = "";
  char entity_2[37] = "";
  char* entity_8;
  memset(entity_2, 'z', 37-1);
  entity_2[37-1]='0';
  memset(entity_5, 'j', 58-1);
  entity_5[58-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'S', 63-1);
  entity_7[63-1]='0';
  memcpy(entity_8, entity_5, 58*sizeof(char));
}