void fun()
{
  int entity_2 = 93;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memset(entity_1, 'm', entity_2-1);
  entity_1[entity_2-1]='';
  entity_2 = 32;
  memcpy(entity_4, entity_1, entity_2*sizeof(char));
}