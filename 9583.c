void fun()
{
  int entity_8 = 76;
  char entity_1[100] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'D', 100-1);
  entity_1[100-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_1);
}