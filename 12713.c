void fun()
{
  int entity_0 = 23;
  char entity_7 = 'H';
  char* entity_1;
  char entity_6[entity_0] = "";
  memset(entity_6, 'X', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}