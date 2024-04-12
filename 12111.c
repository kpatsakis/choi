void fun()
{
  int entity_8 = 46;
  char* entity_3;
  char entity_2[58] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'U', 58-1);
  entity_2[58-1]='0';
  strcpy(entity_1, entity_2);
}