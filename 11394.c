void fun()
{
  char entity_8[58] = "";
  char* entity_6;
  char entity_3[9] = "";
  char* entity_7;
  memset(entity_3, 'L', 9-1);
  entity_3[9-1]='0';
  memset(entity_8, 'b', 58-1);
  entity_8[58-1]='0';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[0]='0';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_8);
}