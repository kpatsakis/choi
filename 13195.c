void fun()
{
  int entity_0 = 89;
  char* entity_9;
  char* entity_5;
  char entity_6[entity_0] = "";
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'e', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[0]='0';
  entity_0 = 51;
  strcpy(entity_5, entity_6);
}