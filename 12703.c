void fun()
{
  int entity_4 = 55;
  char* entity_7;
  char entity_8[entity_4] = "";
  char entity_1 = 'T';
  memset(entity_8, 'c', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_8);
}