void fun()
{
  int entity_1 = 13;
  int entity_7 = 2;
  char entity_3[entity_1] = "";
  char* entity_4;
  memset(entity_3, 'Q', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[0]='0';
  entity_1 = 44;
  strcpy(entity_4, entity_3);
}