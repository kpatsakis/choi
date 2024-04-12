void fun()
{
  int entity_1 = 18;
  entity_1 = 18;
  char* entity_6;
  char entity_0[entity_1] = "";
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'j', entity_1-1);
  entity_0[entity_1-1]='0';
  strcpy(entity_6, entity_0);
}