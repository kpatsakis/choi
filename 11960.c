void fun()
{
  int entity_8 = 4;
  char entity_4[3] = "";
  char* entity_2;
  char entity_7 = 'Z';
  char entity_6[27] = "";
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'X', 3-1);
  entity_4[3-1]='0';
  memset(entity_6, 'n', 27-1);
  entity_6[27-1]='0';
  memcpy(entity_2, entity_6, 27*sizeof(char));
}