void fun()
{
  int entity_6 = 42;
  char* entity_8;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[56-1]='';
  memset(entity_2, 'N', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 6;
  memcpy(entity_8, entity_2, entity_6*sizeof(char));
}