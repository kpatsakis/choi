void fun()
{
  int entity_7 = 55;
  entity_7 = 55;
  char* entity_2;
  char entity_4[entity_7] = "";
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'S', entity_7-1);
  entity_4[entity_7-1]='0';
  strcpy(entity_2, entity_4);
}