void fun()
{
  int entity_1 = 47;
  entity_1 = 22;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  memset(entity_5, 'Z', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_3, entity_5, entity_1*sizeof(char));
}