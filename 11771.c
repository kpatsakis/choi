void fun()
{
  char* entity_4;
  char* entity_8;
  char entity_3[25] = "";
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'G', 25-1);
  entity_3[25-1]='0';
  memcpy(entity_8, entity_3, 25*sizeof(char));
}