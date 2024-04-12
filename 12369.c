void fun()
{
  int entity_0 = 79;
  char entity_2[entity_0] = "";
  char* entity_6;
  memset(entity_2, 'h', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_2);
}