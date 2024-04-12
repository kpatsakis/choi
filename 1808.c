void fun()
{
  int entity_6 = 95;
  entity_6 = 17;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  memset(entity_1, 'W', entity_6-1);
  entity_1[entity_6-1]='';
  memcpy(entity_2, entity_1, entity_6*sizeof(char));
}