void fun()
{
  int entity_9 = 40;
  char* entity_0;
  char entity_8[80] = "";
  char entity_7[99] = "";
  char* entity_6;
  memset(entity_7, 'l', 99-1);
  entity_7[99-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'p', 80-1);
  entity_8[80-1]='0';
  strcpy(entity_0, entity_7);
}