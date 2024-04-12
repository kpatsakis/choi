void fun()
{
  int entity_2 = 13;
  char entity_8 = 'Z';
  char entity_0[entity_2] = "";
  char entity_6[47] = "";
  char* entity_5;
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'S', entity_2-1);
  entity_0[entity_2-1]='0';
  memset(entity_6, 'A', 47-1);
  entity_6[47-1]='0';
  strcpy(entity_5, entity_0);
}