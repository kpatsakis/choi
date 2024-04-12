void fun()
{
  int entity_4 = 72;
  int entity_3 = 55;
  char entity_6 = 'b';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'E', entity_4-1);
  entity_7[entity_4-1]='';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  entity_4 = 63;
  strcpy(entity_2, entity_7);
}