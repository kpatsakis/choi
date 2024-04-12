void fun()
{
  int entity_3 = 57;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(40*sizeof(char));
  entity_0[40-1]='';
  memset(entity_7, 'g', entity_3-1);
  entity_7[entity_3-1]='';
  strcpy(entity_0, entity_7);
}