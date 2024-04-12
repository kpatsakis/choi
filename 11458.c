void fun()
{
  char* entity_1;
  char* entity_3;
  char entity_2[59] = "";
  char entity_8[40] = "";
  memset(entity_8, 'D', 40-1);
  entity_8[40-1]='0';
  memset(entity_2, 'T', 59-1);
  entity_2[59-1]='0';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_3, entity_2, 59*sizeof(char));
}