void fun()
{
  int entity_3 = 98;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_7, 'G', entity_3-1);
  entity_7[entity_3-1]='';
  strcpy(entity_4, entity_7);
}