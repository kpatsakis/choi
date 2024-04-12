void fun()
{
  int entity_6 = 72;
  char* entity_7;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', entity_6-1);
  entity_2[entity_6-1]='';
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  entity_6 = 29;
  strcpy(entity_7, entity_2);
}