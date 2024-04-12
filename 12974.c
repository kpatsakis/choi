void fun()
{
  int entity_7 = 11;
  char* entity_1;
  char entity_6[entity_7] = "";
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'N', entity_7-1);
  entity_6[entity_7-1]='0';
  strcpy(entity_1, entity_6);
}