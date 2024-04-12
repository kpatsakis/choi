void fun()
{
  int entity_4 = 66;
  char entity_7[entity_4] = "";
  char* entity_8;
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'w', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_4 = 5;
  strcpy(entity_8, entity_7);
}