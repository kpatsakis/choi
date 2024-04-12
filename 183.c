void fun()
{
  int entity_6 = 19;
  char* entity_2;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', entity_6-1);
  entity_7[entity_6-1]='';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  strcpy(entity_2, entity_7);
}