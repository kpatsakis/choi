void fun()
{
  int entity_6 = 64;
  char* entity_7;
  char* entity_4;
  char entity_1[9] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 9-1);
  entity_1[9-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[27-1]='';
  strcpy(entity_7, entity_1);
}