void fun()
{
  char* entity_1;
  char entity_4 = 'u';
  char entity_5[12] = "";
  char* entity_6;
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[0]='0';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'a', 12-1);
  entity_5[12-1]='0';
  memcpy(entity_1, entity_5, 12*sizeof(char));
}