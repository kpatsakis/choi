void fun()
{
  int entity_8 = 77;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'd', entity_8-1);
  entity_7[entity_8-1]='';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  entity_8 = 17;
  strcpy(entity_2, entity_7);
}