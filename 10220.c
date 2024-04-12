void fun()
{
  char entity_1[65] = "";
  char* entity_8;
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'J', 65-1);
  entity_1[65-1]='0';
  entity_1[62] = 'O';
}