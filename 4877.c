void fun()
{
  int entity_2 = 78;
  entity_2 = 78;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[71-1]='';
  memset(entity_7, 'x', entity_2-1);
  entity_7[entity_2-1]='';
  strcpy(entity_0, entity_7);
}