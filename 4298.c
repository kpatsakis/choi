void fun()
{
  int entity_7 = 5;
  int entity_2 = 1;
  int entity_8 = 13;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_4[11] = "";
  entity_4 = NULL;
  memset(entity_4, 'j', 11-1);
  entity_4[11-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_9, 'O', entity_8-1);
  entity_9[entity_8-1]='';
  entity_8 = 22;
  strcpy(entity_3, entity_9);
}