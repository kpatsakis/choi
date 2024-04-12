void fun()
{
  int entity_0 = 15;
  char* entity_3;
  char* entity_9;
  char entity_6[entity_0] = "";
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'q', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_3 = (char*)malloc(100*sizeof(char));
  entity_3[0]='0';
  entity_0 = 51;
  strcpy(entity_3, entity_6);
}