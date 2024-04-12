void fun()
{
  int entity_8 = 7;
  char entity_5[entity_8] = "";
  char* entity_1;
  memset(entity_5, 'r', entity_8-1);
  entity_5[entity_8-1]='0';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_5);
}