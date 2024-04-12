void fun()
{
  int entity_8 = 66;
  int entity_1 = 48;
  entity_1 = 93;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_2[7] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[42-1]='';
  memset(entity_2, 'J', 7-1);
  entity_2[7-1]='';
  memset(entity_6, 'k', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[70] = 'm';
}