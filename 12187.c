void fun()
{
  int entity_3 = 86;
  char* entity_2;
  char entity_5 = 'G';
  char entity_1[entity_3] = "";
  memset(entity_1, 'i', entity_3-1);
  entity_1[entity_3-1]='0';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}