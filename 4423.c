void fun()
{
  int entity_6 = 61;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[1-1]='';
  memset(entity_1, 'a', entity_6-1);
  entity_1[entity_6-1]='';
  entity_6 = 34;
  memcpy(entity_5, entity_1, entity_6*sizeof(char));
}