void fun()
{
  int entity_0 = 24;
  int entity_2 = 57;
  entity_0 = 24;
  char* entity_9;
  char* entity_8;
  char entity_4[entity_0] = "";
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[0]='0';
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'Q', entity_0-1);
  entity_4[entity_0-1]='0';
  strcpy(entity_8, entity_4);
}