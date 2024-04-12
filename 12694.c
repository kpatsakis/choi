void fun()
{
  int entity_1 = 55;
  char* entity_2;
  char entity_7 = 'O';
  char* entity_3;
  char entity_0[entity_1] = "";
  memset(entity_0, 'H', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_0);
}