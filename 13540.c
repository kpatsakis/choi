void fun()
{
  int entity_4 = 41;
  char entity_5 = 'P';
  char entity_6[61] = "";
  char* entity_1;
  memset(entity_6, 'y', 61-1);
  entity_6[61-1]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  entity_4 = 52;
  strcpy(entity_1, entity_6);
}