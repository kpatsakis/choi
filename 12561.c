void fun()
{
  int entity_0 = 45;
  char entity_3[entity_0] = "";
  char* entity_6;
  memset(entity_3, 'y', entity_0-1);
  entity_3[entity_0-1]='0';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}