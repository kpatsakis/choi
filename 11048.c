void fun()
{
  char entity_1[87] = "";
  char entity_8 = 'h';
  char* entity_5;
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'X', 87-1);
  entity_1[87-1]='0';
  memcpy(entity_5, entity_1, 87*sizeof(char));
}