void fun()
{
  int entity_1 = 27;
  int entity_8 = 98;
  char entity_7 = 'p';
  char entity_9[62] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'e', 62-1);
  entity_9[62-1]='0';
  strcpy(entity_6, entity_9);
}