void fun()
{
  char entity_3 = 'O';
  char entity_9[33] = "";
  char* entity_5;
  char* entity_8;
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[0]='0';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'P', 33-1);
  entity_9[33-1]='0';
  memcpy(entity_8, entity_9, 33*sizeof(char));
}