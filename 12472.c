void fun()
{
  int entity_1 = 48;
  char* entity_6;
  char* entity_7;
  char* entity_3;
  char entity_2[12] = "";
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[0]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'V', 12-1);
  entity_2[12-1]='0';
  memcpy(entity_7, entity_2, 12*sizeof(char));
}