void fun()
{
  int entity_6 = 48;
  char entity_7 = 'x';
  char* entity_3;
  char entity_8[33] = "";
  char entity_4 = 'x';
  char entity_9 = 'z';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'R', 33-1);
  entity_8[33-1]='0';
  entity_6 = 76;
  strcpy(entity_3, entity_8);
}