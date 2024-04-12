void fun()
{
  int entity_2 = 70;
  char entity_3[entity_2] = "";
  char* entity_0;
  memset(entity_3, 'S', entity_2-1);
  entity_3[entity_2-1]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  entity_2 = 86;
  strcpy(entity_0, entity_3);
}