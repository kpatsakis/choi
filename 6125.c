void fun()
{
  int entity_2 = 42;
  char* entity_6;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', entity_2-1);
  entity_7[entity_2-1]='';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[34-1]='';
  memcpy(entity_6, entity_7, entity_2*sizeof(char));
}