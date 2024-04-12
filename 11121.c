void fun()
{
  char* entity_7;
  char entity_3[11] = "";
  char* entity_8;
  char entity_5 = 'E';
  char entity_2[34] = "";
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'l', 11-1);
  entity_3[11-1]='0';
  memset(entity_2, 'B', 34-1);
  entity_2[34-1]='0';
  memcpy(entity_8, entity_2, 34*sizeof(char));
}