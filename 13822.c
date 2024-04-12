void fun()
{
  int entity_6 = 15;
  entity_6 = 15;
  char entity_0[entity_6] = "";
  char* entity_7;
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'F', entity_6-1);
  entity_0[entity_6-1]='0';
  strcpy(entity_7, entity_0);
}