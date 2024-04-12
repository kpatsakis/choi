void fun()
{
  int entity_5 = 29;
  char entity_6[81] = "";
  char* entity_1;
  char* entity_9;
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'r', 81-1);
  entity_6[81-1]='0';
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_9, entity_6);
}