void fun()
{
  char* entity_2;
  char* entity_1;
  char entity_8[8] = "";
  char entity_3[30] = "";
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'O', 8-1);
  entity_8[8-1]='0';
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'Q', 30-1);
  entity_3[30-1]='0';
  memcpy(entity_1, entity_3, 30*sizeof(char));
}