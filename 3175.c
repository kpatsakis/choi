void fun()
{
  int entity_2 = 32;
  entity_2 = 32;
  char* entity_3;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_1 = 'u';
  entity_3 = (char*)malloc(100*sizeof(char));
  entity_3[100-1]='';
  memset(entity_5, 'f', entity_2-1);
  entity_5[entity_2-1]='';
  strcpy(entity_3, entity_5);
}