void fun()
{
  int entity_8 = 67;
  entity_8 = 1;
  char* entity_7;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'G', entity_8-1);
  entity_3[entity_8-1]='';
  entity_7 = (char*)malloc(69*sizeof(char));
  entity_7[69-1]='';
  memcpy(entity_7, entity_3, entity_8*sizeof(char));
}