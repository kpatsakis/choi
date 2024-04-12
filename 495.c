void fun()
{
  int entity_1 = 89;
  int entity_8 = 30;
  int entity_2 = 61;
  char* entity_7;
  char entity_5[42] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_5, 'U', 42-1);
  entity_5[42-1]='';
  memcpy(entity_7, entity_5, 42*sizeof(char));
}