void fun()
{
  int entity_6 = 29;
  char* entity_1;
  char entity_5[17] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_5, 'w', 17-1);
  entity_5[17-1]='';
  entity_6 = 60;
  memcpy(entity_1, entity_5, 17*sizeof(char));
}