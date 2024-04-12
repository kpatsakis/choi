void fun()
{
  int entity_0 = 82;
  char entity_4[entity_0] = "";
  char* entity_7;
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'q', entity_0-1);
  entity_4[entity_0-1]='0';
  strcpy(entity_7, entity_4);
}