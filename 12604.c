void fun()
{
  int entity_0 = 50;
  char* entity_7;
  char* entity_9;
  char entity_4[entity_0] = "";
  char entity_1 = 'P';
  memset(entity_4, 'a', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_7 = (char*)malloc(25*sizeof(char));
  entity_7[0]='0';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_7, entity_4);
}