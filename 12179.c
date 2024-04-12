void fun()
{
  int entity_6 = 67;
  char entity_7[entity_6] = "";
  char entity_8 = 'h';
  char* entity_3;
  char* entity_1;
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'k', entity_6-1);
  entity_7[entity_6-1]='0';
  strcpy(entity_3, entity_7);
}