void fun()
{
  int entity_2 = 94;
  char* entity_0;
  char entity_7[74] = "";
  entity_7 = NULL;
  memset(entity_7, 'I', 74-1);
  entity_7[74-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  strcpy(entity_0, entity_7);
}