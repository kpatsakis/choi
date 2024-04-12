void fun()
{
  int entity_6 = 12;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'm', entity_6-1);
  entity_1[entity_6-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  entity_6 = 33;
  memcpy(entity_3, entity_1, entity_6*sizeof(char));
}