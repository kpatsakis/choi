void fun()
{
  int entity_2 = 35;
  entity_2 = 9;
  char* entity_1;
  char entity_6[52] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', 52-1);
  entity_6[52-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  strcpy(entity_1, entity_6);
}