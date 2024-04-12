void fun()
{
  int entity_1 = 89;
  char* entity_7;
  char entity_2 = 'z';
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', entity_1-1);
  entity_6[entity_1-1]='';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  strcpy(entity_7, entity_6);
}