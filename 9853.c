void fun()
{
  int entity_3 = 40;
  entity_3 = 40;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_4;
  memset(entity_1, 'i', entity_3-1);
  entity_1[entity_3-1]='';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[89-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  strcpy(entity_4, entity_1);
}