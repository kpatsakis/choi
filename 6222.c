void fun()
{
  int entity_2 = 3;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'Z', entity_2-1);
  entity_6[entity_2-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  entity_2 = 33;
  strcpy(entity_4, entity_6);
}