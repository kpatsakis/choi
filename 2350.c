void fun()
{
  int entity_2 = 91;
  char* entity_4;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_1 = 'o';
  memset(entity_5, 'j', entity_2-1);
  entity_5[entity_2-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memcpy(entity_4, entity_5, entity_2*sizeof(char));
}