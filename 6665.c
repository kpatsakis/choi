void fun()
{
  int entity_0 = 6;
  char* entity_5;
  char entity_9 = 'S';
  char entity_7[87] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', 87-1);
  entity_7[87-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  strcpy(entity_5, entity_7);
}