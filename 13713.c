void fun()
{
  int entity_7 = 96;
  entity_7 = 9;
  char* entity_0;
  char entity_8 = 'H';
  char* entity_1;
  char entity_9[30] = "";
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'X', 30-1);
  entity_9[30-1]='0';
  strcpy(entity_0, entity_9);
}