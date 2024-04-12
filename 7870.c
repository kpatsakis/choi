void fun()
{
  int entity_6 = 79;
  char* entity_4;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', entity_6-1);
  entity_3[entity_6-1]='';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  memcpy(entity_4, entity_3, entity_6*sizeof(char));
}