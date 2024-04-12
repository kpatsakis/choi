void fun()
{
  int entity_1 = 36;
  char* entity_3;
  char entity_8[entity_1] = "";
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'y', entity_1-1);
  entity_8[entity_1-1]='0';
  strcpy(entity_3, entity_8);
}