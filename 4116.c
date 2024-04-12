void fun()
{
  int entity_6 = 85;
  char* entity_8;
  char* entity_1;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[30-1]='';
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[80-1]='';
  memset(entity_7, 'c', entity_6-1);
  entity_7[entity_6-1]='';
  strcpy(entity_8, entity_7);
}