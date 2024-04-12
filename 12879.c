void fun()
{
  int entity_3 = 53;
  char entity_7 = 'P';
  char* entity_4;
  char entity_1[entity_3] = "";
  memset(entity_1, 's', entity_3-1);
  entity_1[entity_3-1]='0';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_1);
}