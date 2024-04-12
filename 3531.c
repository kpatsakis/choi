void fun()
{
  int entity_1 = 40;
  char* entity_3;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  memset(entity_5, 'd', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_3, entity_5, entity_1*sizeof(char));
}