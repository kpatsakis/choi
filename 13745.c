void fun()
{
  int entity_8 = 18;
  char entity_6[5] = "";
  char entity_5[68] = "";
  char entity_2[46] = "";
  char* entity_0;
  memset(entity_6, 'g', 5-1);
  entity_6[5-1]='0';
  memset(entity_5, 'l', 68-1);
  entity_5[68-1]='0';
  memset(entity_2, 'Z', 46-1);
  entity_2[46-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  entity_8 = 12;
  memcpy(entity_0, entity_2, 46*sizeof(char));
}