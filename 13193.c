void fun()
{
  int entity_8 = 22;
  int entity_0 = 11;
  entity_0 = 11;
  char* entity_2;
  char entity_1[entity_0] = "";
  memset(entity_1, 'M', entity_0-1);
  entity_1[entity_0-1]='0';
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}