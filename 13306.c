void fun()
{
  int entity_2 = 71;
  int entity_4 = 94;
  int entity_6 = 78;
  entity_2 = 71;
  char entity_0[entity_2] = "";
  char* entity_5;
  char entity_7[3] = "";
  memset(entity_7, 'Z', 3-1);
  entity_7[3-1]='0';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'D', entity_2-1);
  entity_0[entity_2-1]='0';
  strcpy(entity_5, entity_0);
}