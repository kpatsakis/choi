void fun()
{
  int entity_4 = 98;
  entity_4 = 98;
  char entity_2[entity_4] = "";
  char* entity_1;
  memset(entity_2, 'h', entity_4-1);
  entity_2[entity_4-1]='0';
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_2);
}