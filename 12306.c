void fun()
{
  int entity_6 = 35;
  char* entity_5;
  char entity_7[entity_6] = "";
  memset(entity_7, 'E', entity_6-1);
  entity_7[entity_6-1]='0';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_7);
}