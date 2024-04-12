void fun()
{
  int entity_2 = 90;
  char entity_7[60] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'C', 60-1);
  entity_7[60-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_2 = 64;
  strcpy(entity_1, entity_7);
}