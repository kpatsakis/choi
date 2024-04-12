void fun()
{
  int entity_4 = 57;
  char entity_8[entity_4] = "";
  char* entity_3;
  char entity_5 = 'u';
  char entity_1[99] = "";
  char* entity_2;
  memset(entity_1, 'W', 99-1);
  entity_1[99-1]='0';
  entity_2 = (char*)malloc(11*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'O', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_8);
}