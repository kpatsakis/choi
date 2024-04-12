void fun()
{
  int entity_1 = 90;
  entity_1 = 49;
  char entity_7 = 'E';
  char entity_8[entity_1] = "";
  char* entity_5;
  char entity_3[1] = "";
  char entity_2[94] = "";
  memset(entity_8, 'O', entity_1-1);
  entity_8[entity_1-1]='0';
  memset(entity_3, 'D', 1-1);
  entity_3[1-1]='0';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'a', 94-1);
  entity_2[94-1]='0';
  memcpy(entity_5, entity_8, entity_1*sizeof(char));
}