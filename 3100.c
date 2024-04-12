void fun()
{
  int entity_8 = 57;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_1;
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  memset(entity_2, 'j', entity_8-1);
  entity_2[entity_8-1]='';
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  memcpy(entity_0, entity_2, entity_8*sizeof(char));
}