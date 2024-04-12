void fun()
{
  int entity_2 = 81;
  entity_2 = 77;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_4, 'E', entity_2-1);
  entity_4[entity_2-1]='';
  memcpy(entity_6, entity_4, entity_2*sizeof(char));
}