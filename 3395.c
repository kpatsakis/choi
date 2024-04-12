void fun()
{
  int entity_6 = 99;
  entity_6 = 99;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memset(entity_4, 'b', entity_6-1);
  entity_4[entity_6-1]='';
  strcpy(entity_2, entity_4);
}