void fun()
{
  int entity_7 = 25;
  char* entity_1;
  char* entity_6;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_2, 'l', entity_7-1);
  entity_2[entity_7-1]='';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  strcpy(entity_6, entity_2);
}