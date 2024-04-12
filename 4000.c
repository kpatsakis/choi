void fun()
{
  int entity_1 = 85;
  int entity_2 = 74;
  int entity_3 = 69;
  int entity_9 = 35;
  char* entity_4;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[9-1]='';
  memset(entity_6, 'F', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 12;
  strcpy(entity_4, entity_6);
}