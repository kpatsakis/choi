void fun()
{
  int entity_4 = 94;
  char* entity_7;
  char entity_9[91] = "";
  char* entity_2;
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'l', 91-1);
  entity_9[91-1]='0';
  strcpy(entity_7, entity_9);
}