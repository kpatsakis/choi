void fun()
{
  int entity_2 = 45;
  int entity_1 = 17;
  entity_1 = 17;
  char entity_0[entity_1] = "";
  char* entity_3;
  char* entity_7;
  char entity_4 = 'p';
  memset(entity_0, 'M', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[0]='0';
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_3, entity_0);
}