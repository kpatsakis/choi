void fun()
{
  int entity_7 = 29;
  int entity_3 = 34;
  char* entity_8;
  char entity_6 = 'o';
  char entity_5[80] = "";
  memset(entity_5, 'A', 80-1);
  entity_5[80-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_5, 80*sizeof(char));
}