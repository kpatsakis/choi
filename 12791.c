void fun()
{
  int entity_3 = 39;
  int entity_5 = 2;
  char entity_0[entity_5] = "";
  char entity_6 = 'V';
  char* entity_7;
  entity_7 = (char*)malloc(30*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'u', entity_5-1);
  entity_0[entity_5-1]='0';
  strcpy(entity_7, entity_0);
}