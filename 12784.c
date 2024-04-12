void fun()
{
  int entity_0 = 98;
  char* entity_4;
  char entity_9[3] = "";
  char entity_2 = 'S';
  char entity_6[99] = "";
  char* entity_5;
  memset(entity_6, 'd', 99-1);
  entity_6[99-1]='0';
  memset(entity_9, 'O', 3-1);
  entity_9[3-1]='0';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_6);
}