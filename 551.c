void fun()
{
  int entity_2 = 89;
  int entity_4 = 78;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'r', entity_4-1);
  entity_3[entity_4-1]='';
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  strcpy(entity_6, entity_3);
}