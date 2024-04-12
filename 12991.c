void fun()
{
  int entity_0 = 8;
  char entity_7[entity_0] = "";
  char* entity_4;
  char entity_3[0] = "";
  memset(entity_7, 'L', entity_0-1);
  entity_7[entity_0-1]='0';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'X', 0-1);
  entity_3[0-1]='0';
  strcpy(entity_4, entity_7);
}