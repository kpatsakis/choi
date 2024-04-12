void fun()
{
  int entity_5 = 37;
  char* entity_7;
  char entity_0[entity_5] = "";
  memset(entity_0, 'G', entity_5-1);
  entity_0[entity_5-1]='0';
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[0]='0';
  entity_5 = 90;
  strcpy(entity_7, entity_0);
}