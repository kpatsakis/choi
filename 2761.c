void fun()
{
  int entity_6 = 78;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'Y', entity_6-1);
  entity_7[entity_6-1]='';
  entity_1 = (char*)malloc(44*sizeof(char));
  entity_1[44-1]='';
  entity_6 = 42;
  memcpy(entity_1, entity_7, entity_6*sizeof(char));
}