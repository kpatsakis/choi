void fun()
{
  int entity_7 = 78;
  int entity_1 = 13;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_9 = 'T';
  char* entity_2;
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  memset(entity_3, 'H', entity_1-1);
  entity_3[entity_1-1]='';
  memcpy(entity_2, entity_3, entity_1*sizeof(char));
}