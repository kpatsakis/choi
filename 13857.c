void fun()
{
  int entity_8 = 12;
  entity_8 = 12;
  char entity_1[entity_8] = "";
  char* entity_3;
  memset(entity_1, 'f', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}