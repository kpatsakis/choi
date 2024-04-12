void fun()
{
  int entity_7 = 87;
  entity_7 = 87;
  char entity_4[entity_7] = "";
  char* entity_5;
  memset(entity_4, 'C', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}