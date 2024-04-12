void fun()
{
  int entity_4 = 43;
  int entity_1 = 95;
  char entity_9 = 'f';
  char* entity_7;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', entity_1-1);
  entity_3[entity_1-1]='';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[37-1]='';
  entity_1 = 8;
  strcpy(entity_7, entity_3);
}