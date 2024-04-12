void fun()
{
  int entity_3 = 21;
  int entity_2 = 7;
  char entity_1[entity_3] = "";
  char* entity_4;
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'g', entity_3-1);
  entity_1[entity_3-1]='0';
  strcpy(entity_4, entity_1);
}