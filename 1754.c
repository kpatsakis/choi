void fun()
{
  int entity_7 = 30;
  char* entity_6;
  char entity_1[70] = "";
  entity_1 = NULL;
  memset(entity_1, 'a', 70-1);
  entity_1[70-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  strcpy(entity_6, entity_1);
}