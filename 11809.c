void fun()
{
  char entity_8[31] = "";
  char* entity_0;
  char* entity_1;
  char entity_2 = 'm';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[0]='0';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'f', 31-1);
  entity_8[31-1]='0';
  strcpy(entity_0, entity_8);
}