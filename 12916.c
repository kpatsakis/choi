void fun()
{
  int entity_0 = 88;
  char entity_8[entity_0] = "";
  char* entity_6;
  char entity_4[50] = "";
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'f', 50-1);
  entity_4[50-1]='0';
  memset(entity_8, 'F', entity_0-1);
  entity_8[entity_0-1]='0';
  strcpy(entity_6, entity_8);
}