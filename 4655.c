void fun()
{
  int entity_1 = 43;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'r', entity_1-1);
  entity_5[entity_1-1]='';
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[43-1]='';
  entity_1 = 62;
  memcpy(entity_3, entity_5, entity_1*sizeof(char));
}