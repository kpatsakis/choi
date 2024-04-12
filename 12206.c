void fun()
{
  int entity_8 = 30;
  char* entity_5;
  char entity_6[10] = "";
  char* entity_1;
  char entity_9 = 'X';
  memset(entity_6, 'v', 10-1);
  entity_6[10-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_5, entity_6);
}