void fun()
{
  int entity_8 = 49;
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(100*sizeof(char));
  entity_3[100-1]='';
  memset(entity_7, 'W', entity_8-1);
  entity_7[entity_8-1]='';
  strcpy(entity_3, entity_7);
}