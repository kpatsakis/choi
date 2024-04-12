void fun()
{
  int entity_8 = 12;
  char entity_4[entity_8] = "";
  char* entity_2;
  memset(entity_4, 'Y', entity_8-1);
  entity_4[entity_8-1]='0';
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[0]='0';
  entity_8 = 67;
  strcpy(entity_2, entity_4);
}