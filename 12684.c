void fun()
{
  int entity_0 = 24;
  char entity_2[entity_0] = "";
  char* entity_4;
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'f', entity_0-1);
  entity_2[entity_0-1]='0';
  strcpy(entity_4, entity_2);
}