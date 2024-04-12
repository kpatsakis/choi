void fun()
{
  int entity_4 = 3;
  entity_4 = 3;
  char entity_7[entity_4] = "";
  char* entity_1;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'N', entity_4-1);
  entity_7[entity_4-1]='0';
  strcpy(entity_1, entity_7);
}