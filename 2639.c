void fun()
{
  int entity_6 = 8;
  entity_6 = 63;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  memset(entity_1, 't', entity_6-1);
  entity_1[entity_6-1]='';
  memcpy(entity_2, entity_1, entity_6*sizeof(char));
}