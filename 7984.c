void fun()
{
  int entity_6 = 30;
  entity_6 = 30;
  char* entity_8;
  char* entity_9;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'w', entity_6-1);
  entity_1[entity_6-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  entity_8 = (char*)malloc(27*sizeof(char));
  entity_8[27-1]='';
  strcpy(entity_8, entity_1);
}