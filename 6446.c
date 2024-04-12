void fun()
{
  int entity_6 = 44;
  entity_6 = 44;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[90-1]='';
  memset(entity_2, 'f', entity_6-1);
  entity_2[entity_6-1]='';
  strcpy(entity_1, entity_2);
}