void fun()
{
  int entity_8 = 40;
  int entity_3 = 34;
  entity_8 = 40;
  char* entity_6;
  char* entity_4;
  char entity_9[entity_8] = "";
  entity_4 = (char*)malloc(94*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'Z', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_9);
}