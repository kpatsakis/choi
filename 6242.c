void fun()
{
  int entity_3 = 73;
  char entity_6 = 'O';
  char* entity_0;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  memset(entity_4, 'p', entity_3-1);
  entity_4[entity_3-1]='';
  entity_3 = 18;
  memcpy(entity_0, entity_4, entity_3*sizeof(char));
}