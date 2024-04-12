void fun()
{
  int entity_6 = 45;
  entity_6 = 78;
  char entity_5[98] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_7 = 'l';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_5, 'h', 98-1);
  entity_5[98-1]='';
  memcpy(entity_1, entity_5, 98*sizeof(char));
}