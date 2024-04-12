void fun()
{
  int entity_0 = 97;
  char entity_2 = 'H';
  char* entity_1;
  char entity_5[entity_0] = "";
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'f', entity_0-1);
  entity_5[entity_0-1]='0';
  entity_0 = 83;
  strcpy(entity_1, entity_5);
}