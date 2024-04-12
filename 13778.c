void fun()
{
  int entity_0 = 4;
  int entity_4 = 82;
  int entity_2 = 97;
  char entity_6[49] = "";
  char* entity_1;
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'e', 49-1);
  entity_6[49-1]='0';
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[0]='0';
  entity_2 = 42;
  strcpy(entity_3, entity_6);
}