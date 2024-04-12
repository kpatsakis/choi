void fun()
{
  int entity_7 = 21;
  char entity_8[entity_7] = "";
  char* entity_5;
  memset(entity_8, 'B', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[0]='0';
  entity_7 = 16;
  strcpy(entity_5, entity_8);
}