void fun()
{
  int entity_7 = 41;
  char entity_0[entity_7] = "";
  char entity_1[51] = "";
  char* entity_5;
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'x', entity_7-1);
  entity_0[entity_7-1]='0';
  memset(entity_1, 'o', 51-1);
  entity_1[51-1]='0';
  entity_7 = 100;
  strcpy(entity_5, entity_0);
}