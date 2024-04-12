void fun()
{
  int entity_6 = 13;
  entity_6 = 13;
  char entity_8[entity_6] = "";
  char entity_0 = 'v';
  char* entity_1;
  char entity_7 = 'H';
  char* entity_2;
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'h', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_1, entity_8);
}