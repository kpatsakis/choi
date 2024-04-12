void fun()
{
  char entity_4[47] = "";
  char* entity_8;
  char* entity_3;
  char* entity_5;
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[0]='0';
  entity_5 = (char*)malloc(10*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'H', 47-1);
  entity_4[47-1]='0';
  memcpy(entity_3, entity_4, 47*sizeof(char));
}