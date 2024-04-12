void fun()
{
  int entity_5 = 11;
  int entity_4 = 16;
  int entity_7 = 25;
  char* entity_2;
  char* entity_3;
  char entity_1[65] = "";
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'k', 65-1);
  entity_1[65-1]='0';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[0]='0';
  entity_5 = 10;
  strcpy(entity_3, entity_1);
}