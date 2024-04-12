void fun()
{
  int entity_0 = 82;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[69-1]='';
  memset(entity_2, 'p', entity_0-1);
  entity_2[entity_0-1]='';
  entity_0 = 46;
  memcpy(entity_1, entity_2, entity_0*sizeof(char));
}