void fun()
{
  int entity_7 = 24;
  char entity_6[entity_7] = "";
  char* entity_3;
  char* entity_5;
  char entity_0[50] = "";
  memset(entity_0, 'p', 50-1);
  entity_0[50-1]='0';
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'Z', entity_7-1);
  entity_6[entity_7-1]='0';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}