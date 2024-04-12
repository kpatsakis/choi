void fun()
{
  int entity_7 = 40;
  char* entity_5;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[22-1]='';
  memset(entity_3, 'F', entity_7-1);
  entity_3[entity_7-1]='';
  strcpy(entity_5, entity_3);
}