void fun()
{
  int entity_2 = 59;
  char entity_9 = 'G';
  char* entity_1;
  char entity_4[entity_2] = "";
  entity_1 = (char*)malloc(79*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'h', entity_2-1);
  entity_4[entity_2-1]='0';
  strcpy(entity_1, entity_4);
}