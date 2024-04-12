void fun()
{
  int entity_8 = 95;
  int entity_1 = 21;
  char* entity_2;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  memset(entity_7, 'j', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_2, entity_7, entity_1*sizeof(char));
}