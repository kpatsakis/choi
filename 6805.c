void fun()
{
  int entity_4 = 31;
  int entity_7 = 58;
  char* entity_9;
  char entity_6[93] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  memset(entity_6, 'V', 93-1);
  entity_6[93-1]='';
  strcpy(entity_9, entity_6);
}