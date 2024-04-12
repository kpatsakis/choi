void fun()
{
  int entity_2 = 27;
  char entity_1[89] = "";
  char* entity_8;
  char* entity_0;
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[0]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'a', 89-1);
  entity_1[89-1]='0';
  strcpy(entity_8, entity_1);
}