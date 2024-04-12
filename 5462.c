void fun()
{
  int entity_6 = 87;
  int entity_2 = 20;
  char entity_8[13] = "";
  entity_8 = NULL;
  char* entity_7;
  char* entity_1;
  memset(entity_8, 'n', 13-1);
  entity_8[13-1]='';
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  strcpy(entity_1, entity_8);
}