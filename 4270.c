void fun()
{
  int entity_6 = 49;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'D', entity_6-1);
  entity_7[entity_6-1]='';
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[88-1]='';
  entity_6 = 91;
  memcpy(entity_1, entity_7, entity_6*sizeof(char));
}