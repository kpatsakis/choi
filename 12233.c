void fun()
{
  int entity_0 = 16;
  char* entity_1;
  char entity_3[entity_0] = "";
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'U', entity_0-1);
  entity_3[entity_0-1]='0';
  strcpy(entity_1, entity_3);
}