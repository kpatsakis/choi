void fun()
{
  int entity_5 = 23;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[85-1]='';
  memset(entity_4, 's', entity_5-1);
  entity_4[entity_5-1]='';
  entity_5 = 28;
  memcpy(entity_1, entity_4, entity_5*sizeof(char));
}