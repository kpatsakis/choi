void fun()
{
  int entity_0 = 40;
  char entity_7[entity_0] = "";
  char* entity_6;
  memset(entity_7, 'Y', entity_0-1);
  entity_7[entity_0-1]='0';
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_7);
}