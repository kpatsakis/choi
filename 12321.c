void fun()
{
  int entity_1 = 30;
  char* entity_5;
  char entity_4[entity_1] = "";
  entity_5 = (char*)malloc(82*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'c', entity_1-1);
  entity_4[entity_1-1]='0';
  strcpy(entity_5, entity_4);
}