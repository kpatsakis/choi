void fun()
{
  int entity_1 = 46;
  int entity_8 = 61;
  entity_8 = 15;
  char* entity_7;
  char entity_5[95] = "";
  char entity_3[76] = "";
  char entity_2 = 'n';
  memset(entity_5, 'l', 95-1);
  entity_5[95-1]='0';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'o', 76-1);
  entity_3[76-1]='0';
  memcpy(entity_7, entity_3, 76*sizeof(char));
}