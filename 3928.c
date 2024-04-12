void fun()
{
  int entity_3 = 17;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[75-1]='';
  memset(entity_1, 'm', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 70;
  memcpy(entity_6, entity_1, entity_3*sizeof(char));
}