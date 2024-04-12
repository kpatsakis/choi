void fun()
{
  int entity_0 = 16;
  char* entity_5;
  char entity_6[entity_0] = "";
  entity_5 = (char*)malloc(72*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'P', entity_0-1);
  entity_6[entity_0-1]='0';
  strcpy(entity_5, entity_6);
}