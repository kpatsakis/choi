void fun()
{
  int entity_6 = 49;
  int entity_4 = 68;
  char entity_2 = 'F';
  char* entity_8;
  char entity_3[15] = "";
  char entity_9 = 'l';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'q', 15-1);
  entity_3[15-1]='0';
  strcpy(entity_8, entity_3);
}