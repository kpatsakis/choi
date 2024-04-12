void fun()
{
  int entity_3 = 80;
  entity_3 = 80;
  char entity_4[entity_3] = "";
  char* entity_7;
  memset(entity_4, 'M', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}