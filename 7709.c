void fun()
{
  int entity_1 = 100;
  char* entity_8;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char entity_3 = 'l';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[59-1]='';
  memset(entity_7, 'G', entity_1-1);
  entity_7[entity_1-1]='';
  entity_1 = 46;
  strcpy(entity_8, entity_7);
}