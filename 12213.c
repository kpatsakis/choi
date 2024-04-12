void fun()
{
  int entity_5 = 34;
  char entity_4[entity_5] = "";
  char* entity_6;
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'd', entity_5-1);
  entity_4[entity_5-1]='0';
  strcpy(entity_6, entity_4);
}