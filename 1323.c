void fun()
{
  int entity_4 = 11;
  entity_4 = 25;
  char* entity_1;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', entity_4-1);
  entity_3[entity_4-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memcpy(entity_1, entity_3, entity_4*sizeof(char));
}