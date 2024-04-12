void fun()
{
  int entity_6 = 64;
  entity_6 = 64;
  char* entity_7;
  char entity_5[entity_6] = "";
  memset(entity_5, 'R', entity_6-1);
  entity_5[entity_6-1]='0';
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_5);
}