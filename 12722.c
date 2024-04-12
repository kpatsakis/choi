void fun()
{
  int entity_7 = 64;
  char* entity_2;
  char entity_8 = 'W';
  char entity_1[entity_7] = "";
  char entity_0 = 'n';
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'X', entity_7-1);
  entity_1[entity_7-1]='0';
  strcpy(entity_2, entity_1);
}