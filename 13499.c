void fun()
{
  int entity_8 = 21;
  char entity_6[81] = "";
  char entity_9 = 'j';
  char* entity_2;
  char entity_1 = 'v';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'c', 81-1);
  entity_6[81-1]='0';
  entity_8 = 25;
  strcpy(entity_2, entity_6);
}