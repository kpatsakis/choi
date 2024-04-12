void fun()
{
  char entity_4 = 'O';
  char* entity_8;
  char entity_6 = 'Y';
  char entity_2[57] = "";
  char entity_7 = 'Z';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'H', 57-1);
  entity_2[57-1]='0';
  memcpy(entity_8, entity_2, 57*sizeof(char));
}