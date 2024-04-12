void fun()
{
  int entity_6 = 70;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[65-1]='';
  memset(entity_4, 'y', entity_6-1);
  entity_4[entity_6-1]='';
  memcpy(entity_5, entity_4, entity_6*sizeof(char));
}