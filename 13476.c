void fun()
{
  int entity_8 = 38;
  int entity_6 = 42;
  int entity_2 = 74;
  char entity_1[entity_2] = "";
  char* entity_4;
  char* entity_3;
  memset(entity_1, 'f', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_4 = (char*)malloc(64*sizeof(char));
  entity_4[0]='0';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[0]='0';
  entity_2 = 90;
  strcpy(entity_4, entity_1);
}