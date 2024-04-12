void fun()
{
  int entity_5 = 49;
  entity_5 = 88;
  char entity_7[83] = "";
  char* entity_1;
  char entity_4 = 'C';
  char entity_6[88] = "";
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'i', 83-1);
  entity_7[83-1]='0';
  memset(entity_6, 'o', 88-1);
  entity_6[88-1]='0';
  strcpy(entity_1, entity_6);
}